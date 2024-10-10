/*
3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab     Tax                   
2.5L – 5.0L      5%                          
5.0L - 10.0L    20%                      
Above 10.0L     30%                    
                   */

#include <stdio.h>
int main(){
    int salary   ;
    float tax ;
    printf("Enter your salary : ");
    scanf("%d",&salary);
    if (salary >=250000 && salary <500000){
        tax = (salary * 5)/100;
        printf("Your income tax amount is %f",tax);
    }
    else if(salary >= 500000 && salary <1000000){
        tax = (salary * 20)/100;
        printf("Your income tax amount is %f",tax);
    }
    else if(salary >1000000){
        tax= (salary*30)/100;
        printf("Your income tax amount is %f",tax);

    }
    else if (salary >=0 && salary <250000){
        printf("NO TAX");
    }
    else{
        printf("ERROR");

    }
    return 0;

}