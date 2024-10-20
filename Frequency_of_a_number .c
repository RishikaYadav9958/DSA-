#include<stdio.h>
int main(){
    int a[10];
    int i,freq=0,key;
    for(int i=0;i<10;i++)
    {
        printf("\n Enter number :");
        scanf("%d",&a[i]);
    }
    printf("\n Enter number to find frequency :");
    scanf("%d",&key);
    for(int i=0;i<10;i++)
    {
        if(a[i]==key)
        freq++;
        printf("\n Frequency of %d is %d ",key,freq);
        return 0;
    }
}
