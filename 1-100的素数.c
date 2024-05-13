#include <stdio.h>
int isprime(int n)
{
	int i;
	int result=1;
	if(n==1)
		return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			result=0;
			break;
		}
	}
	return result;
}
int main()
{
	int n;
	printf("100以内的素数:\n"); 
	for(n=1;n<=100;n++)
	{
		if(isprime(n))
			printf("%3d",n);
	}
	printf("\n");
	return 0;
}
