#include <stdio.h>
#include <stdlib.h>
struct name{
    int a,m1,m2,m3;
    char c[50];
};
int main() {
    struct name *ptr;
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    ptr=(struct name*) malloc(n*sizeof(struct name));
    for (int i = 0; i < n; ++i)
    {
        printf("Enter the student Name & Roll No: ");
        scanf("%s%d",&(ptr+i)->c,&(ptr+i)->a);
        printf("Enter the student Mark: ");
        scanf("%d%d%d",&(ptr+i)->m1,&(ptr+i)->m2,&(ptr+i)->m3);

    }
    printf("Displaying Student information: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%s\t%d\t",(ptr+i)->c,(ptr+i)->a);
        printf("%d\t%d\t%d\n",(ptr+i)->m1,(ptr+i)->m2,(ptr+i)->m3);

    }

}