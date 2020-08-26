#include <stdio.h>
int main(){
  int x,y,z;

  printf("Enter first integer :");
  scanf("%d",&x);
  printf("Enter second integer :");
  scanf("%d",&y);

  printf("Before Swapping\nfirst integer = %d\nsecond integer = %d\n", x, y);

  z = x;
  x = y;
  y = z;

  printf("After Swapping\nfirst integer = %d\nsecond integer = %d\n", x, y);

  return 0;
}
