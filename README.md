# Program-Done-in-MCA-1st-Sem
 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
 	 char toss;
 	 int s,w,s1,w1,margin;
 	 printf("Toss a coin to decide which team play first\n");
 	 scanf("%s",&toss);	 
 	  if(toss=='t')
 	  {
 	  	 printf("Coin Tossed");
 	   printf("\nTeam A is play first");
 	     printf("\nEnter the score and wicket of team A");
         scanf("%d %d",&s,&w);
          printf("\nEnter the score and wicket of team B");
           scanf("%d %d",&s1,&w1);
        if(s>s1)
       {
        	margin=s-s1;
            printf("\nTeam A is win the game by %d run" ,margin);
       }
        else 
       {
     	margin=s1-s;
       printf("\nTeam B is win the game by %d run",margin);
      }
    }
 	     else if(toss=='h')
 	    {
 	    	 printf("\nCoin Tossed");
 	      printf("\nTeam B is play first");
 	        printf("\nEnter the score and wicket of team B");
             scanf("%d %d",&s,&w);
           printf("\nEnter the score and wicket of team A");
           scanf("%d %d",&s1,&w1);
         if(s>s1)
         {
             margin=s-s1;
            printf("\nTeam B is win the game  by %d", margin);
         }
           else
		   {
		      margin=s1-s; 
              printf("\nTeam A is win the game by %d run",margin);
           }
        }
		  else
		  {
		    printf("Error occured");
		    getch();
		    exit(0);
          }
       getch(); 
 }

