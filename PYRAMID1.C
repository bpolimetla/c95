/* 2610951530 pyramid1.c */
# include <stdio.h>
main()
{
int i,k,j,s=1;
clrscr();
for (i=89;i>=65;i--)
{
printf("\n");
for (j=65;j<=i;j++) printf("%c",j);
if (i<89)
{ for (k=1;k<=s;k++) printf(" ");
s+=2;}
for (j=(i==89 ? i-1:i);j>=65;j--) printf("%c",j);
}
getch();
}