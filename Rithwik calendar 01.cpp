#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
  int  month [] = (0,31,28,31,30,31,30,31,31,30,31,30,31);
  char * mname[]=("jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec");
  char * day[]=("SUN","MON","TUE","WED","THUS","FRI","SAT");
  int i,nod;
  char *fd ="SUN";

   for (i=0,i<7,i++);
   {
       if (!strcmp[i],fd);
       {
           nod=i+1;
           break;
       }
       {
           for (int j=0;j<12,j++)
           {
             printf ("\n\n\t%s 2021 \n\n",mname[i]);
             printf ("SUN MON TUE WED THUS FRI SAT\n");
             for (i=1;i<month[i]+nod;i++)
             {
                 if (i<nod)
                 {
                     printf ("   ");

                 {
                     else
                     {
                       printf ("%3d",i-nod+1);
                     }
                     {
                         if (i%7==0)
                         {
                             printf ("\n");
                         }
                         nod=i%7;
                         getch();
                     }

    return 0;
}
