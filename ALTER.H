#include<stdio.h>
#include<conio.h>
void alter()
{
	 int ch,ch1,n=0,i,o,m=1,f=0;
	 char fname[100];
	 float t=0;
	 clrscr();
	 printf("\n\t\t\t******  ALTERING DETAILS  ******\n\n\n");
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
	    fclose(fp[i]);
	    if(o==n)
	    {
	     f=1;
	     sprintf(fname,"admit%d.txt",n);
	     fp[n]=fopen(fname,"w");
	     printf("\nstudent found\n");
	     printf("enter the student name:");
	     gets(s[n].name);
	     gets(s[n].name);
	     s[n].id=n;
	     fprintf(fp[n],"%d",n);
	     fprintf(fp[n],"\n******STUDENT DETAILS*****\n\nname:%s\n",s[n].name);
	     fprintf(fp[n],"id:%d\n",n);
	     printf("\nenter the standard:");
	     scanf("%d",&s[n].std);
	     fprintf(fp[i],"std:%d\n",s[n].std);
	     printf("\nenter the section :");
	     scanf("%s",s[n].sec);
	     fprintf(fp[n],"sec:%s\n",s[n].sec);
	     printf("\nenter the DOB in dd mm yyyy format:");
	     scanf("%d%d%d",&s[n].db.dd,&s[n].db.mm,&s[n].db.yy);
	     getdate(&d);
	     s[n].age=((d.da_year)-(s[n].db.yy));
	     fprintf(fp[n],"dob %d %d %d\n",s[n].db.dd,s[n].db.mm,s[n].db.yy);
	     printf("Age:%d",s[n].age);
	     s[n].status="currently present";
	     fprintf(fp[n],"status:%s\n",s[n].status);
	     printf("\nenter the ph no:");
	     gets(s[n].phno);
	     gets(s[n].phno);
	     fprintf(fp[n],"ph_no:%s\n",s[n].phno);
	     printf("\nenter father name:");
	     gets(s[n].fname);
	     fprintf(fp[n],"fathername:%s\n",s[n].fname);
	     printf("\nenter mother name:");
	     gets(s[n].mname);
	     fprintf(fp[n],"mothername:%s\n",s[n].mname);
	     s[n].dj.dd=d.da_day;
	     s[n].dj.mm=d.da_mon;
	     s[n].dj.yy=d.da_year;
	     printf("\nenter the address:");
	     gets(s[n].address);
	     fprintf(fp[n],"address:%s\n",s[n].address);
	     fprintf(fp[n],"joining date:%d %d %d\n",s[n].dj.dd,s[n].dj.mm,s[n].dj.yy);
	     printf("*******************Fees****************\n\nenter the fees being paid");
	     printf("\nenter the tution fees:");
	     scanf("%f",&t);
	     s[n].f.tutionf=t;
	     fprintf(fp[n],"\n***FEES DETAILS***\n\ntutionfee:%.2f\n",s[n].f.tutionf);
	     printf("\nenter the charity fees:");
	     scanf("%f",&t);
	     s[n].f.charityf=t;
	     fprintf(fp[n],"charityfee:%.2f\n",s[n].f.charityf);
	     s[n].f.libf=2000;
	     fprintf(fp[n],"libfee:%.2f\n",s[n].f.libf);
	     s[n].f.sportf=2000;
	     fprintf(fp[n],"sportsfee:%.2f\n",s[n].f.sportf);
	     s[n].f.dressf=3000;
	     fprintf(fp[n],"dressfee:%.2f\n",s[n].f.dressf);
	     s[n].f.busf=4000;
	     fprintf(fp[n],"busfee:%.2f\n",s[n].f.busf);
	     t=(s[n].f.tutionf+s[n].f.charityf+11000);
	     s[n].f.totalf=t;
	     printf("\nTotal Fees Paid=%.2f",s[n].f.totalf);
	     fprintf(fp[n],"totalfee:%.2f",s[n].f.totalf);
	     fclose(fp[n]);
	     if(s[n].f.totalf<30000)
	      {
		  printf("\nFees not fully paid\n");
		  getch();
	      }
	     else
	      {
		   printf("\nFees fully paid");
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
	  }
}
