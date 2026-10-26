#include<stdio.h>
#include<math.h>
int Prime( int n){
	if( n ==0 || n ==1){
		return 0;
	}
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int digitPrime(  int n){
	while( n){
		int r= n%10;
		if(r!=2 && r!=3 && r!=5 && r!=7){
			return 0;
		}
		n/=10;
            
	}
	return 1;
}
int sumPrime( int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	if(Prime(sum)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b,cnt=0;
	printf("Nhap: ");
	scanf("%d%d",&a,&b);
	for( int i=a;i<=b;i++){
		if(Prime(i)&&digitPrime(i)&&sumPrime(i)){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
