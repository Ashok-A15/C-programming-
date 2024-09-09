
#include <stdio.h>

int main(void) {
  int y = 2;
  float r = 2.5;
  int in = y * r / 100;
  printf(" Enter the no of year ");
  scanf("%d", &y);
  printf(" Enter the no rate ");
  scanf("%f", &r);
  printf("calculate the intrest: %d", in);
  return 0;
}

