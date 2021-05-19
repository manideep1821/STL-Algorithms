#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n);
    for(auto & it : v1)
        cin>>it;
    partial_sort(v1.begin(),v1.begin()+2,v1.end());
    for(auto & it : v1)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}