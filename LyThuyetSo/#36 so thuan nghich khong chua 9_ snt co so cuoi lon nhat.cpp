#include<stdio.h>
#include<math.h>

// so thuan nghich khong cua so 9
/*int tn( int n){
	int ans=n,tmp =0;
	while(n!=0){
		tmp = tmp*10+ n%10;
		n/=10;
	}
	if( tmp ==ans)
	    return 1;
	return 0;
}
int check( int n){
	while(n!=0){
		if(n%10==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n,cnt=0;;
	scanf("%d",&n);
	for( int i=2;i<n;i++){
		if( check(i)&&tn(i)){
			cnt++;
		   printf("%d ",i);
		}
		   
	}
	printf("\n%d",cnt);
}*/

// snt co chu so cuoi cung lon nhat
int prime( int n){
	if( n==0|| n==1) return 0;
	for( int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check( int n){
	int tmp = n%10;
	while(n!=0){
		if(n%10> tmp) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	for( int i =0;i<n;i++){
		if( prime(i)&& check(i)){
			cnt++;
			printf("%d ",i);
		}
	}
	printf("\n%d",cnt);
}
