#include <stdio.h>
int main(){
    int a[200],n,i,s,c=0;
    printf("Enter how many number you want to enter: ");
    scanf("%d",&n);
    printf("Enter the number: ");
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to count: ");
    scanf("%d",&s);
    for (i = 0; i < n; i++) {
        if(s==a[i]){
            c++;
        }
    }
    printf("The element %d was repeated %d times",s,c);

}