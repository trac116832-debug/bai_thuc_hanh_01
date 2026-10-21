#include<stdio.h>
int ngTo(int n){
	if(n<2) return 0;
	for(int i=2; i<n; i++){
		if(n%i==0){
			return 0;	
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if(ngTo(n)==1){
		printf("%d la so nguyen to", n);
	}
	else{
		printf("%d khong la so nguyen to", n);
	}
	return 0;
}
