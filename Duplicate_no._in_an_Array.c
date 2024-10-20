#include<stdio.h>
int main(){
    int  a[]={1,2,2,4,3,4,5,3,4};
    
    for(int i=0;i<9;i++)
    {
        int count=0;
        for(int j=i+1;j<9;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1){
        printf("The no. which are duplicate in an array are : %d\n",a[i]);
        }
    }
    return 0;
}
