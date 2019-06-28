 /* 0501951035  test data i/p */
 # include <stdio.h>
 typedef struct pbp{
      int i;
      char *c;
      } hai;

 main()
 {
 hai *data;
 char *d;
 clrscr();
 scanf("%d%s",&data->i,data->c);
 printf("integer is =%d string is =%s\n",data->i,data->c);
 printf("\nstring length is =%d  reverse is %s givin is %s\n",strlen(data->c),strrev(data->c),data->c);
 d=data->c;
 if (strcmp(d,strrev(data->c)) != 0) puts("palin");
 else puts("not palin");
 getch();
 }

