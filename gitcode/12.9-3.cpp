#include<stdio.h>
int main()
{
	int i,*p,a[7];
	p=a;
	for(i=0;i<7;i++)
	    scanf("%d",p++);
	printf("\n");
	p=&a[0];
	for(i=0;i<7;i++,p++)
      printf("%-4d",*p);  //��û�����루p=&a[0]),��pָ����һ������һ��û�и��ƣ�������ֵ 
	 return 0;	
}
