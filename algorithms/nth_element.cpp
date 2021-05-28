#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(auto & it : vec){
        cin>>it;
    }
    nth_element(vec.begin(),vec.begin(),vec.end(),greater<int>());
    cout<<"the greatest value in the vector : "<<vec[0]<<endl;
    return 0;
}