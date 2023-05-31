#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;int po=0;int ng=0;int zo=0;int r=0;
    float r1=0;float r2=0;float r3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
         po++;
        else if(a[i]<0)
            ng++;
        else
            zo++;
    }
    cout <<showpoint;
    //cout<<fixed;
    cout<<setprecision(6);

    r1=(float)po/n;
    r2=(float)ng/n;
    r3=(float)zo/n;

    cout<<r1<<endl<<r2<<endl<<r3;




    return 0;
}
