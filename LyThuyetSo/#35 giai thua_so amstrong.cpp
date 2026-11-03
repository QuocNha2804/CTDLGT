#include<stdio.h>
#include<math.h>
/*int gt( int n){
	if( n==0 || n==1){
		return 1;
	}
	return n*gt(n-1);
}
int gt1( int n){
	if ( n==0 || n==1) return 1;
	int tmp=1;
	for(int i=2;i<=n;i++){
		tmp*=i;
	}
	return tmp;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",gt1(n));
}*/

// So Amstrong
/* so amstrong la so co n chu so va tong cua luy thua bac n tung chu so cua no bang chinh no*/
int check( int n){
	int tmp=n,ans=n;
	int cnt=0,sum=0;
	while(n%10!=0){
		cnt++;
		n/=10;
	}
	while(tmp%10!=0){
		sum+=(int)pow(tmp%10,cnt);
		tmp/=10;
	}
	if( sum == ans)
	     return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(check(n)) printf("1");
	else printf("0");
}
