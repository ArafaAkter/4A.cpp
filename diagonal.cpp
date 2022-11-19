#include <iostream>
using namespace std;
int main()
{
    int n,arry[100][100],sum1=0,sum2=0,diff;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arry[i][j];
        }
    }
    for(int i=0;i<n;i++)

    {
         for(int j=0;j<n;j++)
         {
             if(i==j)
             {
                 sum1 =sum1+arry[i][j];


             }
         }
    }
    for(int i=0;i<n;i++)

    {
         for(int j=0;j<n;j++)
         {
             if(i+j==n-1)
             {
                 sum2=sum2+arry[i][j];

             }
         }
    }
    diff=abs(sum1-sum2);
    cout<<diff;
    return 0;
}
