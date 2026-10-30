#include<stdio.h>
#include<math.h>
//cach binh thuong
/*int Prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int find(int n){
	for( int i=n;i>=1;i--){
		if(n%i==0 && Prime(i)==1){
			return i;
		}
	}
}
int main(){
	//sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",find(n));
	}
	return 0;
}*/
int kt(int n){
	int tmp=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		while(n%i==0){
			tmp==i;
			n/=i;
		}
	  }
	}
	if(n!=1){
		tmp=n;
	}
	return tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	for( int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		printf("%d\n",kt(n));
	}
}

