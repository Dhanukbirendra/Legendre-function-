#include<stdio.h>
FILE *fout1;
double legendre(int, double);

int main() {
  int i;
  double x;
  fout1=fopen("legendre.dat","w"); 
  for(i=-225;i<=350;i++){
    x=0.01*(double)i;
    fprintf(fout1,"%5.3lf %24.15lf %24.15lf %24.15lf %24.15lf\n",x,legendre(2,x),legendre(3,x),legendre(4,x),legendre(5,x));
  }
  fclose(fout1);
 }

