/*#include<stdio.h>
#include<math.h>
int Prime( int n){
	if( n ==0 || n==1){
		return 0;
	}
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int i=0,cnt=0;
	while(cnt<n){
		if(Prime(i)==1){
			printf("%d ",i);
			cnt++;
		}
		i++;
	}
}*/

//Cach 2
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
	int i=0, cnt =0;
	while(cnt<n){
		if(prime[i]){
			printf("%d\n",i);
			cnt++;
		}
		i++;
	}
}
