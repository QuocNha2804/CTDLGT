#include<stdio.h>
#include<math.h>
#define ll long long
// cach tinh luy thua b cua so a
// phuong phap luy thua thap phan
ll pow1( int a, int b){
	ll res = 1;
	while(b!=0){
		if(b%2==1){
			res*=a;
		}
		b/=2;
		a*=a;
	}
	return res;
}

ll pow2( int a, int b){ // cach de qui
	if(b==0){
		return 1;
	}
	ll x = pow2(a,b/2);
	if(b%2==1) return x*x*a;
	else return x*x;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d  %d\n",pow1(a,b),pow2(a,b));
	}
}

