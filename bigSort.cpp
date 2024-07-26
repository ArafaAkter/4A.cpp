#include<bits/stdc++.h>
#include<string>
using namespace std;

bool cmp(string l,string r){
    if(l.size() == r.size())
        return l<r;
    else
        return l.size() <r.size();

}

int main(){

    int n;
    cin>>n;
    vector<string>a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),cmp);

    for(int j=0; j<n; j++){
        cout<<a[j]<<endl;
    }

    return 0;

}
