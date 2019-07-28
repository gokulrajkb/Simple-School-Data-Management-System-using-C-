#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void admit()
{
    int i;
    char fname[50];
    float t;
    clrscr();
    fp[0]=fopen("admit0.txt","r");
    fscanf(fp[0],"%d",&i);
    i=i+ca;
    sprintf(fname,"admit%d.txt",i);
    fp[i]=fopen(fname,"w");
    textbackground(BLUE);
    printf("\n\t\t**** STUDENT ADMISSION WINDOW ****\n\n");
    printf("enter the student name:");
    gets(s[i].name);
    gets(s[i].name);
    s[i].id=i;
    fprintf(fp[i],"%d\n******STUDENT DETAILS*****\n\nname:%s\n",i,s[i].name);
    printf("\n student id:%d",s[i].id);
    fprintf(fp[i],"id:%d\n",s[i].id);
    printf("\nenter the standard:");
    scanf("%d",&s[i].std);
    fprintf(fp[i],"std:%d\n",s[i].std);
    printf("\nenter the section :");
    scanf("%s",s[i].sec);
    fprintf(fp[i],"sec:%s\n",s[i].sec);
    printf("\nenter the DOB in dd mm yyyy format:");
    scanf("%d%d%d",&s[i].db.dd,&s[i].db.mm,&s[i].db.yy);
    getdate(&d);
    s[i].age=((d.da_year)-(s[i].db.yy));
    fprintf(fp[i],"dob %d %d %d\n",s[i].db.dd,s[i].db.mm,s[i].db.yy);
    printf("Age:%d",s[i].age);
    s[i].status="admitted n present";
    fprintf(fp[i],"status:%s\n",s[i].status);
    printf("\nenter the ph no:");
    gets(s[i].phno);
    gets(s[i].phno);
    fprintf(fp[i],"ph_no:%s\n",s[i].phno);
    printf("\nenter father name:");
    gets(s[i].fname);
    fprintf(fp[i],"fathername:%s\n",s[i].fname);
    printf("\nenter mother name:");
    gets(s[i].mname);
    fprintf(fp[i],"mothername:%s\n",s[i].mname);
    s[i].dj.dd=d.da_day;
    s[i].dj.mm=d.da_mon;
    s[i].dj.yy=d.da_year;
    printf("\nenter the address:");
    gets(s[i].address);
    fprintf(fp[i],"address:%s\n",s[i].address);
    printf("\njoining date:%d/%d/%d\n",s[i].dj.dd,s[i].dj.mm,s[i].dj.yy);
    fprintf(fp[i],"joining date:%d %d %d\n",s[i].dj.dd,s[i].dj.mm,s[i].dj.yy);
    printf("*******************Fees****************\n\nenter the fees being paid");
    printf("\nenter the tution fees:");
    scanf("%f",&t);
     s[i].f.tutionf=t;
     fprintf(fp[i],"\n***FEES DETAILS***\n\ntutionfee:%.2f\n",s[i].f.tutionf);
    printf("\nenter the charity fees:");
    scanf("%f",&t);
    s[i].f.charityf=t;
    fprintf(fp[i],"charityfee:%.2f\n",s[i].f.charityf);
    s[i].f.libf=2000;
    fprintf(fp[i],"libfee:%.2f\n",s[i].f.libf);
    s[i].f.sportf=2000;
    fprintf(fp[i],"sportsfee:%.2f\n",s[i].f.sportf);
    s[i].f.dressf=3000;
    fprintf(fp[i],"dressfee:%.2f\n",s[i].f.dressf);
    s[i].f.busf=4000;
    fprintf(fp[i],"busfee:%.2f\n",s[i].f.busf);
    t=(s[i].f.tutionf+s[i].f.charityf+s[i].f.libf+s[i].f.sportf+s[i].f.dressf+s[i].f.busf);
    s[i].f.totalf=t;
    printf("\nTotal Fees Paid=%.2f",s[i].f.totalf);
    fprintf(fp[i],"totalfee:%.2f",s[i].f.totalf);
    fclose(fp[i]);
    if(s[i].f.totalf<30000)
    {
      printf("\nFees not fully paid\n");
    }
    else
    {
      printf("\nFees fully paid");
     }
     getch();
}