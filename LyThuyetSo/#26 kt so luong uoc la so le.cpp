#include<stdio.h>
#include<math.h>
int sum(long long n){// kt so co so uoc le
// so co uoc le la so chinh phuong
	int temp =sqrt(n);
	if(1ll*temp*temp==n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		long long n;
		scanf("%lld",&n);
		if(sum(n)==1) printf("Yes");
		else printf("No");
	}
}
