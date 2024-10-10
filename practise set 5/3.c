/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2.
*/
#include <stdio.h>
float force(float m){
    float f= (float)m*(9.8);
    return f;

}
int main(){
    float a;
    printf("Enter the mass : ");
    scanf("%f",&a);
    float b =force(a);
    
    printf("force of attraction on a body of mass %.2f is : %.2f",a,b);
    return 0;
}