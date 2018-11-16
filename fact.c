double fact(int n) {
  int i;
  double x;
  x = 1.0;
  for(i=1; i<=n; i++){
    x *= (double)i;
  }
  return x;
}
