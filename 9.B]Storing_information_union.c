#include<stdio.h>
#include<string.h>
union {
    char name[25];
    int idno;
    float salary;
}desc;
void main() {
    strcpy(desc.name, "Karthik");
    printf("Employee details\n");
    printf("The name is %s\n",desc.name);
    printf("The idnois %d\n",desc.idno=1);
    printf("The salary is %.2f\n",desc.salary=25000.233);
}
