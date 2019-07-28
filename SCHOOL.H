FILE *fp[100];
struct time t;
struct date d;
struct date1
{
   int dd,mm,yy;
};
static int ca;
struct fee_details
{
   float tutionf;
   float charityf;
   float libf;
   float sportf;
   float busf;
   float dressf;
   float totalf;
};
struct spdetails
{
   char name[20];
   int id;
   int std;
   char sec[5];
   int age;
   char *status;
   char fname[20];
   char mname[20];
   char address[200];
   char phno[11];
   struct date1 db,dj,dp;
   struct fee_details f;
}s[100];
