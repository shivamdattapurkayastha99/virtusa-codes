//  Write a program to eliminate duplicates in a sorted array.
#include<stdio.h>
int remove_duplicate_elements(int arr[],int n)
{
    if (n==0||n==1)
    {
        return n;

    }
    int temp[n];
    int i,j=0;
    for ( i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            temp[j++]=arr[i];

        }
        
    }
    temp[j++]=arr[n-1];
    for ( i = 0; i < j; i++)
    {
        arr[i]=temp[i];

    }
    return j;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

    }
    n=remove_duplicate_elements(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}



