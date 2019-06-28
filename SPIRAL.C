/*  1112951455  spiral matrix  */
 # include <stdio.h>
 # include <process.h>
 main()
 {
  int a,spiral[20][20],i,j,x,y,m,m1,n1,n,s=1,pbp;
  clrscr();
  printf ("Enter dimension row,column  ");scanf ("%d %d",&m,&n);
  a=m*n;m--;n--;m1=m;n1=n;
  for (i=0;i<=m;i++) for (j=0;j<=n;j++) spiral[i][j]=0;
  i=0;j=0;

  while (s<=a)
    {
     for (y=j;y<=n;y++) { spiral[i][y]=s;s++;} i++;if (s>a) break;
     for (x=i;x<=m;x++) { spiral[x][n]=s;s++;} n--;if (s>a) break;
     for (y=n;y>=i-1;y--) { spiral[m][y]=s;s++;} m--;if (s>a) break;
     for (x=m;x>=i;x--) { spiral[x][j]=s;s++;} j++;if (s>a) break;
     }

     printf("\n Spiral matrix is \n\n");
     for (i=0;i<=m1;i++)
      {
       for (j=0;j<=n1;j++) printf ("%4d",spiral[i][j]);
       printf("\n");
      }
      getch();
    }
