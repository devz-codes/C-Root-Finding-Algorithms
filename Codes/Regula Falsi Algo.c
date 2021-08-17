#include<stdio.h>
#include<math.h>

double function(double x){
	return pow(x,3)+2; //f(x)=x^3+2
}

int main(){
	double estimate1=-2;
	double estimate2=2;
	
	double a=0;
	double b=0;
	
	if(function(estimate1)*function(estimate2)>0){
		printf("Wrong Estimates !");
	}
	
	else{
		function(estimate1)>0 ? a,b=estimate1,estimate2 : a,b=estimate2,estimate1;
		for(int i=0;i<100;i++){
			a=(a*function(b)-b*function(a))/(function(b)-function(a));
			if(fabs(function(a))<0.0000005){
				printf("The root is %lf",a);
				break;
			}
		}
	}
	return 0;
}
