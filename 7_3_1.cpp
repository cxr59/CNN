/*第7章 作业3
1. 用迭代法求：x=√a  的值，求平方根的迭代公
式是：x1=1,	Xn+1=(xn+a/xn)/2，要求前后两次求
出的X的绝对值小于10-5  */
#include <stdio.h>
#include <math.h>
float squareRoot(int a)
{
	float x1,xn;
	for(x1=1;;)
	{
		xn=(x1+a/x1)/2;
		if(fabs(xn-x1)<1e-5)
			break;
		x1=xn;      //迭代 
	}
	return xn;
}
int main()
{
	int a;
	printf("input a:");
	scanf("%d",&a);
	printf("result=%.5f\n",squareRoot(a));
	return 0;
}
