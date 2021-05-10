#include<stdio.h>

#include<stdlib.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int choice,player;
int checkforwin();
void displayboard();
void markboard(char mark);
int main()
{
   int i;
   char mark;

  player=1;
   do{
       displayboard();
       player=(player%2)?1:2;
       printf("Player %d enter a number",player);
       scanf("%d",&choice);
       mark=(player==1)?'X':'O';
       markboard(mark);
       i=checkforwin();
       player++;
   }
   while(i==-1);
   if(i==1)
   {
       printf("You win\n");
   }
   else
   {
       printf("Draw\n");
   }
   
    return 0;
}
   int checkforwin()
{
    int returnvalue=0;
    if(square[1]==square[2]&&square[2]==square[3])
    returnvalue=1;
    else if (square[4]==square[5]&&square[5]==square[6])
    returnvalue=1;
    else if (square[7]==square[8]&&square[8]==square[9])
    returnvalue=1;
    else if (square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
    returnvalue=0;
    
     else
    {
        returnvalue=-1;
    }
    return returnvalue;
    }   
    void displayboard()
    {
        printf("\n  Zero kata  \n");
        printf(" Player 1(X) and Player 2(O) \n");
       ;
        printf(" _%c_ | _%c_ | _%c_ \n",square[1],square[2],square[3]);
        
        
        printf(" _%c_ | _%c_ | _%c_  \n",square[4],square[5],square[6]);
        
        
        printf(" _%c_ | _%c_ | _%c_  \n",square[7],square[8],square[9]);
    }
    
    void markboard(char mark)
    {
        if(choice==1&&square[1]=='1')
        square[1]=mark;
        else if (choice==2&&square[2]=='2')
        square[2]=mark;
        else if(choice==3&&square[3]=='3')
        square[3]=mark;
        else if(choice==4&&square[4]=='4')
        square[4]=mark;
        else if(choice==5&&square[5]=='5')
        square[5]=mark;
        else if(choice==6&&square[6]=='6')
        square[6]=mark;
         else if(choice==7&&square[7]=='7')
        square[7]=mark;
         else if(choice==8&&square[8]=='8')
        square[8]=mark;
         else if(choice==9&&square[9]=='9')
        square[9]=mark;
        else
        {
            printf("Invalid move\n");
            player--;
        }
        
        
    }
    
