#include <stdio.h>
int main()
{
    float r,area,circum;
    printf("\nThis program helps to find you the Area & Circumference of a circle \n");
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("\nArea of Circle: %.2f \n",area);
    printf("Circumference of Circle: %.2f\n",circum);
    return 0;
}
