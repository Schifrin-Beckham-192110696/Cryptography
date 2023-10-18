#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    int p,q,n;
    int e = 2;
	printf("Enter p value:");
	scanf("%d",&p);
	printf("Enter q value:");
	scanf("%d",&q);
	n = p*q;
    int phi = (p - 1) * (q - 1);
    while (e < phi) 
	{
     int hcf = 1;
     for (int i = 1; i <= e && i <= phi; i++) 
	 {
      if (e % i == 0 && phi % i == 0) 
	  {
        hcf = i;
      }
     }
     if (hcf == 1)
	 {
      break;
     } 
	 else 
	 {
        e++;
     }
    }
    int k = 2,msg=12;
    int d = (1 + (k * phi)) / e;
    int c = pow(msg, e);
    int o = c % n;
    printf("encryption\n");
    printf("%d", o);
    getch();
}
