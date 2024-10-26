#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
   int f1=0,f2=1;
    int f3=0;
    int m;
  for(k=1;k<=10;k++){

      f3=f1+f2;
      m=m+f3;
       f1=f2;
      f2=f3;
        return m;
  }

}