#include<stdio.h>
#include<conio.h>
#include<string.h>
void remove1( )
{
      int n=0,f=0,i,o,ch1,m=1,l;
      char ch,fname[100],ff[2];
      clrscr();
      printf("\t\t\t************    REMOVE WINDOW   ***************\n\n\n");
      printf("enter the student id:   ");
      scanf("%d",&n);
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
	      fseek(fp[i],0,SEEK_END);
	      l=ftell(fp[i]);
	      fseek(fp[i],(l-1),SEEK_SET);
	      fscanf(fp[i],"%s",&ff);
	      if(strcmp(ff,"R")!=0)
	      {
		 f=1;
		 fp[i]=fopen(fname,"a");
		 fprintf(fp[i],"\nstudent has been removed:\nRemoved date: %d/%d/%d RR",d.da_day,d.da_mon,d.da_year);
		 printf("\n\n\n\n\n\n\n\t\t\t------------------------\n");
		 printf("\t\t\t\t** REMOVED **\n");
		 printf("\t\t\t------------------------\n");
		 fclose(fp[i]);
		 getch();
	       }
	       else
	       {
		 printf("Already removed\n");
		 getch();
	       }
	     }
	   }
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
