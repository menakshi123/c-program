#include<stdio.h>
main()
{
	int n,ocnt=0,ecnt=0,r;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(n%2==0)
		ecnt++;
		else
		ocnt++;
		n/=10;
	}
	if(ecnt==ocnt)
	printf("Fancy Number");
	else
	printf("Not Fancy Number");
}
