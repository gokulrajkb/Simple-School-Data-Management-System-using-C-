#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void due()
{
      int m,i,o,f=0,l;
      float rm;
      char nr[13],ff[3];
      char fname[100];
      clrscr();
      printf("\n\n*******************  DUE STUDENTS ID  ****************\n\n\n");
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
	      fseek(fp[i],0,SEEK_END);
	      l=ftell(fp[i]);
	      fseek(fp[i],(l-8),SEEK_SET);
	      fscanf(fp[i],"%s",&nr);
	      rm=(float)atol(nr);
	      fseek(fp[i],0,SEEK_END);
	      l=ftell(fp[i]);
	      fseek(fp[i],(l-1),SEEK_SET);
	      fscanf(fp[i],"%s",&ff);
	      if(strcmp(ff,"R")!=0)
	      {
	       if(rm<=30000)
	       {
		f=f+1;
		printf("\nid:%d\tPaid amt:%.2f",o,rm);
		fclose(fp[i]);
	       }
	      }
	 }
       if(f==0)
       {
	  printf("\n\n\n\n\n\n\n\t\t\t------------------------\n");
	  printf("\t\t\t\tNOT DUES\n");
	  printf("\t\t\t------------------------\n");
	  getch();
	  return;
	}
	getch();
   return;
}