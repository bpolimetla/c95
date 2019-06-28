/*   run programs from this menu 0901951530
      Developed by Bhavani Prasad Polimetla  */
# include <stdio.h>
# include <stdlib.h>
# include <process.h>
# include <dos.h>
# include <conio.h>
 char a1[500],ah1[500],a2[300],ah2[300],a3[300],ah3[300],a4[300],ah4[300],a5[300],ah5[300],g;
 int y1=2,chm1=1,chm2=1,chm3=1,chm11=1,j=1,xm1=5,xm2=5,xm3=5,xm11=7;

 void c();
 void box(int l,int t,int r,int b,int bo,char name[300]);
 void menu0();
 void menu1();
 void menu2();
 void menu3();
 void menu11();
 main()
 {
  clrscr();textmode(2);
  gettext(1,1,79,3,ah1);
  gettext(3,4,11,12,ah2);
  gettext(19,4,29,10,ah3);
  gettext(30,4,37,10,ah4);
  gettext(43,4,49,10,ah5);

  textbackground(8);textcolor(12);
  gotoxy(3,2);cprintf("Pointers");
  gotoxy(21,2);cprintf("Arrays");
  gotoxy(31,2);cprintf("Advanced");
  box(1,1,79,3,2,a1);

  textbackground(0);textcolor(14);
  gotoxy(5,5);cprintf("Stacks");
  gotoxy(5,7);cprintf("Queues");
  gotoxy(5,9);cprintf("Trees");
  gotoxy(5,11);cprintf("Graphs");
  box(3,4,11,12,1,a2);

  textbackground(0);textcolor(10);
  gotoxy(21,5);cprintf("Shift0");
  gotoxy(21,7);cprintf("Spiral");
  gotoxy(21,9);cprintf("Pascal T");
  box(19,4,29,10,1,a3);

  textbackground(0);textcolor(11);
  gotoxy(32,5);cprintf("Ascci");
  gotoxy(32,7);cprintf("Info.");
  gotoxy(32,9);cprintf("Quit");
  box(30,4,37,10,1,a4);

  textbackground(8);textcolor(13);
  gotoxy(45,5);cprintf("Push");
  gotoxy(45,7);cprintf("Pop");
  gotoxy(45,9);cprintf("Quit");
  box(43,4,49,10,1,a5);
  normvideo();
  menu0();
 }  /*   End of program   */

 void box(int l,int t,int r,int b,int bo,char *name)
 {
  int b1,b2,b3,b4,b5,b6,i;normvideo();
  if (bo==1) { b1=218;b2=191;b3=192;b4=217;b5=196;b6=179;}
  else { b1=201;b2=187;b3=200;b4=188;b5=205;b6=186;}
  gotoxy(l,t);cprintf("%c",b1);
  gotoxy(r,t);cprintf("%c",b2);
  gotoxy(l,b);cprintf("%c",b3);
  gotoxy(r,b);cprintf("%c",b4);
  for (i=l+1;i<=r-1;i++)
  { gotoxy(i,t);cprintf("%c",b5);
    gotoxy(i,b);cprintf("%c",b5);}
  for (i=t+1;i<=b-1;i++)
  { gotoxy(l,i);cprintf("%c",b6);
    gotoxy(r,i);cprintf("%c",b6);}
    gettext(l,t,r,b,name);
 }  /* end of box function  */


 void c()
 {textbackground(8);textcolor(10);
  cprintf("%c",16);normvideo();}

 void menu0()
 {
  clrscr();
  puttext(1,1,79,3,a1);
  gotoxy(y1,2);c();
  do
  {
   g=getch();
   switch(g)
   {
     case 13 :  {
	   switch(j)
	   {
	    case 1 : menu1();break;
	    case 2 : menu2();break;
	    case 3 : menu3();break;
	    default :break;
	   }
	   break;
	  }
   case 75  :  {
	  if (j==1) j=3;
	  else j--;
	  gotoxy(y1,2);cputs(" ");
	  switch(y1)
	  {
	   case 2  : y1=30;break;
	   case 20 : y1=2;break;
	   case 30 : y1=20;break;
	  }
	  gotoxy(y1,2);c();
	  break;
	 }
   case 77 :  {
	  if (j==3) j=1;
	  else j++;
	  gotoxy(y1,2);cputs(" ");
	  switch(y1)
	  {
	   case 2  : y1=20;break;
	   case 20 : y1=30;break;
	   case 30 : y1=2;break;
	  }
	  gotoxy(y1,2);c();
	  break;
	 }
    case   27 :break;
    default : break;
  }  /* of switch */
  } while ( g != 27 );
 } /* end of menu0 */

 /*     ************** menu1 **************    */
  void menu1()
 {
  puttext(3,4,11,12,a2);
  gotoxy(4,xm1);c();
  do
  {
   g=getch();gotoxy(20,20);clreol();
   switch(g)
   {
     case 13 :  {
	   switch(chm1)
	   {
	    case 1 :  system("stackpt2");clrscr();break;
	    case 2 : gotoxy(20,20);cputs(" Queues");break;
	    case 3 : gotoxy(20,20);cputs(" Trees");break;
	    case 4 : gotoxy(20,20);cputs(" Graphs");break;
	    default :break;
	   }
	   break;
	  }

    case 72 : {
	  if (chm1==1) chm1=4;
	  else chm1--;
	  gotoxy(4,xm1);cputs(" ");
	  if (xm1==5) xm1=11;
	  else xm1-=2;
	  gotoxy(4,xm1);c();
	  break;
	 }

    case 80 : {
	  if (chm1==4) chm1=1;
	  else chm1++;
	  gotoxy(4,xm1);cputs(" ");
	  if (xm1==11) xm1=5;
	  else xm1+=2;
	  gotoxy(4,xm1);c();
	  break;
	 }

   case 75  :  {
	  puttext(3,4,11,12,ah1);
	  gotoxy(y1,2);cputs(" ");
	  gotoxy(4,xm1);cputs(" ");
	  j=3;y1=30;
	  gotoxy(y1,2);c();
	  menu3();
	  break;
	 }

  case 77  :  {
	  puttext(3,4,11,12,ah1);
	  gotoxy(y1,2);cputs(" ");
          gotoxy(4,xm1);cputs(" ");
	  j=2;y1=20;
	  gotoxy(y1,2);c();
	  menu2();
	  break;
	 }

   case 27 : {
	 puttext(3,4,11,12,ah1);
	 j=1;y1=2;
	 menu0();
	 break;
	}
   default : break;
  }  /* of switch */
  } while ( g != 27 );
 } /* end of menu1 */

  /*     ************** menu2 **************    */
  void menu2()
 {
  puttext(19,4,29,10,a3);
  gotoxy(20,xm2);c();
  do
  {
   g=getch();gotoxy(20,20);clreol();
   switch(g)
   {
    case 13 :  {
	   switch(chm2)
	   {
	    case 1 : system("shift0");break;
	    case 2 : system("spiral");break;
	    case 3 : system("pascalt1");break;
	    default :break;
	   }
	   break;
	  }

   case 72 : {
	  if (chm2==1) chm2=3;
	  else chm2--;
	  gotoxy(20,xm2);cputs(" ");
	  if (xm2==5) xm2=9;
	  else xm2-=2;
	  gotoxy(20,xm2);c();
	  break;
	 }

    case 80 : {
	  if (chm2==3) chm2=1;
	  else chm2++;
	  gotoxy(20,xm2);cputs(" ");
	  if (xm2==9) xm2=5;
	  else xm2+=2;
	  gotoxy(20,xm2);c();
	  break;
	 }

  case 75  :  {
	  puttext(19,4,29,10,ah3);
	  gotoxy(y1,2);cputs(" ");
          gotoxy(20,xm2);cputs(" ");
	  j=1;y1=2;
	  gotoxy(y1,2);c();
	  menu1();break;
	 }

   case 77  :  {
	  puttext(19,4,29,10,ah3);
	  gotoxy(y1,2);cputs(" ");
          gotoxy(20,xm2);cputs(" ");
	  j=3;y1=30;
	  gotoxy(y1,2);c();
	  menu3();break;
	 }

  case 27 : {
	 puttext(19,4,29,10,ah3);
	 j=2;y1=20;
	 menu0();
	 break;
	}
    default : break;
  }  /* of switch */
  } while ( g != 27 );
 } /* end of menu2 */

  /*     ************** menu3 **************    */
  void menu3()
 {
  puttext(30,4,37,10,a4);
  gotoxy(31,xm3);c();
  do
  {
   g=getch();gotoxy(20,20);clreol();
   switch(g)
   {
    case 13 :  {
	   switch(chm3)
	   {
	    case 1 : gotoxy(20,20);cputs(" Not available");break;
	    case 2 : gotoxy(20,20);
		     cputs(" Developed by Bhavani Prasad Polimetla");break;
	    case 3 : gotoxy(20,20);cputs(" Exit from this program");
		     puttext(30,4,37,10,ah4);menu0();j=3;y1=30;
		     break;
	    default :break;
	   }
	   break;
	  }

    case 72 : {
	  if (chm3==1) chm3=3;
	  else chm3--;
	  gotoxy(31,xm3);cputs(" ");
	  if (xm3==5) xm3=9;
	  else xm3-=2;
	  gotoxy(31,xm3);c();
	  break;
	 }

    case 80 : {
	  if (chm3==3) chm3=1;
	  else chm3++;
	  gotoxy(31,xm3);cputs(" ");
	  if (xm3==9) xm3=5;
	  else xm3+=2;
	  gotoxy(31,xm3);c();
	  break;
	 }

  case 75  :  {
	  puttext(30,4,37,10,ah4);
	  gotoxy(y1,2);cputs(" ");
	  j=2;y1=20;
	  gotoxy(y1,2);c();
	  menu2();break;
	 }

  case 77  :  {
	  puttext(30,4,37,10,ah4);
	  gotoxy(y1,2);cputs(" ");
	  j=1;y1=2;
	  gotoxy(y1,2);c();
	  menu1();break;
	 }

   case 27 : {
	 puttext(30,4,37,10,ah4);
	 j=3;y1=30;
	 menu0();
	 break;
	}
   default : break;
  }  /* of switch */
  } while ( g != 27 );
 } /* end of menu3 */

   /*     ************** menu11 ****************    */
  void menu11()
 {
  puttext(7,6,13,12,a5);
  gotoxy(8,xm11);c();
  do
  {
   g=getch();gotoxy(20,20);clreol();
   switch(g)
   {
    case 13 :  {
	   switch(chm11)
	   {
	    case 1 : gotoxy(20,20);cputs(" Push");break;
	    case 2 : gotoxy(20,20);cputs(" Pop");break;
	    case 3 : puttext(7,6,13,12,ah5);menu1();break;
	   }
	   break;
	  }

    case 72 : {
	  if (chm11==1) chm11=3;
	  else chm11--;
	  gotoxy(8,xm11);cputs(" ");
	  if (xm11==7) xm11=11;
	  else xm11-=2;
	  gotoxy(8,xm11);c();
	  break;
	 }

    case 80 : {
	  if (chm11==3) chm11=1;
	  else chm11++;
	  gotoxy(8,xm11);cputs(" ");
	  if (xm11==11) xm11=7;
	  else xm11+=2;
	  gotoxy(8,xm11);c();
	  break;
	 }

   case 27 : {
	 puttext(7,6,13,12,ah5);
	 menu1();
	 break;
	}
   default : break;
  }  /* of switch */
  } while ( g != 27 );
 } /* end of menu11 */


