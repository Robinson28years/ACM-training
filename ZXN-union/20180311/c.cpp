#include <bits/stdc++.h>
using namespace std;

int k=0;
int c=0;
int w=0;

void f(int a,int j){
    if(j==c){
        if (a==w){
            k++;
        }
    }else{
    f(a+1,j+1);
    f(a-1,j+1);
    }

}

int main()
{
    int j=0;
    string a,b;
    cin>>a>>b;
    int sum1=0;
    int sum2=0;
    int len1 = a.length();
    int len2 = b.length();
    for(int i=0;i<len1;i++){
        if(a[i]=='+'){
            sum1+=1;
        }else{
            sum1-=1;
        }
    }
    for(int i=0;i<len2;i++){
        if(b[i]=='+'){
            sum2+=1;
        }else if(b[i]=='-'){
            sum2-=1;
        }else{
            j++;
        }
    }
    c=j;
    w=sum1-sum2;
    // cout<<c<<" "<<w<<endl;
    f(0,0);
    int g=(int)pow(2,c);
    printf("%.9lf",(double)k/g);
    // cout<<(double)k/g<<endl;
    return 0;
}

