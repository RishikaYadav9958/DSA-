#include <stdio.h>
int input=-1;
int main() {
int n,i;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
printf("Enter the no. of element to be entered :");
 for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int search;
printf("enter the element to be search ");
scanf("%d",&search);
for(int i=0;i<n;i++)
{
    if(search==a[i]){
        input = i;
        printf("the element %d is available at this index %d ",search,i);
        break;
    }
}
printf("%d",input);
    return 0;
}
