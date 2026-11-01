#include<stdio.h>
#include<math.h>
int sum(int n){
	int tmp=0;
	while(n!=0){
		tmp+=n%10;
		n/=10;
	}
	return tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		printf("%d\n",sum(n));
	}
	return 0;
}
