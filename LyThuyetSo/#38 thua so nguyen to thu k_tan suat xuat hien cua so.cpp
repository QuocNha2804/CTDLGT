#include<stdio.h>
#include<math.h>
// thua so nguyen to thu k
/*int find( int n, int a){
	int cnt=0;
	for( int i=2;i<=sqrt(n);i++){
		while(n%i==0){
		     cnt++;
		     if(cnt==a) return i;
		     n/=i;
		}
	}
	if(n!=1){
		cnt++;
	}
	if(cnt==a){
		return n;
	}
	else{
		return -1;
	}
}
int main(){
	int n,a;
	scanf("%d%d",&n,&a);
	printf("%d",find(n,a));
}*/

//so lan xuat hien cua chu so nguyen to co trong n VD 22333377 co 2 2, 3 4, 7 2
void check( long long n){
	int a=0,b=0,c=0,d=0;
	while(n!=0){
		if(n%10==2){
			a++;
			n/=10;
		}
		else if(n%10==3){
			b++;
			n/=10;
		}
		else if(n%10==5){
			c++;
			n/=10;
		}
		else if(n%10==7){
			d++;
			n/=10;
		}
		else{
			n/=10;
		}
	}
	if(a!=0)  printf("2 %d\n",a);
	if(b!=0)  printf("3 %d\n",b);
	if(c!=0)  printf("5 %d\n",c);
	if(d!=0)  printf("7 %d\n",d);
}
int main(){
	long long n;
	scanf("%lld",&n);
	check(n);
}
