#include<stdio.h>
//int MaxSum(int a[],int left,int right){
//	int sum=0,midSum=0,leftSum=0,rightSum=0;
//	int i,center,s1,s2,lefts,rigths;
//	if(left==right)
//		sum=a[left];
//	else
//	{
//		center=(left+right)/2;
//		leftSum=MaxSum(a,left,center);
//		rightSum=MaxSum(a,center+1,right);
//		s1=0;lefts=0;
//		for(i=center;i>=left;i--){
//			lefts+=a[i];
//			if(lefts>s1) s1=lefts;
//		}
//		s2=0;rights=0;
//		for(i=center+1;i<=right;i++){
//			rights+=a[i];
//			if(rights>s2) s2=rights;
//		}
//		midSum=s1+s2;
//		if(midSum<leftSum) sum=leftSum;
//		else sum=midSum;
//		if(sum<right) sum=rightSum;
//	 } 
//	 return sum;
//}
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
	printf("×î´óÖµ%d",max);
	return 0;
} 
