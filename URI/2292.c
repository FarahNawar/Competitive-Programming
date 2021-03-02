#include<stdio.h>
int main()
{
    char str[10];
    int i=0,c;
    scanf("%s %d",str,&c);
     for(i=0;i<strlen(str);i++)
    {
     if(str[i]=='O')
     {
         str[i]='X';
         if(str[i+1]=='O')
         {
             str[i+1]='X';
             //printf("\nstr[%d]='%c'\n",i+1,str[i+1]);
         }
          else
          {
              str[i+1]='O';
          }

     }
     else
     {
         str[i]='O';
         break;
     }
    }
    puts(str);
    }

}
