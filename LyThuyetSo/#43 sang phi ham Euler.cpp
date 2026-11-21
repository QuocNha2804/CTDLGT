#include<stdio.h>
#include<math.h>
// su dung cach sang
#define ll long long
int p[1000001];
 void sieve(){
 	for( int i =1;i<1000001;i++){
 		p[i]=i;
	 }
	 for( int i=2;i<1000001;i++){
	 	if(p[i]==i){
	 		p[i]=i-1;
	 		for( int j = i*2;j<1000001;j+=i){
	 			p[j]-=p[j]/i;
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
    	for( int i=1;i<=n;i++){
    		printf("%d ",p[i]);
		}
		printf("\n");
	}
    
 }
