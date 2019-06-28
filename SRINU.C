 #include <conio.h>
 main()
 {
  int i,j;
  for (i=0;i<=15;i++)
  {
   normvideo();
   textbackground(i);
   for (j=0;j<=16;j++)
   {
   textcolor(j);
   cprintf("back=%d color=%d",i,j );getch();
   }
  }
}
