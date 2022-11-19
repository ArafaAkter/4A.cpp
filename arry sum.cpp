#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];long sum=0;

     for(i=0;i<n;i++)
     {
        cin >> a[i];
        sum = sum + a[i];

     }
     cout << "sum is:  "<< sum;


    return 0;
}
