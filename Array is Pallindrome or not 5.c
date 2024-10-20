#include<stdio.h>
int palindrome(int a[],int n)
   {
 int i=0;
 int j=n-1;
 while(i<j)
 {
     if(a[i] != a[j]) {
     return 0;
     }
     i++;
     j--;
 }
   return 1;
 }
int main() {
    int n;
    printf("Enter the number of element you want to store in a array : ");
    scanf("%d",&n);
    int a[n];
   printf("Enter the element you want to store in a array :");
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);   
    }
    if(palindrome(a,n))
    {
    printf("It is a Palindrome\n");
    }
    else
    {
    printf("It is not Palindrome\n");
    }
    return 0;
}
