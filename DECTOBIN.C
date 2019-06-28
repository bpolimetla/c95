/*  0201951552  decimal to binary to converstion   */
# include <stdio.h>
# include <dos.h>
 showbits(int n);
 main()
 {
  int j;
  clrscr();
  for (j=0;j<=5;j++)
  {
  printf ("\n Decimal %d is same as binary ",j);showbits(j);
  }
  getch();
 }

 showbits (int n)
 {
  int i,k,andmask;
  for (i=15;i>=0;i--)
  {
   andmask=1 < i;
   k=n & andmask;
   k==0 ? printf("0"):printf("1");
  }
 }
