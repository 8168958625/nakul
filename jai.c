#include<stdio.h>
#include<math.h>
int main()
{
            float a[10][10],t,sum=0,x[10],c;
            int n,i,j,g,h,k;
            printf("enter the number");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("input value for equation %d:",i+1);
                for(j=0;j<n;j++)
                {
                    if(j==n)
                    printf("constant term : ");
                    else
                    printf("cofficient of x%d:",j+1);
                    scanf("%f",&a[i][j]);
                }
            }
            printf("\n augments matrix made from the above equation "\n\n);
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                printf("%.2f",a[i][j]);
                printf("\n");
            }
            for(j=0;j<n;j++)
            {
                if(a[j][j]==0)
                {
                    for(g=g+1;g<n;g++)
                    {
                        if(a[g][g]!=0)
                        {
                            for(h=0;h<n+1;h++)
                            {
                                t=a[g][h];
                                a[g][h]=a[j][h];
                                a[j][h]=t;
                            }
                            break;
                        }
                    }
                }
                for(i=0;i<n;i++)
                {
                    if(i>j)
                    {
                        c=a[i][j]/a[j][j];
                        for(k=0;k<=n;k++)
                        a[i][k]=a[i][k]-c*a[j][k];
                    }
                }
            }
            x[n-1]=a[n-1][n]/a[n-1][n-1];
            for(i=n-2;i>=0;i--)
            {
                sum=0;
                for(j=i+1;j<n;j++)
                sum=sum+a[i][j]*x[j];
                x[i]=(a[i][n]-sum)/a[i][i];
            }
            for(i=0;i<n;i++)
            return 0;
}
