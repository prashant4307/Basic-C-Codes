#include<stdio.h>
struct student
{
    int regNo;
    char name[30];
    float marks;
}s1[20];
for(i=0;i<n;i++){
    scanf("%d",&s1[i].regNo);
    scanf("%s",&s1[i].name);
    scanf("%f",&s1[i].marks);
} for(i=0;i<n;i++){
    printf("%d",s1[1].regNo);
    printf("%s",s1[1].name);
    printf("%f",s1[1].marks);
}
