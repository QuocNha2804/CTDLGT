#include<stdio.h>
#include<math.h>
int count( int n){
	int cnt =0;
	for( int i=5;i<=n;i+=5){
		int tmp =i;
		while(tmp%5==0){
			 cnt++;
			 tmp/=5;
		}
	}
	return cnt;
}
int count2( int n){
	int cnt=0;
	for( int i=5;i<=n;i*=5){
		cnt+=n/i;
	}
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("%d",count2(n));
	}
}
