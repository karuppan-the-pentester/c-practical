#include <stdio.h>
void setfunc(int *a){
    *a=0;
    printf("The value of 'a' in setfunc: %d \n",*a);
}
int main() {
    int a=10;
    printf("The value of 'a' before calling setfunc: %d \n",a);
    setfunc(&a);
    printf("The value of 'a' after calling setfunc: %d",a);
}