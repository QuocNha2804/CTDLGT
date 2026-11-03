#include<stdio.h>
#include<math.h>
// so loc phat la so chi chua cac so 0 6 8
/*int check(int n){
	while( n!=0){
		int r = n%10;
		if(r!=0 && r!=6 && r!=8) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	if(check(n)) printf("Yes");
	else printf("No");
}*/

// so thuan nghich loc phat
/* la so thuan nghich co it nhat mot so 6 va tong cac chu so co so cuoi cung la 8*/
int thuannghich(int n){ // code nay liet ke so trong doan
	int tmp =n, ans=0;
	while( n!=0){
		ans= ans*10 + n%10;
		n/=10;
	}
	if( ans == tmp) return 1;
	else return 0;
}
int check( int n){
	while(n!=0){
		if(n%10==6) return 1;
		n/=10;
	}
	return 0;
}
int checksum(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	if(sum%10==8) return 1;
	else return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for( int i =a;i<=b;i++){
		if(checksum(i)&&check(i)&&thuannghich(i)){
			printf("%d",i);		}
	}
}
