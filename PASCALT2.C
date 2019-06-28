/*  0111951120   Pascal Traingle using arrays pascalt2.c */
# include <stdio.h>
# include <math.h>
main()
{
 int j,k,n;
 double a,b;
 clrscr();
 printf("\nEnter ...up to power of ");scanf("%d",&n);
 printf("\n                              Pascal traingle \n");
 if (n >= 1) printf("\n                                    1");
 if (n >= 2) printf("\n                                  1   1 \n");
 k=29;
 for (a=2;a<=n;a++)
 {
  for (j=1;j<=k;j++) printf(" ");k-=2;
  for(b=0;b<=a;b++) printf("%d",pow(a,b));
  printf("\n");
 }
 getch();
}