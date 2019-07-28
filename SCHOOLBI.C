#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include"school.h"
#include"password.h"
#include"admit.h"
#include"alter.h"
#include"search.h"
#include"reciept.h"
#include"remove.h"
#include"due.h"
void main()
{
   int c=0,chm,m,no,i=0;
   char ch,pass2[20],eid2[20];
   ca=0;
   clrscr();
   start:
   clrscr();
   e=fopen("eid.txt","r");
   fscanf(e,"%s",&eid1);
   p=fopen("pass.txt","r");
   fscanf(p,"%s",&pass1);
   textbackground(BLUE);
   while(c<1)
   {
   clrscr();
   textcolor(WHITE);
   printf("\n================================================================================");
   printf("-------------                                                -------------------");
   cprintf("#######*********************    GDR PUBLIC SCHOOL     ********************######");
   printf("-------------                                                 ------------------");
   printf("================================================================================\n\n");
   getdate(&d);
   printf("\nDate::=>%d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
   gettime(&t);
   printf("Time:=>%d:%d:%d\n",t.ti_hour,t.ti_min,t.ti_sec);
   fp[0]=fopen("admit0.txt","r");
   fscanf(fp[0],"%d",&no);
   fclose(fp[0]);
   printf("Total no Students:%d\n\n\n\n",no);
   printf("\t\t------------------------------------------\n");
   printf("\t\tenter eid:        ");
   gets(eid2);
   printf("\n\t\tenter password:   ");
   strcpy(pwd," ");
   while(1)
   {
       ch=getch();
       if(ch==ENTER||ch==TAB)
       {
	  pwd[i]='\0';
	  break;
       }
       else if(ch==BKSP)
       {
	 if(i>0)
	 {
	  i--;
	  printf("\b \b");
	}
       }
       else
       {
	pwd[i++]=ch;
	printf("* \b");
       }
   }
   if(strcmp(pwd,pass1)==0&&strcmp(eid2,eid1)==0)
   {
      break;
   }
   else
   {
     c++;
     printf("\n\t\tYou entered=> eid=%s  password:%s\n",eid2,pwd);
     printf("\t\t-------------------------------------------\n");
     printf("\n\t\tinvalid password or eid\n");
     getch();
     if(c==1)
     {
     printf("\t\t**##ERROR\n\t\t  :)  TRY AGAIN  :) \n");
     getch();
     exit(0);
     }
    }
   }
   if(strcmp(pwd,pass1)==0&&strcmp(eid2,eid1)==0)
   {
   printf("\n\t\t-----------------------------------------\n");
   printf("\n\t\t\t    SUCCESSFULL LOGIN ");

   getch();
   while(1)
   {
   chm=0;
   clrscr();
   textbackground(BLUE);
   printf("\n================================================================================");
   printf("-------------                                                -------------------");
   textcolor(WHITE);
   cprintf("#######*********************    GDR PUBLIC SCHOOL     ********************######");
   printf("-------------                                                 ------------------");
   printf("================================================================================\n\n");
   getdate(&d);
   printf("\nDate:%d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
   gettime(&t);
   printf("Time:%d-%d-%d\n\n\n",t.ti_hour,t.ti_min,t.ti_sec);
   printf("\t\t\tMENU\n\n");
   printf("\t\t1:Admit New Student\n\t\t2:Alter Student Data and fees\n\t\t3:search student Details\n\t\t4:Remove student\n\t\t5:reciept\n\t\t6:due\n\t\t7:Change Eid or Password\n\t\t8:Exit\n\n\t\t");
   scanf("%d",&chm);
    switch(chm)
   {
      case 1:ca++;
	     admit();
	     break;
      case 2:alter();
	     break;
      case 3:search();
	     break;
      case 4:remove1();
	     break;
      case 5:reciept();
	     break;
      case 6:due();
	     break;
      case 7:password();
	     break;
      case 8:fp[0]=fopen("admit0.txt","r");
	     fscanf(fp[0],"%d",&m);
	     m=m+ca;
	     fclose(fopen("admit0.txt","w"));
	     fp[0]=fopen("admit0.txt","a");
	     fprintf(fp[0],"%d",m);
	     fclose(fp[0]);
	     exit(0);
     default:printf("*##\tERRORinvalid key pressed\n\nmake your choice again\n");

   }
  }
 }
  else
  {
    printf("***##ERROR\ninvalid eid or password\n\n");
    printf("try again\n");
    goto start;
  }
}