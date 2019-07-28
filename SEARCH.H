#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void search()
{
      int n=0,f=0,i,o,ch1,m=1;
      char ch,fname[100];
      clrscr();
      printf("\n\n\t\t\t**** SEARCH WINDOW ****\n\n\n");
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
	      clrscr();
	      while(ch!=EOF)
	      {
	       ch=fgetc(fp[i]);
	       printf("%c",ch);
	      }
	      fclose(fp[i]);
	      getch();
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