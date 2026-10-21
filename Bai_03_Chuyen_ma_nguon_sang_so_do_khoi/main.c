
void nhap(int a[], int n){ 
	for(int i=0; i<=n-1; i++){
		scanf("%d", &a[i]);
		
	}
}
void xuat(int a[], int n){
	for(int i=0; i<=n-1; i++){
		printf("%d ", a[i]);
	}	
}
int tmax(int a[], int n){
	int vt=0;
	for(int i=1; i<n; i++){
		if(a[i] > a[vt]){
			vt=i;
		}
	}
	return vt;
}
 
int main(){
	int a[100];
	int n;
	scanf("%d", &n);
	nhap(a,n);
	xuat(a,n);
	printf("\nSo lon nhat tim duoc tai vi tri %d\n", tmax(a,n));
}
