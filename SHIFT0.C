/* 2810951450  Shift all zeros to bottom of the list shift0.c */
# include <stdio.h>
main()
{
 int a[25],i,j,m,n;
 clrscr();
 printf("Enter no.of elements   ");scanf("%d",&n);
 printf("\nEnter data   ");
 j=0;m=n-1;
 for (i=1;i<=n;i++)
 {
  scanf("%d",&a[j]);
  if (a[j]!=0) j++;
  else { a[m]=0;m--; }
 }
  printf("\n\nShifted list is ");
  for (i=0;i<=n-1;i++) printf("%3d",a[i]);
  getch();
}
