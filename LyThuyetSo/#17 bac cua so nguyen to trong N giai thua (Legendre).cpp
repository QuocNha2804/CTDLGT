#include<stdio.h>
#include<math.h>
int count( int n, int p){
	int cnt=0;
	for( int i = p;i<=n;i+=p){
		int tmp = i;
		while(tmp%p==0){
			cnt++;
			tmp/=p;
		}
	
	}
	return cnt;
}
//cong thuc n/p^1 + n/p^2....
int count2( int n, int p){
	int cnt=0;
	for( int i=p;i<=n;i*=p){
		cnt+=n/i;
	}
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		int n,p;
		scanf("%d %d",&n,&p);
		printf("%d\n",count2(n,p));
	}
}
