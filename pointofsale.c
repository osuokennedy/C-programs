//point of sale
#include <stdio.h>
#include <stdbool.h>
void main(void)
{
  int code, qty;
  float price, amt, totalAmt, cash, change;
  char addAnother;
  //do while loop --> post test
  
do
{
 printf("====================\n");
 printf("KENDESK SERVIICES\n");
 printf("======================\n\n");
 printf("[1] Web designing\t\tccPhp 1500.00\n");
 printf("[2] Youtube channel vidios and audio\t\tPhp 100.00\n");
 printf("[3] Windows installation\t\t Php 600.00\n");
 printf("[4] Office activation\t\tPhp 200.00\n");
 printf("[5] Ubuntu installation\t\tPhp 600.00\n");
 printf("[6] Kali Linux installation\t\tPhp 600.00\n");
 printf("[7] Poster making\t\tPhp 50.00\n");
 printf("[8] Kra pin\t\tPhp 100.00\n");
 printf("[9] Filling Returns\t\tPhp 50.00\n");
 printf("[10] KUCCPS application\t\tPhp 100.00\n");
 printf("[11] Others are negotiatable");

 printf("\nEnter Code\t: ");
 scanf("%d", &code);
 printf("\nEnter Quanty\t");
 scanf("%d", &qty);

 switch(code)
   {
   case 1: price = 1500.00;
     break;
   case 2: price = 100.00;
     break;
   case 3: price = 600.00;
     break;
   case 4: price = 200.00;
     break;
   case 5: price = 600.00;
     break;
   case 6: price = 600.00;
     break;
   case 7: price = 50.00;
     break;
   case 8: price = 100.00;
     break;
   case 9: price = 50.00;
     break;
   case 10: price = 100.0;
     break;
   }
 amt = price * qty;
 printf("\nAmount\t: %.2f", amt);
 printf("\nAdd another order(y/n)? ");
 scanf("%c", &addAnother);
 totalAmt = totalAmt + amt;
 printf("\ntotalAmt\t: %.2f", totalAmt);
 addAnother = getchar();
}
 while(addAnother == 'y' || addAnother == 'Y');

 printf("\nCash Tendered\t: ");
 scanf("%f", &cash);

 change = cash - totalAmt;
 printf("\nChange\t: %.2f", change);
 }

