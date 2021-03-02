#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum,s1,b,d,r;
    char a[30],str[30];
    while(2)
    {
        s1=1;
        sum=0;
         scanf("%s",a);
         if(a[0]=='-')
            break;
         if(a[0]=='0'&&a[1]=='x')
         {
             for(i=strlen(a)-1;i>=2;i--)
             {
                 if(a[i]=='A')
                     sum=sum+10*s1;
                 else if(a[i]=='B')
                     sum=sum+11*s1;
                   else if(a[i]=='C')
                       sum=sum+12*s1;
                   else if(a[i]=='D')
                       sum=sum+13*s1;
                   else if(a[i]=='E')
                       sum=sum+14*s1;
                   else if(a[i]=='F')
                       sum=sum+15*s1;
                   else
                   sum=sum+(a[i]-48)*s1;

                   s1=s1*16;

             }
             printf("%d\n",sum);
         }
         else
         {
             b=atoi(a);
             d=b;
             i=0;
             while(d!=0)
             {
                 r=d%16;
                 d=d/16;
                 if(r<=9)
                 {
                     str[i]='0'+r;
                     i++;
                 }
                 else
                 {
                     if(r==10)
                        str[i]='A';
                     if(r==11)
                        str[i]='B';
                     if(r==12)
                          str[i]='C';
                    if(r==13)
                        str[i]='D';
                     if(r==14)
                        str[i]='E';
                     if(r==15)
                        str[i]='F';
                    i++;
                 }
             }
             printf("0x");
           for(i=strlen(a)-1;i>=0;i--)
           printf("%c",str[i]);
           printf("\n");
         }
    }
}
