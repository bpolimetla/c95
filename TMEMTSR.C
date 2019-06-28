# include <stdio.h>
# include <dos.h>
 main()
 {
  int far *old=0x413;
  *old=0;
  printf("%d",*old);
  getch();
  keep(0,1000);
 }
