#include<stdio.h>
#include<math.h>
int count(int n){ //cach 1: dem uoc
	int cnt=0;
	for( int i=1;i<=n;i++){
		if(n%i==0)  cnt++;
	}
	return cnt;
}
int count2( int n){ //cach 2
	int cnt=0;
	for( int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i) cnt+=2;
			else cnt++;
		}
	}
	return cnt;
}
int count3(int n){// cach 3, su dung so mu thua so nguyen to
	int temp=1;
	for( int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
		  cnt++;
		  n/=i;	
		}
		temp*=(cnt+1);
	}
	if(n!=1){
		temp*=2;
	}
	return temp;
}
// tinh tong dua theo cach 2
int sum( int n){
	int temp=0;
	for( int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i){
				temp+= i + n/i;
			}
			else{
				temp+=i;
			}
		}
	}
	return temp;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}
