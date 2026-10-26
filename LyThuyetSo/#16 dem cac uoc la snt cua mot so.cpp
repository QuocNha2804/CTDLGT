#include<stdio.h>
#include<math.h>
void pt(int n){
	int cnt=0;
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1){
		cnt++;
	}
	printf("%d\n",cnt);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	pt(n);}
	return 0;
}
