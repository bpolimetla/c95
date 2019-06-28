/*  2810951500   Pascal Traingle using arrays pascalt.c */
# include <stdio.h>
main()
{
 int a[25],b[25],c,j,i,k,n;
 clrscr();
 printf("\nEnter ...up to power of ");scanf("%d",&n);
 printf("\n                              Pascal traingle \n");
 if (n >= 1) printf("\n                                    1");
 if (n >= 2) printf("\n                                  1   1 \n");
 for (i=1;i<=25;i++) a[i]=b[i]=0;
 a[0]=a[1]=b[0]=1;a[2]=0;k=29;c=1;
 do
 {
  i=0;
  do b[++i]=a[i]+a[i-1]; while (b[i] > 1);
  for (j=1;j<=k;j++) printf(" ");k-=2;
  for (j=0;j<=i;j++) {printf("%4d",b[j]);a[j]=b[j];}
  printf("\n");
 } while(++c<=n-2);
 getch();
}