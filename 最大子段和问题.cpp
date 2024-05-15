#include<stdio.h>
//first changed on local 
//second changed on web 
int maxsum(int r[],int left,int right){
	int max=-999999,leftmax,rightmax,midmax;
	int s1=0,mLmax,s2=0,mRmax;
	int m=(left+right)/2;
	if(left==right)
		max=r[left];
	else{
		leftmax=maxsum(r,left,m);
		rightmax=maxsum(r,m+1,right);
		mLmax=r[m];
		mRmax=r[m+1]; 
		int i=0; 
		for(i=m;m>=left;i--){
			s1+=r[i];
			if(s1>mLmax)
				mLmax=s1;
		}
		for(i=m+1;m<=right;i++){
			s2+=r[i];
			if(s2>mRmax)
				mRmax=s2;
		}
		midmax=mLmax+mRmax;
		if(leftmax>midmax)
			max=leftmax; 
		else
			max=midmax;
		if(max<rightmax)
			max=rightmax;
	}
		return max;
}
int main(){
	int r[8]={-10,8,-3,6,-5,4,3,-7};
	int max=maxsum(r,0,7);
	printf("%d",max);
	return 0;
} 
