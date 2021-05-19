// if you are using ubuntu run this file with g++-10 -std='c++2a' filename
#include<bits/stdc++.h>
#include<execution>
using namespace std;
int main()
{
    int n;
    cin>>n;
    std::vector<int>Vector(n);
    for(auto & it:Vector)
       cin>>it;
    std::sort(std::execution::par,begin(Vector), end(Vector)); 
    for(auto & it:Vector)
       cout<<it<<" ";
    cout<<endl;
    return 0;
}

