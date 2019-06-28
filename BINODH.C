/* 2610951545 binodh.c binodh.c   */
# include <stdio.h>
main()
{
int i;
clrscr();
for (i=0;i<=1000;i+=10)
{
printf("\nD=%5d     O=%5o     H=%5x     B=",i,i,i);
/* showbit(i); */
if (i%240 == 0) getch();
}
getch();
}