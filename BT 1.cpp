#include <stdio.h>

int main() {
  int a = 10; 
  int *ptr = &a; 
  printf("Gia chi cua a là: %d\n", a); 
  printf("Ðia chi cua a là: %p\n", &a); 
  
  printf("Gia chi cua a là: %d\n", *ptr); 
  printf("Ðia chi cua a là: %p\n", *ptr); 
  return 0;
}
