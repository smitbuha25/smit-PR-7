#include<stdio.h>

sum(int arr[],int n)
{
    int i,sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

main()
{
    int n,i,ans;

    printf("Enter Value=");
    scanf("%d",&n);
    printf("\n");

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Number=",i+1);
        scanf("%d",&arr[i]);
    }
    ans=sum(arr,n);

	printf("\nSum Total=%d",ans);
}
