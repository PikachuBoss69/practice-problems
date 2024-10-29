/*
. Create an array of 4 struct c numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from 
the user.
*/
#include <stdio.h>

struct c
{
    int real;
    int imaginary;
};

void display(struct c c)
{
    printf("The value of complex number is %d + %di \n", c.real, c.imaginary);
}
int main()
{
    struct c carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}