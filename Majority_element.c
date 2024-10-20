#include <stdio.h>
int main() {
    int n,i,j;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x =(n/2);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("the element %d is at index %d\n",i,a[j]);
            }
        }
    }
    if(j>=x)
    {
        printf("the majority element is %d ",a[j]);
    }
    return 0;
}


