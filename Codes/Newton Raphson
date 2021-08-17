#include<stdio.h>
#include<math.h>

double func(double x){
  return pow(x,3)+2;  //f(x)=x^5+x^4+2
}

double derivative(double x){
  double h=0.00001;
  return (func(x+h)-func(x))/h;
}


int main(){
  double guess=1;  //Initial guess
  for(int i=0;i<100;i++){
    guess-=func(guess)/derivative(guess);
    if(abs(func(guess))<0.00005){   //Error Margin=0.00005
      printf("The root is %lf",guess);
      break;
    }
  }
  return 0;
}
