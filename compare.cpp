#include<iostream>
using namespace std;
int main()
{

    int a[3],b[3],n,i,alic=0, bob=0;

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            alic ++;
        else if(a[i]<b[i])
            bob++;
        else{
            alic = alic ;
            bob = bob;
        }
    }

    cout <<alic <<" "<<bob;

    return 0;
}
