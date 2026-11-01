#include<stdio.h>
#include<math.h>
int perfectNumber(int n){// ham nay chi kt toi so 10^9 thoi
	int sum=1;
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i){
				sum+=i+n/i;
			}
			else{
				sum+=i;
			}
		}
	}
    if(n==sum)  return 1;
    else return 0;
}
// cach khac
int prime(int n){
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
/* p la snt
  (2^p)-1 la snt 
  ==> 2^p-1 * (2^p)-1 tao ra so hoan hao
  tim so hoan hao trong doan tu 1 toi 10^18
  10^18 tuong duong 2^64 roi
  nen p nam trong khoang tu 1 - 32 la vua du*/
int kt( long long n){
	for( int i =1;i<=32;i++){
		if(prime(i)){
			int tmp= (int)pow(2,i)-1;
			if(prime(tmp)){
				long long hh= 1ll* tmp * (int)pow(2,i-1);
				if(hh ==n) return 1;
			}
		}
	}
	return 0;
}
// luu so hoan hao vao mang
long long ans[10]; // tu 1-10^8 chi co 8 so hh
int n=0;
void find(){
	for(int i=1;i<=32;i++){
		if(prime(i)){
			int tmp = (int)pow(2,i)-1;
			if(prime(tmp)){
				ans[n++] = 1ll* tmp * (int)pow(2,i-1);
			}
		}
	}
}
int main(){
	find();
	for(int i=1;i<n;i++){
		printf("%lld\n",ans[i]);
	}
//	int t;
//	scanf("%d",&t);
//	for( int i=1;i<=t;i++){
//		long long n;
//		scanf("%lld",&n);
//		if(kt(n)) printf("Yes");
//		else printf("No");
//	}
}
