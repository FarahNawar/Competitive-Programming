#include<stdio.h>
int main()
{
    char a[500];
    int n;
    gets(a);
  printf((strlen(a)>80)?("NO\n"):("YES\n"));
}
