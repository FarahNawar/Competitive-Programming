#include<stdio.h>
int main()
{
    int a[100][100],n=10,ar=1,p=0,q,r,k,i,j;
        for(k=0; k<n; k++)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    a[p][j]=ar;
                }
                p=n-p;
                if(i==2)
                    break;
            }
            p=ar;
            ar++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%3d",a[i][j]);
                printf("\n");
        }
}
