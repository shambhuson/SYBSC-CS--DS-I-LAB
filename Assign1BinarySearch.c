/*
Name: Rahul Sonawane
Blog:https://computersciencestudyhub.blogspot.com/
Assignment 1: Searching Algorithms
Set A.
c) Accept n sorted values in array from user. Accept a value x from user and use binary search algorithm to check whether the number is present in sorted array or not and output the position if the number is present. 

Solution:
*/
#include<stdio.h>
int bsearch(int *arr,int n, int k)
{
    int low=0,high=n-1,mid,flag=0,pos;
    while(high>=low)
    {
        mid=(low+high)/2;
        if(k<arr[mid])
            high=mid-1;
        else if(k>arr[mid])
            low=mid+1;
        else if(k==arr[mid])
        {
            flag=1;
            pos=mid;
            break;
        }
    }
    if(flag==1)
        return pos;
    else   
        return -1;
}
void display(int *a,int n)
{              
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
main()
{
    int a[20],i,j,n,x,ans;
    printf("\n Enter how many elemants:");
    scanf("%d",&n);
    printf("\n Enter the elements in Ascending Order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Elements are:\n");
    display(a,n);
    printf("\n Enter searching element : ");
    scanf("%d",&x);
    ans=bsearch(a,n,x);
    if(ans==-1)
        printf("\n %d is NOT found.",x);
    else
   printf("\n %d is found at %d position\n",x,ans+1);        
}
