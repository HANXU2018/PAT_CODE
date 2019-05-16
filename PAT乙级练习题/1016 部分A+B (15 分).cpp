#include<iostream>
using namespace std;
int main(){
    string a,c;
    int b,d;
    cin >> a>>b>>c>>d;
    int A=0,B=0;
    for(int i=0;i<a.size();i++){
        if(a[i]-'0'==b){
            A=A*10+b;
        }
    }
     for(int i=0;i<c.size();i++){
        if(c[i]-'0'==d){
            B=B*10+d;
        }
    }
    cout << A+B;
    return 0;
}
