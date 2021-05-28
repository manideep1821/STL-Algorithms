#include<algorithm>
#include<iostream>
#include<functional>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,2,1};
    auto it=is_sorted_until(vec.begin(),vec.end());
    auto diff=distance(vec.begin(),it);
    cout<<diff<<endl;
    return 0;
}