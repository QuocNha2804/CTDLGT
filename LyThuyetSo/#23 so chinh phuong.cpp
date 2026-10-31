#include<stdio.h>
#include<math.h>
/*int num(long long n){ //tim so chinh phuong binh thuong
	int tmp=sqrt(n);
	if(1ll*tmp*tmp==n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(num(n)){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}*/

//tim so chinh phuong tren doan, dem so chinh phuong
void find(int a,int b){
	int cnt=0;
	for( int i = sqrt(a);i<=sqrt(b);i++){
		if(i*i>=a && i*i<=b){
			cnt++;
			printf("%d ",i*i);
		}
	}
	printf("\nCo %d so chinh phuong",cnt);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	find(a,b);
	
}
