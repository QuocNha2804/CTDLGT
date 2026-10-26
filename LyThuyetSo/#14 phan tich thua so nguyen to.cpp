#include<stdio.h>
#include<math.h>
//cach in ra tat ca thua so nguyen to
void pt(int n){
	for( int i =2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d ",i);
			n/=i;
		}
	}
	if(n!=1){
		printf("%d",n);
	}
}
//cach in ra moi thua so nguyen to 1 lan
void pt1( int n){
	for( int i=2;i<=sqrt(n);i++){
		 if(n%i==0){
		 	printf("%d",i);
		 	while(n%i==0){
		 		n/=i;
			 }
		 }
	}
	if(n!=1){
		printf("%d",n);
	}
}
//cach in ra moi thua so nguyen to 1 lan va so mu
void pt2( int n){
	for( int i=2;i<=sqrt(n);i++){
		 if(n%i==0){
		 	int cnt=0;
		 	while(n%i==0){
		 		cnt++;
		 		n/=i;
			 }
			 printf("%d(%d) ",i,cnt);
		 }
	}
	if(n!=1){
		printf("%d(1)",n);
	}
}
//cach in thua so nguyen to voi dau x
void pt3( int n){
	for( int i =2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d",i);
			n/=i;
			if(n!=1){
				printf("x");
			}
		}
	}
	if( n!=1){
		printf("%d",n);
	}
}
//cach in thua so ngiuyen to voi so mu
void pt4( int n){
	printf("%d = ",n);
	for( int i=2;i<=sqrt(n);i++){
		if( n%i==0){
		    int cnt=0;
		    while(n%i==0){
		 	   cnt++;
		 	    n/=i;
		}
		     printf("%d^%d ",i,cnt);
		     if(n!=i){
		 	     printf("*");
		    }
		}
	}
	if(n!=1){
	printf("%d^1",n);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	pt4(n);
	return 0;
}
