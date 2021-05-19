// is_sorted() checks wheather the given is sorted or not by returning 0 and 1.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>Vector(n);
    for(auto & it :Vector)
        cin>>it;
    sort(Vector.begin(),Vector.end(),greater<int>());
    cout<<is_sorted(Vector.begin(),Vector.end(),greater<int>());
    cout<<endl;
    return 0;
}

