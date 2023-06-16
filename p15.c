//Get the size "N" and "N" elements of an array. Find the largest number from the array.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    //defining array
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
    int max=0;
    for(int i=0; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("the largest number is %d\n", max);
    return 0;
}