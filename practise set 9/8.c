/*
Write a structure capable of storing date. Write a function to compare those 
dates
*/

#include <stdio.h>
struct storage
{
    int dd;
    int mm;
    int yyyy;
};

int compare(struct storage v1,struct storage v2){
if(v1.yyyy==v2.yyyy & v1.mm==v2.mm & v1.dd==v2.dd){
    return 0;
}

    if(v1.yyyy>v2.yyyy){
        return 1;
    }
    else if(v2.yyyy>v1.yyyy){
        return -1;
    }
    else if(v1.mm>v2.mm){
        return 1;
    }
    else if(v2.mm>v1.mm){
        return -1;
    }
    else if(v1.dd>v2.dd){
        return 1;
    }
    else if(v2.dd>v1.dd){
        return -1;
    }

}
int main(){
    struct storage v1={18,6,2006};
    struct storage v2={18,5,2005};
    if(compare(v1,v2)==1){
        printf("date :%d-%d-%d is earlier",v2.dd,v2.mm,v2.yyyy);
    }
    
    else if(compare(v1,v2)==-1){
        printf("date :%d-%d-%d is earlier",v1.dd,v1.mm,v1.yyyy);
    }
    else{
        printf("Both the dates are same");
    }

    
    return 0;
}