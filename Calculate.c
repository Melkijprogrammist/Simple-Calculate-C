#include <stdio.h>

void CalculateDel()
{
  int z = 58;
  int t = 6;
  int del = z / t;
  printf("The del of z / t is: %d \n", del );
}
void Calculatedevide()
{
  int c = 28;
  int h = 39;
  int devide = h * c;
  printf(" The devide of h *c is: %d \n" , devide);
}
void Calculateminus()
{
  int a = 15;
  int b = 26;
  int minus = b - a;
  printf(" The minus of b - a is: %d \n", minus);
}
void Calculatesum()
{
  int x = 12;
  int y = 15;
  int sum = x + y;
  printf("The sum of x + y is: %d \n", sum);

}
int main()
{
  Calculatesum();
  Calculateminus();
  Calculatedevide();
  CalculateDel();
  return 0;
}
