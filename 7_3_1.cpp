/*��7�� ��ҵ3
1. �õ�������x=��a  ��ֵ����ƽ�����ĵ�����
ʽ�ǣ�x1=1,	Xn+1=(xn+a/xn)/2��Ҫ��ǰ��������
����X�ľ���ֵС��10-5  */
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
		x1=xn;      //���� 
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
