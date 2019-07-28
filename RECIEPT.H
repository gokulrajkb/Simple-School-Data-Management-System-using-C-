#include<stdio.h>
#include<conio.h>
#include<dos.h>
void reciept( )
{
      int n=0,f=0,i,o,ch1,m=1;
      char ch,fname[100];
      struct time t1;
      struct date d1;
      clrscr();
      printf("\n\n\t\t*****   RECIEPT WINDOW   *****\n\n");
      printf("enter the student id:  ");
      scanf("%d",&n);
      clrscr();
      printf("************************GDR PUBLIC SCHOOL***********************\n");
      getdate(&d1);
      printf("Date::=>%d/%d/%d\n",d1.da_day,d1.da_mon,d1.da_year);
      gettime(&t1);
      printf("Time:=>%d:%d:%d\n",t1.ti_hour,t1.ti_min,t1.ti_sec);
      printf("********************    RECIEPT      *****************\n");
      fclose(fp[0]);
      fp[0]=fopen("admit0.txt","r");
      fscanf(fp[0],"%d",&m);
      m=m+ca;
      for(i=1;i<=m;i++)
      {
	    fclose(fp[i]);
	    sprintf(fname,"admit%d.txt",i);
	    fp[i]=fopen(fname,"r");
	    fscanf(fp[i],"%d",&o);
	    if(o==n)
	    {
	      f=1;
	      while(ch!=EOF)
	      {
	       ch=fgetc(fp[i]);
	       printf("%c",ch);
	      }
	      fclose(fp[i]);
	      getch();
	     }
      }
       printf("\n admiter signature:\t\t\t\t\treciepent signature:");
       if(f==0)
       {
	  printf("\n\n\n\n\n\n\n\t\t\t------------------------\n");
	  printf("\t\t\t\tNOT FOUND\n");
	  printf("\t\t\t------------------------\n");
	  getch();
	  return;
	}
   return;
}
