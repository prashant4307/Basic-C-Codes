#include <stdio.h>
int main(){
    int a[50],size,pos,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter elements in array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("From which position u want to delete:");
    scanf("%d",&pos);
    if(pos<=0|| pos>size)
    {
       printf("invalid position!");
    } else {
        for (i = pos-1;i < size - 1;i++)
        {
            a[i] = a[i + 1];
        } 
        size--;
        printf("Array after declaration:\n");
        for (i=0;i<size; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}