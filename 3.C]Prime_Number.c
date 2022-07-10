#include <stdio.h>
int main(){
    int n,i=2;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (i<=n-1){
        if(n%i==0){
            printf("The given number is not an prime number");
            break;
        }
        else{
            i++;
        }
    }
    if(i==n){
        printf("The given number is an prime number");
    }
    return 0;
}