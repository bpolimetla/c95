#include <stdio.h>
main()
{
char c;
unsigned char d;
int i;
unsigned int j;
long int k;
unsigned long int m;
float x;
double y;
long double z;
clrscr();
do
{
clrscr();
printf("\nEnter charecter ,unsigned char");
scanf("%d %d",&c,&d);
printf(" %c  %c\n",c,d);

printf("\nEnter int,unsigned ");
 scanf(" %d %u",&i,&j);
printf(" %d    %u\n",i,j);

printf("\nEnter long int,unsigned long int ");
 scanf(" %ld %lu",&k,&m);
printf(" %ld    %lu\n",k,m);

printf("\nEnter float,double,long double ");
 scanf(" %f %lf %Lf",&x,&y,&z);
printf(" %f   %lf   %Lf\n",x,y,z);
}
while (c!='y');
getch();
}