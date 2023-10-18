#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
 int p,g,a,b,A,B,K1,K2;
 int resA=1;
 int resB=1;
 printf("Enter a prime number (p): ");
 scanf("%d",&p);
 printf("Enter a generator (g) for Zp*: ");
 scanf("%d",&g);
 printf("Enter the private key of A (a): ");
 scanf("%d",&a);
 printf("Enter the private key of B (b): ");
 scanf("%d",&b);
 for (int i=0;i<a;i++) 
 {
  resA=(resA*g) % p;
  }
 A=resA;
 for(int i=0;i<b;i++) 
 {
  resB = (resB * g) % p;
  }
  B = resB;
  K1 = 1;
  for (int i = 0; i < a; i++) 
  {
   K1 = (K1 * B) % p;
    }
   K2 = 1;
   for (int i = 0; i < b; i++) 
   {
    K2 = (K2 * A) % p;
    }
    printf("Public parameters: (p = %d, g = %d)\n", p, g);
    printf("Private keys: (a = %d, b = %d)\n", a, b);
    printf("Public key of A= %d\n", A);
    printf("Public key of B= %d\n", B);
    printf("Shared secret keys: (K1 = %d, K2 = %d)\n", K1, K2);
}
