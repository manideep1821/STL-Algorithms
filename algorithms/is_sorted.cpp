#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec = {1,2,3,4,5,6};
    auto it= is_sorted(vec.begin(),vec.end());
    if(it==true){
        cout<<"sorted";
    }
    else cout<<"not sorted";
    return 0;
}