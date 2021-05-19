#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>Vector(n);
    for(auto & it : Vector)
        cin>>it;
    sort(Vector.begin(),Vector.end(),[](int a,int b){return a<b;});
    for(auto & it : Vector)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}