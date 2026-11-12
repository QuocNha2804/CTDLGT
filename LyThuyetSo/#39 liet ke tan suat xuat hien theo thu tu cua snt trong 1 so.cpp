#include<stdio.h>
#include<math.h>
#include<string.h>
// cach doi ten ham thanh ki tu. VD doi long long thanh ll: #define ll long long
/*
long long rev(long long n){
	long long tmp=0;
	while(n!=0){
		tmp= tmp*10 + n%10;
		n/=10;
	}
	return tmp;
}
void check( long long n){  // cach binh thuong
    int c2=0,c3=0,c5=0,c7=0;
	long long m = rev(n);
	while(n!=0){
		int r=n%10;
		if(r==2) c2++;
		else if(r==3)	c3++;
		else if(r==5)	c5++;
		else if(r==7)	c7++;
		n/=10;
	}
	while(m!=0){
		int r = m%10;
		if(r==2 && c2!=0){        // neu c2 =0 thi khoi in so 2, vi no khong xuat hien
			printf("2 %d\n",c2);
			c2=0;                // cho no khoi trung khi gap cac so 2 tiep theo
		}
		else if(r==3 && c3!=0){
			printf("3 %d\n",c3);
			c3=0;
		}
		else if(r==5 && c5!=0){
			printf("5 %d\n",c5);
			c5=0;
		}
		else if(r==7 && c7!=0){
			printf("7 %d\n",c7);
			c7=0;
		}
		m/=10;
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	check(n);
}*/

// cach xai mang
void check( char c[]){
	int c2=0,c3=0,c5=0,c7=0;
	for( int i=0;i<strlen(c);i++){
		if(c[i]=='2') c2++;
		else if(c[i]=='3') c3++;
		else if(c[i]=='5') c5++;
		else if(c[i]=='7') c7++;
	}
	for( int i=0;i<strlen(c);i++){
		if(c[i]=='2'&& c2!=0){
			printf("2 %d\n",c2);
			c2=0;
		}
		else if(c[i]=='3'&& c3!=0){
			printf("3 %d\n",c3);
			c3=0;
		}
		else if(c[i]=='5'&& c5!=0){
			printf("5 %d\n",c5);
			c5=0;
		}
		else if(c[i]=='7'&& c7!=0){
			printf("7 %d\n",c7);
			c7=0;
		}
	}
}
int main(){
	char c[1000];
	gets(c);
	check(c);
}
