#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class values{
    public :
        int x,y;
        values(int x=0,int y=0):x{x},y{y}{}
        bool operator < (const values& p1){
               return (x+y)<(p1.x+p1.y);
        }

};
int main()
{
    std::vector<values>v1 {{1,3},{4,5},{2,7},{1,4}};
    sort(v1.begin(),v1.end());
    for(auto & it : v1)
       cout<<it.x<<" "<<it.y<<endl;
    return 0;
}
