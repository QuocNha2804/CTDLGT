#include<stdio.h>
#include<math.h>
/* Day Fibonacci
void Fib( int n){ 
	long long t=0,t1=1,t2;
	printf("%d %d ",t,t1);
	for( int i=3;i<=n;i++){
		t2=t+t1;
		printf("%lld ",t2);
		t=t1;
		t1=t2;
	}
}//so Fibonacci chi toi 93 so, neu honw se bi tran long long
void Fib1( int n){// day Fibonacci su dung chuoi      
     long long a[n];
     a[0]=0;
     a[1]=1;
     for( int i=2;i<n;i++){
     	a[i]=a[i-1]+a[i-2];
	 }
	 for( int i =0;i<n;i++){
	 	printf("%lld ",a[i]);
	 }
}
int main(){
	int n;
	scanf("%d",&n);
	Fib1(n);
}*/


/*
// Kiem tra so Fibonacci bang cach 1
// co the kiem tra bang cach 2

int Fib( long long n){ 
	long long t=0,t1=1,t2;
	if( n==0 || n==1){
		return 1;
	}
	else{
	for( int i=3;i<=93;i++){
		t2=t+t1;
		if( n== t2){
			return 1;
		}
		t=t1;
		t1=t2;
	   }
	   return 0;
    }
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=1;i<=t;i++){
		long long n;
     	scanf("%lld",&n);
	    if(Fib(n)) printf("Yes\n");
    	else printf("No\n");
	} 
}*/

//in so Fibonacci thu n
void Fib( int n){
	long long a[94];
	a[0]=0;
	a[1]=1;
	for( int i =2;i<=93;i++){
		a[i]=a[i-1]+a[i-2];
	}
    printf("%lld",a[n-1]);
} 
int main(){
	int t;
	scanf("%d",&t);
	for( int i =1;i<=t;i++){
		int n;
		scanf("%d",&n);
		Fib(n);
		printf("\n");
	}
}
