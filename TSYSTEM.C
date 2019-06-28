/*  0601951550  system checking  */

# include <stdio.h>
# include <process.h>
# include <stdio.h>
# include <string.h>
main()
{
 char p[30],q[30];
 clrscr();
 gets(p);
 if (strcmp(p,"dir")==0) system ("dir *.c");getch();
 if (strcmp(p,"date")==0) system ("date");getch();
 if (strcmp(p,"time")==0) system ("time");getch();
 if (strcmp(p,"ver")==0) system ("ver");getch();
}