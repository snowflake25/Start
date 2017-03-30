#include <stdio.h>int main(){ int n, sum = 0; int d = 2; scanf("%d", &n); for (int i = 1; i <= n; i++){  sum += (i*d - 1)*(n*d - 1 - (i - 1)*d); } printf("%d", sum);}
