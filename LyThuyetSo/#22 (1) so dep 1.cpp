#include<stdio.h>
#include<math.h>
/*bai nay yeu cau SO DEP la so chia het cho 1 snt
va binh phuong snt do */
int find(int n){
	for(int i=2;i<=sqrt(n);i++){
	  	int cnt=0;
	  	while(n%i==0){
	  		cnt++;
	  		n/=i;
	    }
		if(cnt>=2){
		  return 1;
		}
	  
   }
   return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for( int i=a;i<=b;i++){
	      if(find(i)){
	      	printf("%d ",i);		  }
	}
}
