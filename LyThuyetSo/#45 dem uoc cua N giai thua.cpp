#include<stdio.h>
#include<math.h>
#define ll long long
int degree( int n, int p){
	int ans=0;
	for( int i=p;i<=n;i+=p){
		int tmp =i;
		while(tmp%p==0){
			ans++;
			tmp/=i;
		}
	}
	return ans;
}
int degree1( int n, int p){
	int ans=0;
	for( int i=p;i<=n;i*=p){
        ans+=n/i;
	}
	return ans;
}
int prime( int n){
	if( n==0|| n==1) return 0;
	for( int i =2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

ll countDivisor( int n){
	ll cnt=1;
	for( int i=1;i<=n;i++){
		if(prime(i)){
			cnt*=(degree1(n,i)+1);
		}
	}
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",countDivisor(n));
	}
}
