#include <stdio.h>

int main() {
  int a = 10; 
  int *ptr = &a; 
  printf("Gia chi cua a l�: %d\n", a); 
  printf("�ia chi cua a l�: %p\n", &a); 
  
  printf("Gia chi cua a l�: %d\n", *ptr); 
  printf("�ia chi cua a l�: %p\n", *ptr); 
  return 0;
}
