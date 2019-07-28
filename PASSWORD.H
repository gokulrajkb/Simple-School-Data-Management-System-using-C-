#include<stdio.h>
#include<string.h>
#include<conio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
char pwd[100];
char pass1[20];
char eid1[20];
FILE *p;
FILE *e;
void password()
{
	     char pass[20],eid[20],p1,newpass[20],new1pass[20];
	     e=fopen("eid.txt","r");
	     fscanf(e,"%s",&eid1);
	     p=fopen("pass.txt","r");
	     fscanf(p,"%s",&pass1);
	     while(1)
	     {
	     clrscr();
	     printf("\t\t\*****************GDR PUBLIC SCHOOL***************\n\n\n");
	     printf("\n\t\t\t******settings******\n\n");
	     printf("\t\t\tmake your choice\n");
	     printf("\t\t\t1:eid\n\t\t\t2:password\n\t\t\t3:Back\n\n\t\t\t");
	     scanf("%d",&p1);
	     switch(p1)
	     {
	       case 1:printf("enter the  password::");
		      gets(pass);
		      gets(pass);
		      if(!strcmp(pass,pass1))
		      {
			printf("enter new eid::");
			gets(eid);
			e=fopen("eid.txt","w");
			fprintf(e,"%s",eid);
			printf("\nEid changed\n");
			getch();
		      }
		       else
		       {
		       printf("\n**##invalid password\n");
		       getch();
		       }
		       break;
	     case 2:
		    printf("enter old passwod::");
		    gets(pass);
		    gets(pass);
		   if(!strcmp(pass,pass1))
		   {
		    repass:
		    printf("\nenter the new password::");
		    gets(newpass);
		    if(!strcmp(newpass,pass1))
		    {
		      printf("\nold password and new password cannot be same\n\n");
		      getch();
		      goto repass;
		    }
		    printf("\nre enter password::");
		    gets(new1pass);
		    if(!strcmp(newpass,new1pass))
		    {
		      p=fopen("pass.txt","w");
		      fprintf(p,"%s",new1pass);
		      printf("password changed\n");
		      getch();
		      break;
		     }
		    else
		    {
		      printf("mismatch\n");
		      goto repass;
		    }
		   }
		else
		{
		  printf("invalid eid or password\n\n");
		  getch();
		  break;
		}
	     case 3:fclose(e);
		    fclose(p);
		    return;
	     default: printf("invalid choice\n");
	    }
	  }
}
