#include <stdio.h>
#include <math.h>
int main(){
    float degree,radian,result;
    printf("Enter the Degree: ");
    scanf("%f",&degree);
    radian=degree*(M_PI/180);
    result= sin(radian);
    printf("The sin() %.0f is %.2f",degree,result);
    return 0;
}
