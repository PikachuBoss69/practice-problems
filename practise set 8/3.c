/*
Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice
*/


#include <stdio.h>
#include <string.h>
char slice(char old[],char new[],int m,int n){
    if(m<0||m>=n||n>strlen(old)){
    printf("INVALID\n");
    return 0 ;
    }
    else {
            for(int i=m;i<n;i++){

                new[i-m]=old[i];
                
            }
    
    }

    new[n-m]='\0';

}

int main(){
    int m,n;
    char old_string[100];
    char new_string[100];
    printf("Enter the string: ");
    gets(old_string);
    printf("Enter the starting of slicing: ");
    scanf("%d",&m);
    printf("Enter the ending of slicing: ");
    scanf("%d",&n);  
    slice(old_string,new_string,m,n);  
    printf("THe sliced unit is : %s\n",new_string);    
    return 0;
}

//code from code with harry
/*
#include <stdio.h>


char* slice(char str[], int m, int n){
    int i=0, count;  
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;

}
int main(){
    char str[] = "Harry bhai";
    
    printf("%s", slice(str, 1, 7));
    return 0;
}
*/




//Code from geimini for same problem


/*
#include <stdio.h>
#include <string.h>
void slice(char *str, int m, int n) {
    int len = strlen(str);

    // Validate indices
    if (m < 0 || n > len || m >= n) {
        printf("Invalid slice indices.\n");
        return;
    }

    // Shift the remaining characters to the beginning
    memmove(str, str + m, n - m);

    // Null-terminate the string at the new length
    str[n - m] = '\0';
}

int main() {
    char str[100];
    int m, n;

    printf("Enter the string: ");
    fgets(str, 100, stdin); // Use fgets to avoid buffer overflow

    printf("Enter the starting index of slicing: ");
    scanf("%d", &m);

    printf("Enter the ending index of slicing: ");
    scanf("%d", &n);

    slice(str, m, n);

    printf("Sliced string: %s\n", str);

    return 0;
}
*/