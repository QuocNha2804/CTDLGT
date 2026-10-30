#include<stdio.h>
#include<math.h>
#include<string.h>
int num(int n){//cach so binh thuong
	int t =n;
	int ans=0;
	while(n!=0){
		int tmp;
		tmp = n%10;
		ans = ans*10+tmp;
		n/=10;
	}
	if( ans== t){// luc nay n khac ban dau roi
		return 1;
	}
	else{
		return 0;
	}
}
int num1(char c[]){// cach su dung chuoi
	int l=0, r =strlen(c)-1;
	while(l<r){
		if( c[l]!=c[r]){
			return 0;
		}
		else{
			l++;
			r--;
		}
	}
	return 1;
}
int main(){//main cua chuoi
	char c[1000];
	gets(c);
    if(num1(c)) printf("Yes");
    else  printf("No");
}
