#include<stdio.h>

fact (int number)
{
	if(number<=0)
	{
		return 1;
	}
	else
	{
		number=number*fact(number-1);
	}
	return number;
}

main()
{
    int n,ans;
	printf("Enter Number=>");	
	scanf("%d",&n);
	
	ans=fact(n);
	printf("factorial=%d",ans);
}
