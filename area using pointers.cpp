#include<stdio.h>
void areaperi(int x,float *y,float *z);
int main()
{ int r;
  float a=1.0,p=1.0;
  printf("enter value of radius");
  scanf("%d",&r);
  areaperi(r,&a,&p);
  printf("value of area and perimeter is %f and %f respectively",a,p);
  return 0;
}
void areaperi(int x,float *y,float *z)
{ *y=3.14*x*x;
  *z=2*3.14*x;
}
