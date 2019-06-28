/* 0301950340  stack using pointers   */

# include<stdio.h>
# include<alloc.h>
# define null 0
 struct pbp {
	      int data;
	      struct pbp *next;
	     };
typedef struct pbp stack;
void push ();
void pop ();
int i,j=1,x1=5,g;
 stack *start,*temp,*temp1;
 main()
 {

  start=(stack *)malloc(sizeof(stack));
  start->data=9999;
  start->next=null;
  clrscr();
  gotoxy(35,2); printf("Stack demo (Pointers are used)");
  gotoxy(10,5); printf("Addition");
  gotoxy(10,7); printf("Deletion");
  gotoxy(9,5); printf("%c",16);
  gotoxy(10,23);printf("Press Spacebar for change option");
  gotoxy(10,24);printf("      Esc for escape");
  do{
  gotoxy(9,x1);g=getch();
  switch (g)
  {
  case 13 :{
	   switch (j)
	   {
	    case 1 : push();break;
	    case 2 : pop();break;
	   }
	   gotoxy(10,19);printf("                ");
	   gotoxy(10,19);printf("Linked stack is ");

	   temp=start;gotoxy(10,20);
	   printf("                                                       ");
           gotoxy(10,20);
	   while (temp->data != 9999)
	   {
	    printf("-> %d ",temp->data);
	    temp=temp->next;
	   }
	   break; }
  case 32 :{
	   if (j==1)
	    {
	     gotoxy(9,x1);printf(" ");
	     j=2;x1=7;
	     gotoxy(9,x1);printf("%c",16);
	    }
	   else
            {
	     gotoxy(9,x1);printf(" ");
	     j=1;x1=5;
	     gotoxy(9,x1);printf("%c",16);
	    }
	   break;}
  case 27 : break;
  default : break;
  }
  } while (g != 27 );
}

void push()
 {
  temp1=(stack *)malloc(sizeof(stack));
  gotoxy(10,15);printf("Enter new element ");
  gotoxy(28,15);printf("                  ");gotoxy(30,15);
  scanf("%d",&temp1->data);
  temp1->next=start;
  start=temp1;
 }

void pop()
 {

  if (start->data == 9999)
     {
      gotoxy(10,17); printf("Stack is empty ");getch();
      gotoxy(10,17); printf("               ");
     }
    else
     {
      gotoxy(28,15); printf("        ");
      gotoxy(10,15); printf("Deleted element is %d ",start->data);
      temp1=start;
      start=start->next;
      free(temp1);
      }
 }