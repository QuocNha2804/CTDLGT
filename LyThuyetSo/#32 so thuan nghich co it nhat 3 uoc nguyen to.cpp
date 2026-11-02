#include<stdio.h>
#include<math.h>
int check( int n){
    int ans =n;
	int tmp=0;
	while(n!=0){
		tmp = tmp*10 + n%10;
		n/=10;
	}
    return tmp ==ans;
}
int find( int n){
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
	if(cnt >=3) return 1;
	else return 0;
}
int main(){
	int a,b;
	int ok=0;
	scanf("%d%d",&a,&b);
	for( int i=a;i<=b;i++){
		if(check(i) && find(i)){
			ok=1;
			printf("%d ",i);
		}
	}
	if(ok==0){
		printf("-1");
	}
}
