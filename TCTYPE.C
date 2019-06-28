# include <stdio.h>
# include <dos.h>
# include <ctype.h>
 main()
{
 int i,j;
 char c;
 clrscr();
 do
 {
 c=getchar(); c=getchar();
 printf("\nentered charecter is %c  ascii value is %i",c,c);
 i=isalpha(c);
 if (i!=0) printf("\n alpha");
 i=isalnum(c);
 if (i!=0) printf("\n alnum ");
 i=isascii(c);
 if (i!=0) printf("\n assci");
 i=iscntrl(c);
 if (i!=0) printf("\n cntrl");
 i=isdigit(c);
 if (i!=0) printf("\n digit");
 i=isgraph(c);
 if (i!=0) printf("\n graph ");
 i=islower(c);
 if (i!=0) printf("\n lower");
 i=isprint(c);
 if (i!=0) printf("\n print");
 i=ispunct(c);
 if (i!=0) printf("\n punct");
 i=isspace(c);
 if (i!=0) printf("\n space");
 i=isupper(c);
 if (i!=0) printf("\n upper");
 i=isxdigit(c);
 if (i!=0) printf("\n xdigit");
 } while(c != 'q');
}