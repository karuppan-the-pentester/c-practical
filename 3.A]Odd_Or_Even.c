#include <stdio.h>
int main(){
    int n,r;
    printf("Enter the Number to check: ");
    scanf("%d",&n);
    r=n%2;
    if(r==0){
        printf("The given number is even");
    } else{
        printf("The given number is odd");
    }
    return 0;
}