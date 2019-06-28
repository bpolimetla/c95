/*  090195 run other exefiles */
# include <stdio.h>
# include <process.h>
# include <stdlib.h>
main()
{
 char a[10];
 system("dir");
 system("date");
 system("popmenu");

 do{
 puts("Enter ");gets(a);
 if (a=="cls") system("cls");
/*
 if (strcmp(a,"dir")!=0) system("dir");
 if (strcmp(a,"date")!=0) system("date");
 if (strcmp(a,"time")!=0) system("time");
 else printf("\nbad command or file name");*/
 } while (strcmp(a,"z"));


}

