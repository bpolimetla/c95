# include <stdio.h>
# include <dos.h>
# include <ctype.h>
 main()
{
 int i,j;
 char c;
 clrscr();
 for (i=0;i<=3;i++)
 {
 /*  if (i==1) exit(1);
     if (i==1) exit(0);
     if (i==1) break;   */
    if (i==1) continue;
   else printf("\n i=%3i ",i);
   printf("hai");
 }
 scanf ("%c",&c);
 i=isalpha(c);
 printf("isalpha is %d",i);
 getch();
}