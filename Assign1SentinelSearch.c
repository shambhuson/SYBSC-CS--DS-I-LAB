/*
Name: Rahul Sonawane
Blog:https://computersciencestudyhub.blogspot.com/
Assignment 1: Searching Algorithms
Set A.
b) Accept n values in array from user. Accept a value x from user and use sentinel linear search algorithm to check whether the number is present in the array or not and output the position if the number is present.

Solution:
*/
#include<stdio.h>
int sentinel_linear_search(int *arr, int n,int key)
{
    int last_value, i;
    last_value = arr[n-1];
    arr[n-1]=key;

    i = 0;
    while (arr[i] != key)
        ++i;
    /* recover the real array last member */
    arr[n-1] = last_value;
    if(arr[i]==key)
        return i;
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
    printf("\n Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Elements are:\n");
    display(a,n);
    printf("\n Enter searching element : ");
    scanf("%d",&x);
    ans=sentinel_linear_search(a,n,x);
    if(ans==-1)
        printf("\n %d is NOT found.",x);
    else
        printf("\n %d is found at %d position\n",x,ans+1);        
}
