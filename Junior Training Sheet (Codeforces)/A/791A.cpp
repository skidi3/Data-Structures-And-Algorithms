#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,year=0;
	cin>>a>>b;
	while(a<=b){
		a*=3;
		b*=2;
		year++;
		}
	if(a>b){
		cout<<year;
		}
	}
