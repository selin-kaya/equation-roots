#include <stdio.h>
#include <math.h>

int main(void) {
  
  double a;
  double b;
  double c;
  double r1;
  double r2;
  double delta;

  printf("enter a,b,c:",a,b,c);
  scanf("%lf %lf %lf",&a,&b,&c);
  delta=(b*b)-(4*a*c);

  r1=(-b+sqrt(delta))/(2*a);
  r2=(-b+sqrt(delta))/(2*a);

  if(delta>0)
  {
    printf("the equation has two roots");
    printf("r1 is %lf and r2 is %lf",r1,r2);
  }
  else if(delta<0)
  {
    printf("the equation has no real roots");
  }
  else
  {
    printf("the equation has one root");
    printf("the root is %lf",r1);
  }


  return 0;
}