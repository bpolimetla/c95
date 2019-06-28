/*  0201951552  decimal to binary to converstion   */
# include <stdio.h>
# include <dos.h>
void showbits(int n);
 main()
 {
  int i=5225,j,k;
  clrscr();
  printf("\nDecimal %d is same as bninary ",i);
  showbits(i);
  for (j=0;j<=5;j++)
  { k=i>>j;
  printf ("\n%d rigt shift %d gives ",i,j);
  showbits(k);
  }
  getch();
 }

 void showbits (int n)
 {
  int i,k,andmask;
  for (i=15;i>=0;i--)
  {
   andmask=1<i;
   k=n&andmask;
   k==0?printf("0"):printf("1");
   }
   }
