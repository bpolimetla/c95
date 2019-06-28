/*  0201951645  goto function which is equilent to gotoxy() in pascal */
# include <stdio.h>
# include <dos.h>
gotorc (int r,int c);
main()
{
clrscr();
gotorc(1,79);printf("r");
gotorc(1,1);printf("l");
gotorc(24,1);printf("ld");
gotorc(24,78);printf("rd");
gotorc(12,39);printf("center");
getch();
}
gotorc (int r,int c)
{
union REGS i,o;
i.h.ah=2;
i.h.bh=0;
i.h.dh=r;
i.h.dl=c;
int86(16,&i,&o);
}
