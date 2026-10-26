// so sphenic la so duoc phan tich duoi dang tich 3 so khac nhau
#include<stdio.h>
#include<math.h>
int kt( int n){
	int cnt=0;
	for( int i=2;i<=sqrt(n);i++){
	   int tmp=0;
       while(n%i==0){
       	tmp++;
       	n/=i;
	   }
	   if(tmp>=2) return 0;
	   if(tmp==1) cnt++;
    }
    if(n!=1){
    	cnt++;
	}
	return cnt==3;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",kt(n));
	return 0;
}
