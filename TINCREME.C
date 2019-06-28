# include <stdio.h>
main()
{
int j,i=1;
clrscr();
j=++i+1;
printf("\ni=%d j=%d",i,j);
j=i++ + 1;
printf("\ni=%d j=%d",i,j);
j+=1;
printf("\ni=%d j=%d",i,j);
j+=++j;
printf("\ni=%d j=%d",i,j);
i=3;
j%=i;
printf("\ni=%d j=%d",i,j);
getch();
}
