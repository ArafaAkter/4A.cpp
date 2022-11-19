#include<iostream>
using namespace std;
int main()
{
    int n,i,arry[100],ct=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arry[i];
    }
    int m=arry[0];

    for(i=1;i<n;i++)
    {
        if(m<arry[i])
            m=arry[i];
            if(arry[i]==m)
            ct++;

    }
    /*for(i=0;i<n;i++)
    {
        if(arry[i]==m)
            ct++;
    }*/

    cout<<ct;


    return 0;
}
