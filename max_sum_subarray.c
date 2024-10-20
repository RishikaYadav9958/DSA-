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
    int max = a[0];
    for(int i=0;i<n;i++)
    {
    	int sum=0;
    	for(int j=i;j<n;j++)
    	{
    		sum=sum+a[j];
    		if(sum>max)
    		{
    			max=sum;
			}
		}
	}
return 0;
}
