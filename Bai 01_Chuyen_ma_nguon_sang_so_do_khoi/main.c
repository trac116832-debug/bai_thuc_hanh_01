#include<stdio.h>
#include<math.h>

void ptb1 (double a, double b){
	double x1;
	if(a!=0){
		x1=-b/a;
		printf("%.3lf", x1);
	}
	else{
		if(b==0){
			printf("VSN");
		}
		else{
			printf("VN");
		}
	}
}
void ptb2 (double a, double b, double c){
	double x1, x2;
	if(a==0) ptb1(b,c);
	else{
		double delta = b*b - 4*a*c;
		if(delta>0){
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			
			if(x1>x2){
				double tamthoi=x1;
				x1=x2;
				x2=tamthoi;
				printf("%.3lf %.3lf", x1, x2);
			}
		}
		else if(delta==0){
			x1=x2=-b/(2*a);
			printf("%.3lf", x1);
		}
		else{
			printf("VN");
		}
	}
}

int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	ptb2(a,b,c);
}

