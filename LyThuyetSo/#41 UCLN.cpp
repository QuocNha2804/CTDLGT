#include<stdio.h>
#include<math.h>
//UCLN
// uoc chung lon nhat cach binh thuong
/*int min( int a, int b){
	if(a>b) return b;
	else if(b>a) return a;
	else return a;
}
int gcd(int a, int b){
	if(a==0||b==0) return a+b;
	for( int i = min(a,b);i>1;i--){
		if(a%i==0 && b%i==0) return i;
	}
}*/


// uoc chung lon nhat cach olic
#define ll long long
ll gcd(ll a,ll b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b) a=a-b;   // so nao lon hon thi gan bang hieu 2 so
		else b=b-a;
	}
	return a; // return b cung duoc
}
ll gcd1( ll a, ll b){ // thuat toan UCLN cua de qui nhung code binh thuong // cach nay hieu qua
	while(b!=0){
		ll tmp = a%b;
		a=b;
		b=tmp;
	}
	return a;
}
ll gcd2( ll a, ll b){  // cach nay hieu qua
	if(b==0) return a;
	return gcd2(b,a%b);
}

//BCNN
ll lcm(ll a, ll b){
	return a/gcd2(a,b)*b; //a*b/gcd(a,b);
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld",lcm(a,b));
}
