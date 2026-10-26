#include<stdio.h>
#include<math.h>
int max( int a, int b){
	if(a>b)
	    return a;
	return b;
}
void seive(int l, int r){
	int prime[r-l+1];
	for( int i =0;i<r-l+1;i++){
		prime[i]=1;
	}
	for (int i= 2; i<=sqrt(r); i++){
		for( int j= max(i*i,((l+i-1)/i)*i);j<=r;j+=i){ // cong thuc tinh boi ke tiep hoac bang chinh no
			prime[j-l]=0;
		}
	}
	for(int i=max(2,l);i<=r;i++){
		if(prime[i-l]){
		printf("%d ",i);
	}
}
} 
int main(){
	int l,r;
	printf("Nhap l r: ");
	scanf("%d %d", &l,&r);
	seive(l,r);
	return 0;
}
