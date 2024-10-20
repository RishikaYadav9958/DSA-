#include<stdio.h>
int main(){
int n;
int count = 0;
printf("enter total size :");
scanf("%d",&n);
int a[n];
printf("enter the element of an array : ");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    if(a[i]<0)
    {
     count++;
    }
}
printf("Total negative no. of an array : %d",count);
return 0;
}
