#include<stdio.h>
int main()
{
    printf("Enter the radius of the sphere: \n");
    float r,pi,volume;
    scanf("%f",&r);
    pi = 3.1415;
    volume = (4/3)*pi*r*r*r;
    printf("The volume of the sphere is  : \n%.2f",volume);
    return 0;
}