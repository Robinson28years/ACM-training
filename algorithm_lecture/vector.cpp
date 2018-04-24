#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(1);
    vec.push_back(2);
    cout<<vec[1]<<endl;
    // vec.erase(vec[1]);
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<endl;
    // }
    for(it = vec.begin();it!=vec.end();)
    {
        // cout<<*it<<endl;
        if(*it==2){
            it = vec.erase(it);
            cout<<"test"<<*it<<endl;
        }else{
            it++;
        }
    }

}