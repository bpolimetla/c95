#include<stdio.h>
#include<alloc.h>
struct std {
		 struct std *prev;
		 int rno;
		 char name[25];
		 struct std *next;
		 };
struct std *temp,*record,*node,*cpos,*fpos,*lpos;
char reply=' ',ans=' ';
int rno;
main()
{
 int choice=0;
  int menu(void);
  void check(struct std *);
  void create(struct std *);
  void append(struct std *);
  void delete(struct std *);
  void  modify(struct std *);
  void insert(struct std *);
  void list(struct std *);
  void sort(struct std *);
  do{
      printf("\nMAIN MENU\n");
      printf("1 - CREATE\n");
      printf("2 - APPEND\n");
      printf("3 - DELETE\n");
      printf("4 - MODIFY\n");
      printf("5 -INSERT\n");
      printf("6 - LIST\n");
      printf("7 - SORT\n");
      printf("8 - EXIT\n");
      fflush(stdin);
      printf("ENTER CHOICE (1-8):");
      scanf("%d",&choice);
      switch(choice){
      case 1:
             record=malloc(sizeof(struct std));
	     create(record);
	     break;
      case 2:
             record=malloc(sizeof(struct std));
	     append(record);
             break;
      case 3:
	     delete(record);
             break;
      case 4:
	     node=fpos;
             modify(record);
	     break;
      case 5:
             record=malloc(sizeof(struct std));
	     insert(record);
	     break;
      case 6:
	     record=malloc(sizeof(struct std));
	     printf("RNO\tNAME\n");
	     record=fpos;
	     list(record);
	     break;
      case 7:
	     sort(record);
	     break;
      }
   }while (choice!=8);
}

void create(struct std *node)
{        reply=' ';
	if (node==NULL)
	{
	    puts("OUT OF MEMORY");
	    exit();
	    }
	 printf("\nENTER RNO :");
	 scanf("%d",&node->rno);
	 printf("ENTER NAME  :");
	 scanf("%s",node->name);
	 if (cpos==NULL)
	 {
	     fpos=node;
	     cpos=node;
	     node->next=NULL;
	     node->prev=NULL;
	     }
	 else{
	  cpos->next=node;
	  node->prev=cpos;
	  cpos=node;
	   node->next=NULL;
        	      }
         lpos=node;
	 fflush(stdin);
	 printf("WISH TO CONTINUE  :");
	 scanf("%c",&reply);
	 if (reply=='y'|| reply=='Y')
	 {
	   node->next=malloc(sizeof(struct std));
	   create(node->next);
	 }
}

void append(struct std *node)
{
      node=malloc(sizeof(struct std));
      	  cpos->next=node;
	  node->prev=cpos;
	  cpos=node;
	   node->next=NULL;

       printf("\nENTER RNO :");
       scanf("%d",&node->rno);
       printf("ENTER NAME  :");
       scanf("%s",node->name);
       node->next=NULL;
       fflush(stdin);
	printf("WISH TO CONTINUE  :");
	 scanf("%c",&reply);
	 if (reply=='y')
	 {
	   node->next=NULL;
	   append (node->next);
	 }
	 else if (reply=='n')
	 return;
}

void delete(struct std *node)
{
    printf("ENTERRNO TO BE DELETED");
    scanf("%d", &rno);
    node=fpos;
    if (rno==fpos->rno)
    {
	       fpos=fpos->next;
	       fpos->prev=NULL;
	       free(node);
    }
    else
	       check(node);

    fflush(stdin);
    printf("\nWISH TO CONTINUE Y/N : ");
    scanf("%c",&reply);
    if (reply=='y')
       delete(node);
    else
       return;
    }

void check(struct std *rec)
{
     if (rec->rno!=rno)
     {
	      if ( rec==NULL)
	      {
	      printf("\nRECORD NOT FOUND");
	      return;
	      }
	      else
	      {
	      cpos=rec;
	      rec=rec->next;
	      check(rec);
	      }
      }
      else             {
	      cpos->next=rec->next;
	      rec->next->prev=cpos;
		     free(rec);
           printf("\nyes! deleted");
	      return;}
}


void list(struct std *node)
{

    if (node!=NULL)
    {
       printf("%d\t",node->rno);
       printf("%s\n",node->name);
       list(node->next);
    }
    return;
}

void modify(struct std *node)
{
	 printf("ENTER RNO TO MODIFY:  ");
	 scanf("%d", &rno);
	 while (node->rno!=rno)
	 {
	 cpos=node;
	 node=node->next;
	 }
	 fflush(stdout);
	 printf("\nRNO:%d\t NAME:%s",node->rno,node->name);
	 printf("\nENTER NEW NAME: ");
	 scanf("%s",node->name);
	 printf("\nRNO:%d\t NEW NAME:%s",node->rno,node->name);
	 fflush(stdin);
	 printf("\nWISH TO CONTINUE Y/N :");
	 scanf("%c", &reply);
	 if (reply=='y'|| reply=='Y')
	    modify(node);
	 else
	    return;
}

void insert (struct std *node)
{

	 temp=malloc(sizeof(struct std));
	 printf("\nENTER RNO :");
	 scanf("%d", &temp->rno);
	 printf("ENTER NAME  :");
	 scanf("%s", temp->name);
	 printf("ENTER RNO AT WHICH IT IS TO BE INSERTED: ");
	 scanf("%d", &rno);
	 puts("BEFORE/AFTER?(ENTER B/A)                 : ");
	 fflush(stdin);
	 scanf("%c",&ans);

	 node=fpos;
	 while(node->rno!=rno)
	 {
	  cpos=node;
	  node=node->next;
	 }
	 if(ans=='B'||ans=='b')
	 {
	 cpos->next=temp;
	 temp->next=node;
	 node->prev=temp;
	 temp->prev=cpos;
	 }
	 else if(ans=='A'||ans=='a')
	 {
	 node->next->prev=temp;
	 temp->next=node->next;
	 temp->prev=node;
	 node->next=temp;
	 }
	 fflush(stdin);
	 printf("\nWISH TO CONTINUE Y/N  :");
	 scanf("%c", &reply);
	 if (reply=='y'||reply=='Y')
	    insert(node);
	 else
	    return;
}

void sort(struct std *node)
{
  printf("HOW TO SORT? ASCENDING(A)/DESCENDING(D):");
  fflush(stdin);
  scanf("%c",&ans);
  if (ans=='A'|| ans=='a')
  {
  node=fpos;
    while( node!=NULL)
    {
    cpos=node;
   while(cpos!=NULL)
   {
    if (node->rno > cpos->rno)
    {
	 temp->rno=cpos->rno;
	 strcpy(temp->name,cpos->name);
	 cpos->rno=node->rno;
	 strcpy(cpos->name,node->name);
	 node->rno=temp->rno;
	 strcpy(node->name,temp->name);
	 }
	 cpos=cpos->next;
	 }
	 node=node->next;
	}
    }
    else if(ans=='D' || ans=='d')
    {
       node=lpos;
       while( node!=NULL)
       {
	   cpos=node;
	   while(cpos!=NULL)
	   {
	      if (node->rno > cpos->rno)
	      {
		  temp->rno=cpos->rno;
		  strcpy(temp->name,cpos->name);
		  cpos->rno=node->rno;
		  strcpy(cpos->name,node->name);
		  node->rno=temp->rno;
		  strcpy(node->name,temp->name);
	       }
	       cpos=cpos->prev;
	    }
	    node=node->prev;
	}
    }
}