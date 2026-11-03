#include<stdio.h>
#include<math.h>
// cap snt cung nhau
/*long long gcd( long long a, long long b){
	if( b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(gcd(a,b)==1)	printf("Yes");
	else printf("No");

}*/

// phi ham Euler la day so tu 1 toi n, trong do co cac so la cap snt cung nhau voi n ( so luong )

long long gcd( long long a, long long b){
	if( b==0){
		return a;
	}
	return gcd(b,a%b);
}
long long count( long long n){ // cach nay doi voi so nho thoi, k nen xai
	long long cnt=0;
	for( long long i=1;i<=n;i++){
		if(gcd(i,n)==1) cnt++;
	}
	return cnt;
}
// cach phi ham Euler
/* cong thuc phi ham Euler
 - phan tich thua so nguyen to cua so n ( vd: p1, p2, p3....)
 - cong thuc: 
       n*(1-1/p1)*(1-1/p2)*....
 - ket qua la so luong so nguyen to cung nhau trong doan tu 1 toi n
 */
long long countReal( long long n){// dem so luong snt cung nhau tren doan tu 1 toi n
	long long cnt=n;
	for( long long i =2;i<=sqrt(n);i++){
		if(n%i==0) cnt-=cnt/i;   // neu xai cnt*=(1-1/i); thi se bi sai so, nen nhan cnt vo luon
		while(n%i==0){
			n/=i;
		}
	}
	if(n!=1) cnt-=cnt/n;
	return cnt;
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",countReal(n));
}
