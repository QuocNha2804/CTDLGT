/*so Smith la so khong phai snt va co tong cac chu so
bang tong cac thua so nguyen to*/
#include<stdio.h>
#include<math.h>
int prime(int n){
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int sum( int n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}
int kt(int n){
	int tong=0;
	for( int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			tong+=sum(i);
			n/=i;
		}
	}
	if(n!=1){
		tong+=sum(n);
	}
	return tong;
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		if(prime(n)==0 && sum(n)==kt(n)){
			printf("YES\n");
		}
		else{
			printf("No\n");
		}
	}
}

