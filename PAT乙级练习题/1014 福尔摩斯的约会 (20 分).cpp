#include<iostream>
#include<cctype>
using namespace std;
int main(){
	string a,b,c,d;
	cin >> a>>b>>c>>d;
	char t[2];
	int pos,i=0,j=0;
	while(i<a.length()&&i<b.length()){
		if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G')){
			t[0]=a[i];
			break;
		}
		i++;
	}
	i++;
	while(i<a.length()&&i<b.length()){
		if(a[i]==b[i]&&((a[i]>='A'&&a[i]<='N')||isdigit(a[i]))){
			t[1]=a[i];
			break;
		}
		i++;
	}
	while(j<c.length()&&j<d.length()){
		if(c[j]==d[j]&&isalpha(c[j])){
			pos=j;
			break;
		}
		j++;
	}
	string DAY[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int m=isdigit(t[1])?t[1]-'0':t[1]-'A'+10;
	printf("%s %02d:%02d",DAY[t[0]-'A'].c_str(),m,pos);
	return 0;
}
