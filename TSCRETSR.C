  /*   1212951445   tsr program  */
  # include <stdio.h>
  # include <dos.h>
  void interrupt (*old)();
  void interrupt new();
  char far *scr=(char far*)0xb8000000;
  int i=0,j;
  main()
  {
   old=getvect(0x08);
   setvect (0x08,new);
   keep(0,375);
  }

  void interrupt new()
  {
  i++;
  if (i== 40)
  {
   i=0;
   for (j=0;j<4000;j+=2)
    {
    if (*(scr+j)>='A' && *(scr+j)<='Z') *(scr+j)+=32;
     else
      if (*(scr+j)>='a' && *(scr+j)<='z') *(scr+j)-=32;
    }
   }
   (*old)();
  }



