#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd( ll a, ll b){  // cach nay hieu qua
	if(b==0) return a;
	return gcd(b,a%b);
}

//BCNN
ll lcm(ll a, ll b){
	return a/gcd(a,b)*b; //a*b/gcd(a,b);
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld",lcm(a,b));
}
