#include<stdio.h>
#include<math.h>
// cap snt cung nhau i va j ( i va j la so nguyen binh thuong) : i khac j va co ucln =1 vd 5,6 5,7 5,8
int gcd( int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for( int i=a;i<b;i++){
		for(int j=i+1;j<=b;j++){
			if(gcd(i,j)==1){
				printf("(%d,%d)",i,j);
			}
		}
	}
}
