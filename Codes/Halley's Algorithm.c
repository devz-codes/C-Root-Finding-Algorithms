#include<stdio.h>
#include<math.h>

double function(double x){
	return pow(x,5)+pow(x,3)+1; //f(x)=x^5+x^3+1
}

double derivative(double x,int i){
	double h=0.00001;
	if(i==1){
		return (function(x+h)-function(x))/h;
	}
	else{
		return (derivative(x+h,i-1)-derivative(x,i-1))/h;
	}
}

int main(){
	double guess=3;
	for(int i=0;i<100;i++){
		guess=guess-(2*function(guess)*derivative(guess,1))/(pow(2*derivative(guess,1),2)-function(guess)*derivative(guess,2));
		if(fabs(function(guess))<0.0000005){
			printf("The solution is %lf",guess);
			break;
		}
	}
	return 0;
}
