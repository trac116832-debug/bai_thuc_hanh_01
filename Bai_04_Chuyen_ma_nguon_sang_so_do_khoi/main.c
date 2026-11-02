#include<stdio.h>
int ucln(int a, int b){
	while(b!=0){
	
	int r = a%b;
	a=b;
	b=r;
	}
	return a;
	
}

int bcnn(int a, int b){
	int bcnn = (a*b)/ucln(a,b);
	return bcnn;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("BCNN la: %d", bcnn(a,b));
}
