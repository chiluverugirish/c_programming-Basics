#include <stdio.h>
int main()
{

float a,b,area,s,perimeter;
printf("Enter the breadth of the rectangle:  ");
scanf("%f",&a);
printf("\nEnter the lenghth of reactangle: ");
scanf("%f",&b);


area=a*b;
printf("%f\n",area);
perimeter = 2*(a+b);
printf("%f",perimeter);
}
