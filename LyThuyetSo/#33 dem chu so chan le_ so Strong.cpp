#include<stdio.h>
#include<math.h>
// dem chu so chan le
/*void count( int n){
	int c=0,l=0;
	while(n!=0){
		if((n%10)%2==0){
			c++;
			n/=10;
		}
		if((n%10)%2!=0){
			l++;
			n/=10;
		}
	}
	printf("%d %d",c, l);
}
int main(){
	int n;
	scanf("%d",&n);
	count(n);
}*/

//so Strong
// so strong la so co tong giai thua cua cac chu so bang chinh no
int gt( int n){ // ham de qui
	if( n ==0 || n==1 ){
		return 1;
	}
	else{
		return n*gt(n-1);
	}
}

int gt2( int n){
	int tmp=1;
	for( int i=n;i>=2;i--){
		tmp*=i;
	}
	return tmp;
}
int check( int n){
	int tmp=n; // gia tri n da bi thay doi
	int sum=0;
	while(n!=0){
		sum+= gt(n%10);
		n/=10;
	}
	if( sum == tmp) return 1;
	else return 0;
}
int main(){
	int a,b, ok =0;
	scanf("%d%d",&a,&b);
	for( int i =a;i<=b;i++){
		if(check(i)){
			ok=1;
			printf("%d ",i);
		}
	}
	if( ok==0){
		printf("0");
	}
}
