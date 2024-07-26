#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int grades[n];
    for(int i=0; i<n; i++)
    {
        cin>>grades[i];

    }
    for(int i=0; i<n; i++){
            if(grades[i] >= 38){
                if(grades[i]%5 == 3){
                    grades[i] = grades[i]+2;
                }
                if(grades[i]%5 == 4){
                    grades[i] = grades[i]+1;
                }
            }
    }
    for(int i=0; i<n; i++){
        cout<<grades[i]<<endl;
    }





    return 0;
}





