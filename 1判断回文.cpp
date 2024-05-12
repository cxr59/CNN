#include<stdio.h>
int main()
{
	char a,b,c,d,e;
	printf("input num:");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	if(a==e&&b==d)
	printf("%c%c%c%c%c是为回文\n",a,b,c,d,e);
	else
	printf("%c%c%c%c%c不是回文\n",a,b,c,d,e);
	return 0;
}
