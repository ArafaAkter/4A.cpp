#include<iostream>
using namespace std;
int main()
{
    int a[5];int sum=0,sum1=0,sum2=0,temp=0;

        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(a[i]>a[j])
                {

                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }

            }
        }

        for(int i=0;i<5;i++)
        {
            cout<<a[i];
        }

        for(int i=0;i<4;i++)
        {
            sum1 = sum1+a[i];
        }

        for(int i=1;i<5;i++)
        {
            sum2= sum2+a[i];

        }

        cout<<endl<<sum1<<" "<<sum2;

    return 0;
}
