#include<stdio.h>
int main()
{
    float principle,time,rate,si;
    printf("Enter the principle value: ");
    scanf("%f",&principle);
    printf("Enter the time of interst: ");
    scanf("%f",&time);
    printf("Enter the rate of interst: ");
    scanf("%f",&rate);
    si=(principle*time*rate)/100;
    printf("The simple interst is: %f",si);
    

    return 0;

}