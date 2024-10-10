//CODE NOT WORKING PLEASE CHECK





/*  Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.  */


#include <stdio.h>
 int main(){
   int maths , science , english;
   float d;
   printf("Enter your maths marks : ");
   scanf("%d",&maths);
   printf("Enter your science marks : ");
   scanf("%d",&science);
   printf("Enter your english marks : ");
   scanf("%d",&english);
   d = ((maths + science + english )/300)*100;
   if (d>=40 && d<=100){
    if (maths<33 || science<33 || english <33){
        printf("FAILED");

    }
    else{
        printf("PASSED");
    }    
   }
   else{
    printf("FAILED");
   }
}