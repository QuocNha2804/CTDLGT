#include<stdio.h>
#include<math.h>
int prime[1000001];
void sieve(){
	for( int i=0;i<1000001;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for( int i=0;i<=sqrt(1000000);i++){
		if(prime[i]==1){
			for( int j =i*i;j<1000001;j+=i){
				prime[j]=0;
			}
		}
	}
}
//Dem so T-Prime tuwf 1 toi N
int main(){
	sieve();
	int t;
	scanf("%d",&t);

	while(t--){
		long long n;
		int cnt=0;
		scanf("%lld",&n);
		for( int i=0;i<=sqrt(n);i++){
			if(prime[i]==1){
				cnt++;
			}
		}
		printf("%d",cnt);
	}
	
}
//Dem so T-Prime tren doan
/*
int main(){
	int t;
	scanf("%d",&t);
	sieve();
	while(t--){
		long long l,r;
		int cnt=0;
		scanf("%lld%lld",&l,&r);
		int a= sqrt(l);
		if( 1ll*a*a!=l){
			a++;
		}
		for( int i=a;i<=sqrt(r);i++){
			if(prime[i]==1){
				cnt++;
			}
		}
		printf("%d",cnt);
		
	}
}*/

