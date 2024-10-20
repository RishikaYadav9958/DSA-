#include<stdio.h>
int main(){
int i,j,n,m;
printf("enter the no. of rows:");
scanf("%d",&n);
printf("enter the no. of coloumns:");
scanf("%d",&m);
for(i=0;i<=n-1;i++)
{
	for(j=1;j<=m;j++)
	{
	if(i==0 || i==(n-1) || j==1 || j==m)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
    } 
    printf("\n");
}
return 0;
}
