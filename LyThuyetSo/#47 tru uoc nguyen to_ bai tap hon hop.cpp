#include<stdio.h>
#include<math.h>
#define ll long long
/* tinh f(n) = -1 + 2 - 3 + 4.....((-1)^n*)*n
==> nhan thay (-1+2) (-3+4) .... deu ra 1
 vay neu n chan thi f(n) = n/2
    neu n le thi f(n) = (n-1)/2 - n = (-n-1)/2  // vi so le la dau tru, tinh toi so chan cuoi cung roi tru so le cuoi
*/
/*ll check(ll n){
	ll sum=0;
	if(n%2==0) sum= n/2;
	else sum = (-n-1)/2;
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",check(n));
	}
}*/


// BAI TAP ORAC
/* f(n) la uoc nho nhat cua n
   sau do them f(n) vao n
   lam vay lap di lap lai k lan
   moi lan thi n se thay doi
*/
// cach lam binh thuong
/*int find( int n){
	for( int i =2;i<=n;i++){
		if(n%i==0) return i;
	}
}
void solve(ll n, ll k){
	for( int i=1;i<=k;i++){
		n+=find(n);
	}
	printf("%d\n",n);
}*/

// cach lam khac hay hon
/* neu n chan thi uoc nho nhat la 2, va moi lan cong vao van la so chan nen xai cong thuc: n += k*2;
   neu n le thi uoc nho nhat cua no la so le, lan dau tien cong vao se thanh so chan, roi tiep sau do la so chan: n+f(n) + (k-1)*2
*/
/*
void solve1( ll n, ll k){
	if(n%2==0) printf("%lld\n",n+2*k*1ll);
	else printf("%lld\n",n+find(n)+(k-1)*2*1ll);
}
int main(){
	int t;
	scanf("%d",&t);
	while( t--){
		ll n,k;
		scanf("%lld %lld",&n,&k);
		solve1(n,k);
	}
}*/



//BAI TAP PRIME subtraction
/* cho hai so x>y, x - snt = y( co the tru nhieu lan), neu co snt thi in Yes, ko thi No*/
//Cach binh thuong
/*int prime[1000001];
void sieve(){
	for( int i=0;i<1000001;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for( int i =2;i<=sqrt(1000000);i++){
		if(prime[i]==1){
			for( int j = i*i;j<1000001;j+=i){
				prime[j]=0;
			}
		}
	}
}
void check(ll x, ll y){
	sieve();
	ll tmp = x-y;
	int ok=0;
	for( int i=2;i<=tmp;i++){
		if(prime[i]&& tmp%i==0){
			printf("Yes\n");
			ok=1;
			break;
		}
	}
	if(ok==0) printf("No\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long x,y; // x lon hon y
		scanf("%lld %lld",&x,&y);
		check(x,y);
	}
}*/

// Cach don gian
/* neu no tru nhau khac 1 thi Yes, ra 1 thi No*/
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long x,y; // x lon hon y
		scanf("%lld %lld",&x,&y);
		if(x-y!=1) printf("Yes\n");
		else printf("No\n");
	}
}
