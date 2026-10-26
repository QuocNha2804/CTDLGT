#include<stdio.h>
#include<math.h>
int prime[1000001];
void seive(){
	for( int i=0;i<1000001;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for( int i=2;i<=sqrt(1000000);i++){
		for( int j=i*i;j<=1000000;j+=i){
			prime[j]=0;
		}
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	seive();
	if(prime[n])
	    printf("Yes");
	else
	    printf("No");
	return 0;
}
