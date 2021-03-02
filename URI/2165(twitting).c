#include<stdio.h>
#include<string.h>
int main()
{
   char a[500];
   int i;
   gets(a);
   i=strlen(a);
   if(i<=140)
    printf("TWEET\n");
   else
    printf("MUTE\n");
}
