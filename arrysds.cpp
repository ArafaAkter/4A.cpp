/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
       cin>>arr[i];

    int sum=0;
    int temp=arr[N];
    int r;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    cout<<sum<<" ";

    }




    return 0;
}*/





#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+N);
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}

