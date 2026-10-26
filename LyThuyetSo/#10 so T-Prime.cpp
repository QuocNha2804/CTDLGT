//so chinh phuong co so uoc le
/* so chinh phuong co so uoc = phan tich thua so nguyen to ra
lan luot lay so mu + 1 roi nhan lai voi nhau
VD: n= p^e1 . p^e2.....p^ek
    d(n) = (e1+1).(e2+1).....(ek+1)
	60 = 2^2.3^1.5^1
	d(60)= 3.2.2 = 12*/
// so co 3 uoc so la binh phuong cua 1 so nguyen to
#include<stdio.h>
#include<math.h>
int prime[1001];
void sieve(){
	for( int i=0;i<1001;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for( int i=0;i<=sqrt(1000);i++){
		if(prime[i]==1){
			for( int j = i*i; j<=1000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<=sqrt(n);i++){
			if(prime[i]==1){
				printf("%d\n",(int)pow(i,2));
			}
		}
	}
}
