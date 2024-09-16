#include<stdio.h>
int main(){
    float radius;

    printf("Enter the radius of the circle ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float perimeter = 2*pi*radius;
    float area = pi*radius*radius;

    printf("The area of the circle is: %.2f\n",area);
    printf("The perimeter of the circle is: %.2f",perimeter);

    return 0;

}
