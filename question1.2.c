#include<stdio.h>
int main() {
  int dec = 0, bin, rem, i = 1;
  printf("Enter Binary number: ");
  scanf("%d",&bin);
  while(bin!=0) {
    rem = bin % 10;
    dec += (rem*i);
    bin /= 10;
    i *= 2;
  }
  printf("Decimal= %dn",dec);
  return 0;
}
