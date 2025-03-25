#include<bits/stdc++.h>
using namespace std;

bool a[1001][1001];

int main()
{
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	cin.ignore();
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(a[i][j]) cout<<j<<' ';
		}
		cout<<endl;
	}
}