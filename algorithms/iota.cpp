#include<iostream>
#include<algorithm>
#include<list>
#include<functional>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    list<int>lst(10);
    iota(lst.begin(),lst.end(),0);
    for(auto & it :lst){
        cout<<it<<endl;
    }
    vector<std::list<int>::iterator>vec(lst.size());
    iota(vec.begin(),vec.end(),lst.begin());
    for(auto & it : vec){
        cout<<*it<<endl;
    }

}