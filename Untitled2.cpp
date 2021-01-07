#include<stdio.h>
#include<conio.h>

void main()
{
	 int i,j,row,p[5][5];
       row=0;
	 printf("Print the multiplication table in rows and coloums from 1 to 5\n\n");
	 for(j=1;j<6;j++)
	   printf("%d\t",j);
	   printf("\n");
	   for(i=1;i<6;i++)
	       {
	       	  row=i;
	       	  printf("%d\t",row);
	       	     for(j=1;j<6;j++)
               {
	       	    p[i][j]=i*j;
	       	    printf("%d\t",p[i][j]);
		       }
             printf("\n");
           }
           getch();
	 
}
