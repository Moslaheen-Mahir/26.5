#include<stdio.h>

void sum_of_array(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum_of_array(arr, n);

    return 0;
}
