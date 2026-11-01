#include<stdio.h>
#include<math.h>
// kiem tra su tang giam cua so nguyen to co n chu so
int prime(int n){
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int up(int n){
	int tmp1,tmp2,ok;
	while(n>=10){
		tmp1=n%10;
		n/=10;
		tmp2=n%10;
		if(tmp1>tmp2) ok=1;
		else  return 0;
	}
    return ok;	
}
int down(int n){
	int temp = n;
	int tmp1,tmp2,ok;
	while(n>=10){
		tmp1=n%10;
		n/=10;
		tmp2=n%10;
		if(tmp1<tmp2) ok=1;
		else  return 0;
	}
    return ok;	
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);// so luong chu so
		int cnt=0;
		for( int i = pow(10,n-1);i<pow(10,n);i++){
			if((up(i)||down(i))&&prime(i)){
				cnt++;
			}
		}
		printf("%d\n",cnt);
		
	}
	
}

