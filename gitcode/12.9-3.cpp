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
      printf("%-4d",*p);  //若没有输入（p=&a[0]),则p指向下一级，下一级没有复制，输出随机值 
	 return 0;	
}
