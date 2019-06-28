/*  0601951415   text commands demo   */
# include <stdio.h>
# include <conio.h>
# include <dos.h>
 main()
 {
  int i,j;  /*  ,red=4,white=15,blink=16;*/
  char savewin1[300],savewin2[300];
  clrscr();
/*  sound(1000);delay(10);nosound(); */
/*  textbackground(4);
  textcolor(15);
  cputs ("hai hai");
  printf("vsm college\n");
  textattr(white+(red<<4));
  textbackground(red + blink); */

/*  for (i=0;i<=15;i++)
  {
   normvideo();
   textbackground(i);
   for (j=0;j<=16;j++)
   {textcolor(j);
   cprintf (" back= %d color= %d",i,j);
    getch();
    }
   }
  */
/*  gotoxy(10,10);cprintf("i love ithalam just for love");getch();
  delline();
  gotoxy(1,1);
  cprintf("hai i am not interested to earn fame ");getch();
  insline(); gotoxy(1,1);clreol();cprintf("insert a new line"); */

/*  textmode(-1);puts("textmode is -1");getch();
  textmode(0);puts("textmode is 0");getch();
  textmode(1);puts("textmode is 1");getch();
  textmode(2);puts("textmode is 2");getch();
  textmode(7);puts("textmode is 7");getch(); */

  gotoxy(2,2);textmode(2);textbackground(0);textcolor(14);
  cprintf("\nLove.. for Love...");
  cprintf("\nLife is reach because of love");
  gettext(1,2,30,3,savewin1);

  getch();
  puttext(20,21,49,22,savewin1);
/*  movetext(1,2,30,3,10,20);
  movetext(1,2,30,6,22,20);*/





  getch();
 }
