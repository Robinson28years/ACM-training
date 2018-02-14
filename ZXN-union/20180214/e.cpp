#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
            int m;
    cin>>m;
    int a[5];
    int b[100]={0};
    int c[5]={0};
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        // cout<<b[i]<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=3;j>=0;j--){
            c[j]=b[i]%100;
            b[i]=b[i]/100;
            // cout<<c[j]<<endl;
        }
        bool flag2 = false;
        for(int z=10000;z<999999;z++){
            bool flag = true;
            for(int y=0;y<4;y++){
                if((z%a[y]!=c[y])){
                    flag=false;
                    break;
                }
            }
            if(flag){
                flag2 = true;
                // cout<<z<<endl;
                int p[5];
                for(int j=2;j>=0;j--){
                    p[j]=z%100;
                    z=z/100;
                }
                for(int j=0;j<=2;j++){
                    if( p[j]==27){
                        if(i==(m-1) && j==2){
                        }else{
                            if(i==(m-1) && j==1 && p[2]==27){

                            }else{
                                 cout<<" ";
                            }
                        }
                    }else{
                        char f = 'A'+ p[j]-1;
                        cout<<f;
                    }
                }
                break;
            }
        }
    }
    cout<<endl;
    }

    return 0;
}