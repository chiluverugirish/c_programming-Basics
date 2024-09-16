#include <stdio.h>
#include<math.h>
int main()
{

float a,b,c,area,s,k,perimeter;
printf("Enter the lenghth of side1 of the triangle");
scanf("%f",&a);
printf("\nEnter the lenghth of side2 of the triangle");
scanf("%f",&b);
printf("\nEnter the lenghth of side3 of the triangle");
scanf("%f",&c);
s=(a+b+c)/2
k=(s*(s-a)*(s-b)*(s-c));
area=pow(k,(1/2));
printf("%f\n",area);
perimeter = a+b+c;
printf("%f",perimeter);
}
return 0;