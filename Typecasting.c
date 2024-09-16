#include<stdio.h>
int main(){

    printf("Enter the integer: ");
    int a;
    scanf("%d",&a);
    //Typcasting a number by converting from one data type to another
    float c =(float)a;
    
    printf("\nThe divided num is: %.2f",c/2);//%.2f because to print only till two decimal points ,for 5 decimal points %f only
    
    return 0;

}