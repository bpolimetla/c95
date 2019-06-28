/*    3010951730   prime product  primepro.c   */
# include <stdio.h>
# include <math.h>
void send(int x,int *pf,int *r);
main()
{
 int n,p,n1,p1,dum;
 clrscr();
 printf("Enter number   ");scanf("%d",&n);
 p=1;dum=n;
 while(p<dum)
 {
  send(n,&p1,&n1);
  p*=p1;n=n1;
  if (p!=dum ? (printf("%d X ",p1)):(printf("%d",p1)));
 }
 getch();
}  /*   end of main program  */

void send(int x,int *pf,int *r)
{
int a,b,f,c,f1;
 b=2;
 if (x%2 == 0 ) { *pf=2;*r=x/2;}
 else
  {
   f1=0;
   while ( b<=x && f1 == 0 )
    {
      b++;f=0;a=2;
      c=sqrt(b);
      while( a<=c && f==0){if (b%a == 0 ? f=1 : a++);}
      if (f==0 && x%b==0 ) { *pf=b;*r=x/b;f1=1; }
    }
  }
}
