#include<stdio.h>
void maxOfSubarray(int a[],int n,int k)
{
   int j,max;
   for(int i=0;i<=n-k;i++)
   {
       max=a[i];
       for(j=1;j<k;j++)
       {
           if(a[i+j]>max)
           {
               max=a[i+j];
           }
           
       }
       printf("max=%d\n",max);
   }
}
int main()
{
    int n;
    int k=3;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxOfSubarray(a, n, k);
    return 0;
}
