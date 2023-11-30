#include <stdio.h> 
int main() {
  int a = 5;
  int b = 10;
  int diff1 = a - b;
  printf("Hieu cua a và b truoc khi doi cho la: %d\n", diff1);
  int *ptra = &a;
  int *ptrb = &b;
  int temp = *ptra;
  *ptra = *ptrb;
  *ptrb = temp;
  int diff2 = a - b;
  printf("Hieu cua a và b sau khi doi cho la: %d\n", diff2); 
  return 0;
}
