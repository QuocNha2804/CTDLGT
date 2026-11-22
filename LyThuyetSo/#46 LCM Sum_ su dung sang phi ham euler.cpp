#include<stdio.h>
#include<math.h>
#define ll long long
//cong thuc:
/*VD p1 p2 la thua snt, dp1 dp2 la phi ham euler cua p1 p2
muon dem uoc cua 1 so n
thi ((p1*dp1 + d2*pd2)+1)*n/2
*/
ll p[1000001];
ll res[1000001];
void sieve(){
	for( int i =1;i<1000001;i++){
		p[i]=i;
	}
	for( int i=2;i<1000001;i++){
		if(p[i]==i){
			p[i]=i-1;
			for( int j=i*2;j<1000001;j+=i){
				p[j]-=p[j]/i;
			}
		}
	}
}
void sieve2(){
	for( int i=1;i<1000001;i++){
		for( int j =i;j<1000001;j+=i){
			res[j]+=1ll*i*p[i];
		}
	}
}
int main(){

	int t;
	scanf("%d",&t);
	sieve();
	sieve2();
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",1ll*(res[n]+1)*n/2);
	}
}
