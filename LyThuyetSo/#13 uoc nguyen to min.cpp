#include<stdio.h>
#include<math.h>

//uoc so nguyen to nho nhat cua moi so trong doan
//cach 1
int find(int n){
	for( int i=2;i<=sqrt(n);i++){
		if( n%i==0){
			return i;
		}
	}
	return n;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for( int i=1;i<=n;i++){
			printf("%d\n",find(i));
		}
	}
}
//cach 2
/*int prime[100001];
void sang(){
	for( int i=1;i<100001;i++){
		prime[i]=i;
	}
	for( int i=2;i<=sqrt(100000);i++){
		if(prime[i]==i){
			for( int j=i*i;j<100001;j+=i){
				if(prime[j]==j){
					prime[j]=i;
				}
			}
		}
	}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for( int i=0;i<=n;i++){
			printf("%d\n",prime[i]);
		}
	}
}*/

