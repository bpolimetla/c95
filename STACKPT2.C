/* 0301950340  stack using pointers   stackpt2.c  */

# include<stdio.h>
# include<alloc.h>
# define null 0
typedef struct pbp {
	      int data;
	      struct pbp *next;
	     }stack;
stack *temp1,*temp2,**tp;

 main()
 {
  void push (stack **);
  void pop (stack **);
  int i,j=1,x1=5,g;
  stack *start,*temp;
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
	    case 1 :/* gotoxy(20,21);
		     printf("PUSH start=%4d &start=%4d *start=%4d",start,&start,*start); */
		     push(&start);
		     break;
	    case 2 : /* gotoxy(20,23);printf("POP start=%4d &start=%4d *start=%4d",start,&start,*start); */
		     pop(&start);break;
	   }
	   gotoxy(10,20);printf("						     ");
	   gotoxy(10,19);printf("Linked stack is ");
	   temp=start;gotoxy(10,20);
	   while (temp->next != 0)
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

void push(stack **tp)
 {
  /*gotoxy(20,22);printf("PUSH tp=%4d &tp=%4d *tp=%4d **tp=%4d",tp,&tp,*tp,**tp); */
  temp1=(stack *)malloc(sizeof(stack));
  temp1->next=*tp;
  gotoxy(10,15);printf("Enter new element ");scanf("%d",&temp1->data);
  *tp=temp1;
 }

void pop(stack **tp)
 {
   temp1=*tp;
   /* gotoxy(20,24);
   printf("POP tp=%4d &tp=%4d *tp=%4d **tp=%4d temp1->data=%4d",tp,&tp,*tp,**tp,temp1->data); */
  if (temp1->data == 9999)
     {
      gotoxy(10,17); printf("Stack is empty ");getch();
      gotoxy(10,17); printf("               ");
     }
    else
     {
      gotoxy(10,15); printf("Deleted element is %d ",temp1->data);
      temp2=temp1;
       *tp=temp1->next;
      free(temp2);
   }
 }