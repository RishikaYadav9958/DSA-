#include<stdio.h>
int main()
{
	int n;
	printf("enter size : ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	printf("enter the element you want to store in a array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("the element you entered are %d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("the maximum element of array is :%d",a[0]);
    printf("the second maximum element of array is :%d",a[1]);
	return 0;
}
