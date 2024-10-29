//Solve problem 8 for time using ‘typedef’ keyword.

#include <stdio.h>
typedef struct storage
{
    int milli_seconds;
    int seconds;
    int hours;
}time;

int compare(time v1,time v2){
if(v1.hours==v2.hours & v1.seconds==v2.seconds & v1.milli_seconds==v2.milli_seconds){
    return 0;
}

    if(v1.hours>v2.hours){
        return 1;
    }
    else if(v2.hours>v1.hours){
        return -1;
    }
    else if(v1.seconds>v2.seconds){
        return 1;
    }
    else if(v2.seconds>v1.seconds){
        return -1;
    }
    else if(v1.milli_seconds>v2.milli_seconds){
        return 1;
    }
    else if(v2.milli_seconds>v1.milli_seconds){
        return -1;
    }

}
int main(){
    time v1={19,43,56};
    time v2={18,56,34};
    if(compare(v1,v2)==1){
        printf("time = %d:%d:%d is earlier",v2.milli_seconds,v2.seconds,v2.hours);
    }
    
    else if(compare(v1,v2)==-1){
        printf("time = %d:%d:%d is earlier",v1.milli_seconds,v1.seconds,v1.hours);
    }
    else{
        printf("Both the times are same");
    }

    
    return 0;
}