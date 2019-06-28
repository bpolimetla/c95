# include <stdio.h>
# include <dos.h>
# include <math.h>
 main()
 {
  int i,j,k;
  clrscr();
  j=9;
  for (i=1;i<=10;i++)
  {
   k=pow(2,i);  printf(" k is %d ",k);
/*   k=j & k; */
     k=j & i;
  /*   k==0 ? printf("0") : printf("1") ;*/
   printf ("\nj= %d i= %d k= %d",j,i,k);
  }
  getch();
  }

