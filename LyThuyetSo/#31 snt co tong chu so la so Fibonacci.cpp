#include<stdio.h>
#include<math.h>
int prime( int n){
	if( n ==0 || n==1){
		return 0;
	}
	for( int i=2;i<=sqrt(n);i++){
		if( n%i==0){
			return 0;
		}
	}
	return 1;
}
int digitSum( long long n){
	int ans=0;
	while(n!=0){
		ans+= n%10;
		n/=10;
	}
	return ans;
}
int check( int n){
	long long a[94];
	a[0]=0;
	a[1]=1;
	for( int i=2;i<=93;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for( int i=0;i<=93;i++){
		if( prime(n)&& digitSum(n)==a[i]){
		    return 1;
		}
	}
	return 0;
}
/*
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
       int n;
       scanf("%d",&n);
       if( check(n)) printf("Yes\n");
       else printf("No\n");
}
}*/
int main(){
	int a,b,cnt=0;
	scanf("%d%d",&a,&b);
	for( int i =a;i<=b;i++){
		if( check(i)){
			printf("%d ",i);
			cnt=1;
		}
	}
	if( cnt==0) printf("-1");
}
