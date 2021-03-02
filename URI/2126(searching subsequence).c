#include<stdio.h>
int main()
{
    char n1[100],n2[100];
    int a=0,i,j,sum=0,pos=0,m=0;
    while(scanf("%s %s",n2,n1)!=EOF)
    {
        fflush(stdin);
    sum=0;
    m++;
    for(i=0;n1[i]!='\0';i++)
    {
        a=0;
        for(j=0;j<strlen(n2);j++)
        {
            if(n1[i+j]==n2[j])
            {
                a++;

                if(a==strlen(n2))
                {
                    sum++;
                    pos=i+1;
                }
            }
        }
    }
    printf("Caso #%d:\n",m);
    if(pos!=0)
    {
    printf("Qtd.Subsequencias: %d\n",sum);
    printf("Pos: %d\n\n",pos);
    }
    else
        printf("Nao existe subsequencia\n\n");
    }
}
