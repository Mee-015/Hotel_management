#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int total;
int bfrate[3][2]={{1,40},
                    {2,30},
                    {3,60}};

                        
int lurate[5][2]={{1,100},
                    {2,50},
                    {3,10},{4,100},{5,40}};

  

int dirate[5][2]={{1,100},
                    {2,50},
                    {3,10},{4,15},{5,40}};
                    int purchased[][2]={{0,0},
                        {0,0},
                        {0,0},
                        };


void display();

void bfm(char bfmenu[][10]);
void lum(char lumenu[][50]);
void dim(char dimenu[][50]);
void ans();
void repbfm();
void replum();
void repdim();
void game();
void bfbill(int b1,int b1q,char bfmenu[][10]);
void lubill(int l1,int l1q,char lumenu[][50]);
void dibill(int d1,int d1q,char dimenu[][50]);

void main()
{
     char name[20];
     long int ph;
    printf("WELCOME TO OUR HOTEL!!!\n");
   
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your phone number\n");
    scanf("%ld",&ph);
    char bfmenu[][10]={"dosa","Idli","pancake"};
    char dimenu[][50]={"Panner Mutter","Veg Kurma","Roti","Naan","Fried Rice"};
    char lumenu[][50]={"Panner Chilly","Dal Tadka","Roti","Panner Fried Rice","Salad"};
    char ch,cb;
    int b1,b1q,l1,l1q,d1,d1q;
    display();
   
}

void display()
{
    char ch;
    char bfmenu[][10]={"dosa","Idli","pancake"};
    char dimenu[][50]={"Panner Mutter","Veg Kurma","Roti","Naan","Fried Rice"};
    char lumenu[][50]={"Panner Chilly","Dal Tadka","Roti","Panner Fried Rice","Salad"};
    
     printf("Enter  \n a for breakfast \n b for lunch\n c for dinner\n");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':printf("Breakfast menu\n");
                 bfm(bfmenu);
         
        case 'b':
        case 'B':printf("Lunch menu\n");
                 lum(lumenu);
                         
        case 'c':
        case 'C':printf("Dinner menu\n");
                 dim(dimenu);
                          
    }
}

 void bfm(char bfmenu[][10] )
 {
      int b1,b1q;
      char cb;
     printf("0.Dosa   \t   Rs.40\n");
     printf("1.Idli   \t   Rs30\n");
     printf("2.Pancake \t  Rs.60\n");
     printf("Enter your choice\n");
     scanf("%d",&b1);
     printf("Enter the quantity\n");
     scanf("%d",&b1q);
      purchased[b1][1]= b1q*bfrate[b1][1]; /*purchased[code][1]+ (quantity*bfrate[code][1]);*/
        total=total+purchased[b1][1];
        printf("Total = %d\n",total);
       
        repbfm();
        
 }

 void lum(char lumenu[][50] )
 {
      int l1,l1q;
      char c1;
     printf("0.Panner Mutter \t Rs.100\n");
     printf("1.Dal Tadka \t\t Rs50\n");
     printf("2.Roti \t\t\t Rs.10\n");
     printf("3.Panner Fried Rice \t  Rs.100\n");
     printf("4.Salad \t\t  Rs40\n");
     printf("Enter your choice\n");
     scanf("%d",&l1);
     printf("Enter the quantity\n");
     scanf("%d",&l1q);
      purchased[l1][1]= l1q*lurate[l1][1]; /*purchase[code][1]+ (quantity*lurate[code][1]);*/
        total=total+purchased[l1][1];
        printf("Total = %d\n",total);
       
    replum();
        
 }
 
 void dim(char dimenu[][50] )
 {
      int d1,d1q;
      char cd;
     printf("0.Panner Chilly \t Rs.100\n");
     printf("1.Veg Korma \t\t Rs50\n");
     printf("2.Roti \t\t\t Rs.10\n");
     printf("3.Naan \t\t\t Rs.15\n");
     printf("4.Fried Rice \t\t Rs40\n");
     printf("Enter your choice\n");
     scanf("%d",&d1);
     printf("Enter the quantity\n");
     scanf("%d",&d1q);
      purchased[d1][1]= d1q*dirate[d1][1]; /*purchases[code][1]+ (quantity*dirate[code][1]);*/
        total=total+purchased[d1][1];
        printf("Total = %d\n",total);
       
    repdim();
        
 }
 
 
 
 void repbfm()
 {
    char cb;
    char bfmenu[][10]={"dosa","Idli","pancake"};
    int b1,b1q;
     printf("Do you need anythging else(y for yes  \n  n for no\n");
     scanf(" %c",&cb);
     if(cb=='y'||cb=='Y')
     bfm(bfmenu);
     else
     {
         game();
     bfbill(b1,b1q,bfmenu);
    
     }
     exit(0);
 }
 
 
 void replum()
 {
    char cl;
    char lumenu[][50]={"Panner Chilly","Dal Tadka","Roti"," Fried Rice","Salad"};
    int l1,l1q;
     printf("Do you need anythging else(y for yes  \n n for no\n");
     scanf(" %c",&cl);
     if(cl=='y'||cl=='Y')
     lum(lumenu);
     else
     {
         game();
     lubill(l1,l1q,lumenu);
    
     }
     exit(0);
 }
 
  
 void repdim()
 {
    char cd;
    
    int d1,d1q;
     char dimenu[][50]={"Panner Mutter","Veg Kurma","Roti","Naan","Fried Rice"};
     printf("Do you need anythging else(y for yes  \n  n for no\n");
     scanf(" %c",&cd); 
     if(cd=='y'||cd=='Y')
     dim(dimenu);
     else
     {
         game();
     dibill(d1,d1q,dimenu);
    
     }
     exit(0);
 }
 
 void bfbill(int b1,int bfq,char bfmenu[][10])
 {
      int i;
    
    
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<=2;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",bfmenu[i]);
            printf("%d\n",purchased[i][1]); /*purchased[i][1]);*/
        }
    }
    printf("Total= %d\n",total);
    printf("THANK YOU!!\n");
 }
 
 void lubill(int l1,int luq,char lumenu[][50])
 {
      int i;
    
    
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\tPrice(in Rs.)\n");
    
    for(i=0;i<=4;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",lumenu[i]);
            printf("%d\n",purchased[i][1]); /*purchase[i][1]);*/
        }
    }
    printf("Total= %d\n",total);
     printf("THANK YOU!!\n");
 }
 
 void dibill(int d1,int diq,char dimenu[][50])
 {
      int i;
    
    
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<=4;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",dimenu[i]);
            printf("%d\n",purchased[i][1]); /*purchases[i][1]);*/
        }
    }
    printf("Total= %d\n",total);
     printf("THANK YOU!!\n");
 }
 
 void game()
 {
     int ans1,ans2,ans3;
     char g;
     printf("your order is being processed\n Meanwhile,here is a quiz to avail offers.give it a try!\n");
     printf("Enter 1 for false and 2 for true\n");
     printf("Vada pav and pav bhaji are famous in Mumbai.\n");
     scanf("%d",&ans1);
     if(ans1==2)
     printf("Thats right!!\n");
     else 
     printf("Oops!!That's a wrong one\n");
     printf("Coconut oil is largely used in North India.\n");
     scanf("%d",&ans2);
     if(ans2==1)
     printf("Thats right!!\n");
     else 
     printf("Oops!!That's a wrong one\n");
     printf("Here is a bonus question.\n Coffee is originated from \n 1.Italy \n 2.Ethiopia\n");
     scanf("%d",&ans3);
     if(ans3==2)
     printf("Thats right!! \n Congratulations!!You have won a coupon of 15 percent discount on your next order!!\n");
     else
     printf("OOps!!Thats wrong. \n Better luck next time!!\n");
     printf("press b for bill\n"); 
     scanf(" %c",&g);
 }
 
 