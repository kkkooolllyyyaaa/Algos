#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    int k=0,l1,l2;
    l1=s1.length();
    l2=s2.length();
	while(s1!=s2){
	s1=s1[l1-1]+s1.substr(0,l1-1);
	k++;
	if(k==10001){ cout<<-1<<endl; return 0; }
	}
	cout<<k<<endl;
    return 0;
}

