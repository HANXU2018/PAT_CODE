#include<iostream>
#include<vector>
using namespace std;
struct node{
	int address=0,data=0,next=-1,last=-1;
};
int search(int address,vector<node>Node,int N){
	int i=-1;
	for(int a=0;a<N;a++){
		if(address==Node[a].next)return a;
	}
	
	return i;
}
int main(){
	int Address=0;
	int N=0;
	int K=0;
	cin >>Address>>N>>K;
	vector<node> Node(N);
	for(int i=0;i<N;i++){
		int address=0,data=0,next=-1,last=-1;
		cin>>Node[i].address>>Node[i].data>>Node[i].next;
}	
for(int i=0;i<N;i++){
	int last=-1;
	last=search(Node[i].address,Node,N);
	Node[i].last=last;
	
}
cout<<"½á¹û"<<endl;
for(int i=0;i<N;i++){
	cout<<Node[i].address<<" "<<Node[i].data<<" "<<Node[i].next<<" LAST: "<<Node[Node[i].last].address<<endl;
}

	return 0;
	 
}
