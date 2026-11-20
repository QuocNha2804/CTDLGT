#include<stdio.h>
#include<math.h>
#define ll long long
// cho 4 so x,y,z,n
/* n la so luong chu so cua 1 so nho nhat chia het cho ca x y z */
ll gcd( ll a, ll b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int lcm( ll a, ll b){
	return a/gcd(a,b)*b;
}
ll solve(ll x,ll y,ll z, ll n){
	ll tmp = lcm(lcm(x,y),z); // bcnn cua x y z
	ll m = (ll)pow(10,n-1); // su dung cong thuc tim so >= so dau va chia het cho mot so p, cong thuc o sang snt tren doan
	ll res = ( m + tmp -1)/tmp * tmp;
	if( res < (ll)pow(10,n)){
		return res;
	}
	else return -1;
}
int main(){
	long long x,y,z,n;
	scanf("%lld%lld%lld%lld",&x,&y,&z,&n);
	printf("%lld",solve(x,y,z,n));
}

