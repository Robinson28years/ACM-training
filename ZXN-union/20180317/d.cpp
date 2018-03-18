#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string ttt;
    // cin>>n;
    scanf("%d", &n);
    // cin>>ttt;
    while(n--){
    stack<string> b;
    stack<string> f;
    string temp;
    b.push("http://www.acm.org/");
    string m,u;
    while(cin>>m){
        if(m=="VISIT"){
            cin>>u;
            cout<<u<<endl;
            if(temp!="")b.push(temp);
            temp = u;
            while(!f.empty()) f.pop();
        }else if(m=="BACK"){
            if(b.empty())cout<<"Ignored"<<endl;
            else{
                f.push(temp);
                temp = b.top();
                b.pop();
                cout<<temp<<endl;
            }
        }else if(m=="FORWARD"){
            if(f.empty())cout<<"Ignored"<<endl;
            else{
                b.push(temp);
                temp = f.top();
                f.pop();
                cout<<temp<<endl;
            }
        }else if(m=="QUIT"){
            break;
        }
    }
    if(n!=0){
        cout<<endl;
    }
    }
    return 0;
}