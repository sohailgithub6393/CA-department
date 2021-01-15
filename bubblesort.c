
#include<stdio.h>
# define SIZE 10
int main(){
    int arr[MAX],i,index,item;
    printf("Enter the elements\n");
    for(i=0;i<SIZE-1;i++)
        scanf(" %d",&arr[i]);
    printf("enter the index");
    scanf("%d\n",&index);
    printf("enter the item");
    scanf("%d\n",&item);
    for(i=SIZE-2;i>=index;i--)
    arr[i+1]=arr[i];
    arr[i+1]=item;
    
   for(i=0;i<SIZE;i++)
        printf(" %d",arr[i]);
        printf("\n");
        return 0;
}