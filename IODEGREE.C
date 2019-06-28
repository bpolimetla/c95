/*  2810951630  Indegree and Outdegree  iodegree.c */
# include <stdio.h>
main()
{
 int a[20][20],i,j,m,n;
 clrscr();
 printf("Enter dimention  ");scanf("%d%d",&m,&n);
 for (i=0;i<=m;i++) a[i][n]=0;
 for (i=0;i<=n;i++) a[m][i]=0;
 for (i=0;i<=m-1;i++)
 {
  printf("Enter %2d Elements for row ",n);
  for(j=0;j<=n-1;j++)
  {
  scanf("%d",&a[i][j]);
  a[i][n]+=a[i][j];
  a[m][j]+=a[i][j];
  a[m][n]+=a[i][j];
  }
 }
 printf("\n\n\n");
 for(i=0;i<=m;i++)
 {
  if(i==m) printf("\n");
  for(j=0;j<=n;j++)
  {
  if (j==n) printf("    ");
  printf("%4d",a[i][j]);
  }
  printf("\n");
 }
 getch();
}

