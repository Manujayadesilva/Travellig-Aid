
#include <stdio.h>
#include <stdlib.h>

int i, day, busdoc, left, seat,book,CAL,dest,total=0,ticket,Uticket,Utotal=0,tot=0;
char mod, busmode, trainmode;
char* destination;

int trainFirstClassSeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int trainSecondClassSeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int trainThirdClassSeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int trainFirstClassSeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int trainSecondClassSeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int trainThirdClassSeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


int busNormalSeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int busACSeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int busHighwaySeats[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int busNormalSeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int busACSeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int busHighwaySeatsWE[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


void calculating()
{
     printf("\n\n\nDO YOU WANT TO CALCULATE THE TOATAL PRICE OR EXIT\nCALCULATE-'1'\nEXIT     -'0'\nENTER:");
     scanf("%d",&CAL);

 if(CAL==1)

   {

     printf("\n\nENTER YOUR DESTINATION\n1.COLOMBO\n2.MATHARA\n3.AMBALANGODA\n4.ALUTHGAMA\n5.HAMBANTHOTA\n\nENTER DESTINATION NUMBER:");
     scanf("%d",&dest);
     printf("\n\nENTER NUMBER OF TICKETS YOU WANT FOR OVER 12 YEARS OLD:");
     scanf("%d",&ticket);
     printf("\n\nENTER NUMBER OF TICKETS YOU WANT FOR UNDER 12 YEARS OLD:");
     scanf("%d",&Uticket);

       if (busmode=='n')
    {
        switch (dest)
        {
         case 1:
         total=700*ticket;
         Utotal=350*Uticket;

         break;
         case 2:
         total=500*ticket;
         Utotal=250*Uticket;

         break;
         case 3:
         total=250*ticket;
         Utotal=125*Uticket;

         break;
         case 4:
         total=500*ticket;
         Utotal=250*Uticket;

         break;
         case 5:
         total=800*ticket;
         Utotal=400*Uticket;

         break;
         default:
            printf("INVALID DESTINATION!\n");
        }


    }

       if (busmode=='a')
    {
        switch (dest)
        {
         case 1:
         total=1400*ticket;
         Utotal=700*Uticket;

         break;
         case 2:
         total=1000*ticket;
         Utotal=500*Uticket;

         break;
         case 3:
         total=500*ticket;
         Utotal=250*Uticket;

         break;
         case 4:
         total=700*ticket;
         Utotal=350*Uticket;

         break;
         case 5:
         total=1000*ticket;
         Utotal=500*Uticket;

         break;
         default:
            printf("INVALID DESTINATION!\n");
        }

    }

       if (busmode=='h')
    {
        switch (dest)
        {
         case 1:
         total=1200*ticket;
         Utotal=600*Uticket;

         break;
         case 2:
         total=500*ticket;
         Utotal=250*Uticket;

         break;
         case 3:
         total=300*ticket;
         Utotal=150*Uticket;

         break;
         case 4:
         total=600*ticket;
         Utotal=300*Uticket;

         break;
         case 5:
         total=1000*ticket;
         Utotal=500*Uticket;

         break;
         default:
            printf("INVALID DESTINATION!\n");
        }
    }

       if (trainmode=='f')
    {
        switch (dest)
        {
         case 1:
         total=450*ticket;
         Utotal=225*Uticket;

         break;
         case 2:
         total=400*ticket;
         Utotal=200*Uticket;

         break;
         case 3:
         total=280*ticket;
         Utotal=140*Uticket;

         break;
         case 4:
         total=450*ticket;
         Utotal=225*Uticket;
break;
         case 5:
         total=400*ticket;
         Utotal=200*Uticket;
        break;
         default:
            printf("INVALID DESTINATION!\n");
        }
    }
     if (trainmode=='s')
    {
                switch (dest)
        {
         case 1:
         total=350*ticket;
         Utotal=175*Uticket;

         break;
         case 2:
         total=300*ticket;
         Utotal=150*Uticket;

         break;
         case 3:
         total=180*ticket;
         Utotal=90*Uticket;

         break;
         case 4:
         total=350*ticket;
         Utotal=175*Uticket;

         break;
         case 5:
         total=300*ticket;
         Utotal=150*Uticket;

         break;
         default:
            printf("INVALID DESTINATION!\n");
        }
    }
     if (trainmode=='t')
    {
        switch (dest)
        {
         case 1:
         total=250*ticket;
         Utotal=125*Uticket;

         break;
         case 2:
         total=100*ticket;
         Utotal=50*Uticket;

         break;
         case 3:
         total=80*ticket;
         Utotal=40*Uticket;

         break;
         case 4:
         total=150*ticket;
         Utotal=75*Uticket;

         break;
         case 5:
         total=200*ticket;
         Utotal=100*Uticket;

         break;
         default:
            printf("INVALID DESTINATION!\n");
        }
    }
          tot=total+Utotal;
          printf("\n\nYOUR TOTAL PRICE IS %d",tot);
          printf("\n\nHAVE A NICE TRAVELLING DAY!!!!!!!!\n\n\n\n\n\n\n\n\n\n\n\n\n");


   }

}
void weekbooking()

{

    if (day==1)
    {
         int selectedSeat;
         printf("\n\nENTER THE SEAT NUMBER YOU WANT TO BOOK (1-20): ");
         scanf("%d", &selectedSeat);


         if ( mod == 'b' || mod == 'B')
       {
            FILE *file = fopen("names_of_bus_travellers.txt", "a");
            if (file == NULL)
             {
                printf("Error opening the file.");
                return;
             }

           char name[100];
           char response;

           do {
                 printf("\n\nENTER YOUR NAME: ");
                 scanf("%s", name);
                 fprintf(file, "%s\n", name);

                printf("\n\nDO YOU WANT TO ADD ANOTHER NAME?\nYES-'Y'\nNO -'N'\nENTER: ");
                scanf(" %c", &response);
              }
          while (response == 'y' ||  response == 'Y');


          fclose(file);


             if (busmode == 'n' ||  busmode == 'N')
             {
                 if (busNormalSeats[selectedSeat] > 0)
                   {
                       printf("\nSEAT %d IS BOOKED SUCCESSFULLY!",selectedSeat);
                       busNormalSeats[selectedSeat] = 0;
                       printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                       scanf("%d",&book);
                       if(book==1)
                       {
                           weekbooking();
                       }

                   }
                 else
                   {
                       printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeat);
                       weekbooking();
                   }
             }
             else if (busmode == 'a' ||  busmode == 'A')
             {
                 if (busACSeats[selectedSeat] > 0)
                   {
                        printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeat);
                        busACSeats[selectedSeat] = 0;
                        printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                        scanf("%d",&book);
                            if(book==1)
                           {
                              weekbooking();
                           }

}
                 else
                   {
                        printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeat);
                        weekbooking();
                   }
             }
else if (busmode == 'h'  || busmode == 'H')
             {
                 if (busHighwaySeats[selectedSeat] > 0)
                   {
                        printf("SEAT %d IS BOOKED SUCCESSFULLY!", selectedSeat);
                        busHighwaySeats[selectedSeat] = 0;
                        printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                        scanf("%d",&book);
                            if(book==1)
                          {
                           weekbooking();
                          }

                   }
                 else
                   {
                        printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeat);
                        weekbooking();
                   }
             }
       }

        else
       {
            FILE *file = fopen("names_of_train_travellers.txt", "a");
            if (file == NULL)
            {
                 printf("Error opening the file.");
                 return;
            }

            char name[100];
            char response;

           do
            {
               printf("\n\nENTER YOUR NAME: ");
               scanf("%s", name);
               fprintf(file, "%s\n", name);

               printf("\n\nDO YOU WANT TO ADD ANOTHER NAME?\nYES-'Y'\nNO -'N'\nENTER: ");
               scanf(" %c", &response);
            }
           while (response == 'y' || response == 'Y');


           fclose(file);


             if (trainmode == 'f' || trainmode == 'F')
             {
                 if (trainFirstClassSeats[selectedSeat] > 0)
                   {
                       printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeat);
                       trainFirstClassSeats[selectedSeat] = 0;
                       printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                       scanf("%d",&book);
                           if(book==1)
                         {
                           weekbooking();
                         }

                   }
                else
                   {
                        printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...",selectedSeat);
                        weekbooking();
                   }
            }
            else if (trainmode == 's' || trainmode == 'S')
            {
                if (trainSecondClassSeats[selectedSeat] > 0)
                  {
                        printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeat);
                        trainSecondClassSeats[selectedSeat] = 0;
                        printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                        scanf("%d",&book);
                            if(book==1)
                            {
                                weekbooking();
                            }
}
               else
                  {
                         printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeat);
                         weekbooking();
                  }
            }
           else if (trainmode == 't' || trainmode == 'T')
           {
               if (trainThirdClassSeats[selectedSeat] > 0)
                 {
                        printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeat);
                        trainThirdClassSeats[selectedSeat] = 0;
                        printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                        scanf("%d",&book);
                          if(book==1)
                          {
                           weekbooking();
                          }

                 }
               else
                 {
                        printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeat);
                         weekbooking();
                 }
           }
    }

  }
           calculating();

}

void weekendsbooking()
{

    if (day==0)
    {
         int selectedSeatWE;
         printf("\n\nENTER THE SEAT NUMBER YOU WANT TO BOOK (1-20): ");
         scanf("%d", &selectedSeatWE);


         if (mod == 'b' || mod == 'B')
            {
                 FILE *file = fopen("names_of_bus_travellers.txt", "a");
                 if (file == NULL)
                 {
                   printf("Error opening the file.");
                   return;
                 }

                char name[100];
                char response;

                 do
                {
                     printf("\n\nENTER YOUR NAME: ");
                     scanf("%s", name);
                     fprintf(file, "%s\n", name);

                     printf("\n\nDO YOU WANT TO ADD ANOTHER NAME?\nYES-'Y'\nNO -'N'\nENTER: ");
                      scanf(" %c", &response);
                }
                while (response == 'y' || response == 'Y');


                    fclose(file);


                 if (busmode == 'n' || busmode == 'N')
                  {
                      if (busNormalSeatsWE[selectedSeatWE] > 0)
                       {
                              printf("\nSEAT %d IS BOOKED SUCCESSFULLY!",selectedSeatWE);
                              busNormalSeatsWE[selectedSeatWE] = 0;
                              printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                              scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }
}
                     else
                       {
                              printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeatWE);
                              weekendsbooking();
                       }
                  }
                  else if (busmode == 'a' || busmode == 'A')
                  {
                      if (busACSeatsWE[selectedSeatWE] > 0)
                       {
                              printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeatWE);
                              busACSeatsWE[selectedSeatWE] = 0;
                              printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                              scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }

                       }
                      else
                       {
                              printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeatWE);
                              weekendsbooking();
                       }
                  }
                  else if (busmode == 'h' || busmode == 'H')
                  {
                      if (busHighwaySeatsWE[selectedSeatWE] > 0)
                       {
                               printf("SEAT %d IS BOOKED SUCCESSFULLY!", selectedSeatWE);
                               busHighwaySeatsWE[selectedSeatWE] = 0;
                               printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                               scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }

                       }
                      else
                       {
                               printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeatWE);
                               weekendsbooking();
                       }
                  }
            }
         else
            {
                  FILE *file = fopen("names_of_train_travellers.txt", "a");
                  if (file == NULL)
                 {
                 printf("Error opening the file.");
                 return;
                 }

                 char name[100];
                 char response;

                 do
                {
                 printf("\n\nENTER YOUR NAME: ");
                 scanf("%s", name);
                 fprintf(file, "%s\n", name);

                 printf("\n\nDO YOU WANT TO ADD ANOTHER NAME?\nYES-'Y'\nNO -'N'\nENTER: ");
                 scanf(" %c", &response);
                }
                while (response == 'y' || response == 'Y');


                fclose(file);


                  if (trainmode == 'f' || trainmode == 'F')
                  {
                      if (trainFirstClassSeatsWE[selectedSeatWE] > 0)
                       {
                              printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeatWE);
                              trainFirstClassSeatsWE[selectedSeatWE] = 0;
                              printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                              scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }
}
                      else
                       {
                              printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...",selectedSeatWE);
                              weekendsbooking();
                       }
                  }
                  else if (trainmode == 's' || trainmode == 'S')
                  {
                       if (trainSecondClassSeatsWE[selectedSeatWE] > 0)
                        {
                              printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeatWE);
                              trainSecondClassSeatsWE[selectedSeatWE] = 0;
                              printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                              scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }

                       }
                       else
                       {
                              printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeatWE);
                              weekendsbooking();
                       }
                  }
                  else if (trainmode == 't' || trainmode == 'T')
                  {
                        if (trainThirdClassSeatsWE[selectedSeatWE] > 0)
                       {
                             printf("\nSEAT %d IS BOOKED SUCCESSFULLY!", selectedSeatWE);
                             trainThirdClassSeatsWE[selectedSeatWE] = 0;
                             printf("\n\n\nDO YOU WANT TO BOOK AGAIN OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
                             scanf("%d",&book);
                                if(book==1)
                                {
                                   weekendsbooking();
                                }

                       }
                       else
                       {
                              printf("\nSEAT %d IS NOT  AVAILABLE.\nPLEASE BOOK AGAIN...", selectedSeatWE);
                              weekendsbooking();
                       }
                  }
          }

    }
             calculating();

}


 void trainMode()
{
      if(mod=='t' || mod=='T')
     {
        printf("\n\nCHOOSE YOUR TRAIN CLASS\n\nFIRST CLASS -'F'\nSECOND CLASS-'S'\nTHIRD CLASS -'T'\nENTER:");
        scanf(" %c",&trainmode);
     }

       if (day==1 && trainmode=='t' || trainmode=='T' )
        {
         FILE *fptr;
         fptr = fopen("weekthird.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }

else if (day==0 && trainmode=='t' || trainmode=='T' )
        {
         FILE *fptr;
         fptr = fopen("third.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==1 && trainmode=='s' || busmode=='S' )
        {
         FILE *fptr;
         fptr = fopen("weeksecond.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==0 && trainmode=='s' || trainmode=='S' )
        {
         FILE *fptr;
         fptr = fopen("second.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==1 && busmode=='f' || busmode=='F')
        {
         FILE *fptr;
         fptr = fopen("weekfirst.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
}
         else
        {
         FILE *fptr;
         fptr = fopen("first.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }

        }
         printf("\n\nDO YOU WANT TO BOOK SEATS OR NOT\nBOOK-'1'\nEXIT-'0'\nENTER:");
         scanf("%d",&seat);

         if (seat==1)
          {   if (day==1)
              {
                  weekbooking();
              }
              else
              {
                 weekendsbooking();
              }
          }
          else
         {
            printf("\n\nHAVE A NICE TRAVELLING DAY!!!!!!!!\n\n\n\n\n\n\n\n\n\n\n\n");
         }


}


void  busMode()
{

    if(mod=='b' || mod=='B')
     {
        printf("\n\nCHOOSE YOUR BUS MODE\n\nNORMAL BUS -'N'\nA/C BUS    -'A'\nHIGHWAY BUS-'H'\nENTER:");
        scanf(" %c",&busmode);
     }

       if (day==1 && busmode=='n'  || busmode=='N' )
        {
         FILE *fptr;
         fptr = fopen("busNweek.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }

        else if (day==0 && busmode=='n' || busmode=='N' )
        {
         FILE *fptr;
         fptr = fopen("busN.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==1 && busmode=='a' || busmode=='A' )
        {
         FILE *fptr;
         fptr = fopen("busAweek.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==0 && busmode=='a' || busmode=='A' )
        {
         FILE *fptr;
         fptr = fopen("busA.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }
        }
        else if (day==1 && busmode=='h' || busmode=='H')
        {
         FILE *fptr;
         fptr = fopen("busHweek.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }

        }
         else
        {
         FILE *fptr;
         fptr = fopen("busH.txt","r");
         char content[1000];
         if (fptr !=NULL)
         {
             while (fgets(content,1000,fptr))
             {
                 printf("%s",content);
             }
         }

        }
         printf("\n\nDO YOU WANT BOOK TO SEATS OR EXIT\nBOOK-'1'\nEXIT-'0'\nENTER:");
         scanf("%d",&seat);

         if (seat==1)
          {
              if (day==1)
              {
                  weekbooking();
              }
              else
              {
                  weekendsbooking();
              }
          }
          else
         {
             printf("\n\nHAVE A NICE TRAVELLING DAY!!!!!!!!\n\n\n\n\n\n\n\n\n\n\n\n");
         }


}
void read()
{


        printf("\n\n\nENTER IF TODAY IS A WEEK DAY OR NOT\nYES-'1'\nNO -'0'\nENTER:");
        scanf("%d",&day);

        printf("\nENTER TRAVELLING MODE\n\nBUS MODE   - 'B'\nTRAIN MODE - 'T'\nENTER:");
        scanf(" %c",&mod);
       if (mod=='b' || mod=='B')
       {
         busMode();
       }
       else
       {
          trainMode();
       }



}


int main()
{
    for (i=0;i>=0;i++)
    {
printf(" TTTTTTTTTTTTT  RRRRRRRRRRR        AA     VV         VV  EEEEEEEEEEEEE  LL           LL          IIIIIIIIIIII  NN      NN   GGGGGGGGGGGG\n");
       printf("      TT        RR        R       A  A     VV       VV   EE             LL           LL               II       NNN     NN   GG\n");
       printf("      TT        RR        R      A    A     VV     VV    EE             LL           LL               II       NN N    NN   GG\n");
       printf("      TT        RRRRRRRRRRR     AAAAAAAA     VV   VV     EEEEEEE        LL           LL               II       NN  N   NN   GG   GGGGGGGGGGG\n");
       printf("      TT        RR   RRR       AA      AA     VV VV      EE             LL           LL               II       NN   N  NN   GG        GG  GG\n");
       printf("      TT        RR      RR    AA        AA     VVV       EE             LL           LL               II       NN    N NN   GG        GG  GG\n");
       printf("      TT        RR       RR  AA          AA     V        EEEEEEEEEEEE   LLLLLLLLLLL  LLLLLLLLLLL IIIIIIIIIIII  NN     NNN   GGGGGGGGGGGG  GG\n\n\n\n");

       printf("                                             AA        IIIIIIIIIIIII   DDDDDDDDDDDD\n");
       printf("                                            A  A            II         DD         DD\n");
       printf("                                           A    A           II         DD         DD\n");
       printf("                                          AAAAAAAA          II         DD         DD\n");
       printf("                                         AA      AA         II         DD         DD\n");
       printf("                                        AA        AA        II         DD         DD\n");
       printf("                                       AA          AA  IIIIIIIIIIIII   DDDDDDDDDDDD\n");


    read();

    }

    return 0;
}