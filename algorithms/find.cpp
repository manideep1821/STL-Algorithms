#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    std::vector<int>Vector(n);
    for(auto & it :Vector)
       cin>>it;
    cin>>k;
    auto it =std::find(Vector.begin(),Vector.end(),k);
    if(it==Vector.end())
        cout<<"NOT FOUND"<<endl;
    else
        cout<<"FOUND "<<endl;
    return 0;
}