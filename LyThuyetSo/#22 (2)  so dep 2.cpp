#include<stdio.h>
#include<math.h>
/*bai nay yeu cau SO DEP la so chia het cho 1 snt
va bat buoc phai chi het cho bnh phuong snt do*/
int find(int n){
	int ok=0;
	for( int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt==1){
			return 0;
		}
//		if(cnt>=2){
//			ok=1;
//		}
	}
	if(n!=1){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		if(find(i)==1){
			printf("%d ",i);
		}
	}
}
