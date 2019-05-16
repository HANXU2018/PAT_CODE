#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
    getline(cin,s);
    int i=s.size();
    for(;i>0;i--){
    	if(s[i]==' ') {
    		cout<<s.substr(i+1)<<' ';
			s=s.substr(0,i);
		}
	}
    cout<<s<<endl;
}
