#include<stdio.h>
int main() {
  int dec = 0, hex, rem, i = 1;
  printf("Enter decimal  number: ");
  scanf("%d",& hex);
   if(hex!=0) {
    rem = hex % 10;
    hex += (rem*i);
    hex /= 10;
    i *= 2;
  }
  printf("Decimal= %dn",hex);
  return 0;
}
