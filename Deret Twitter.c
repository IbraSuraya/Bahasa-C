#include <stdio.h>

int main(void) {
  int a=11, b=39, c;
  int i, m[10];
  m[0] = a;
  m[1] = b;
  for (i=2; i<10; i++){
    c = b-a;
    c += 8;
    a = b;
    b += c;
    m[i] = b;
  }

  for(i=0; i<10; i++){
    printf("%d - ", m[i]);
  }
  
  return 0;
}