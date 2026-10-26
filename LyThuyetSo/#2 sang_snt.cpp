#include<stdio.h>
#include<math.h>
int prime[1000001];
void sieve(){
	// coi cac so tu 0 toi n la so nguyen to
	// cho so 0 va 1 khong la so nguyen to
	for( int i=0; i<1000001; i++){
		prime[i]=1;
	}
	prime[0] = prime[1] = 0;
	for( int i=2;i<=sqrt(1000000);i++){
		if( prime[i]==1){
			for(int j = i*i;j<1000001;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	scanf("%d",&n);
	for( int i=0;i<=n;i++){
		if(prime[i]==1){
			printf("%d ",i);
		}
	}
	return 0;
}
