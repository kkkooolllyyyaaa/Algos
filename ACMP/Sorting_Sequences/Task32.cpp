#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
bool revsort(int x, int y){
	return x>y;
}
int main() {
	string s1,s2;
	cin>>s1;
	cin>>s2;
	long long int l2=s2.length(),l1=s1.length(),k=0,a=0,b=0;
	if(s1[0]!='-' && s2[0]!='-'){
		sort(s1.begin(),s1.end(),revsort);
		sort(s2.begin(),s2.end());
		for(int i=0;i<l1;i++){
			a=a+((s1[i]-'0')*long long int (pow(10,double(l1-i-1))));
		}
		if(s2[0]=='0') {
			for(int i=0;i<l2;i++){
				if(s2[i]!='0') { swap(s2[i],s2[0]); break; }
			}
		}
		for(int i=0;i<l2;i++){
			b=b+((s2[i]-'0')*long long int(pow(10,double(l2-i-1))));
		}
	}
	if(s1[0]=='-' && s2[0]!='-'){
		sort(s1.begin()+1,s1.end());
		sort(s2.begin(),s2.end());
		if(s2[0]=='0') {
			for(int i=0;i<l2;i++){
				if(s2[i]!='0') { swap(s2[i],s2[0]); break; }
			}
		}
		for(int i=0;i<l2;i++){
			b=b+((s2[i]-'0')*long long int(pow(10,double(l2-i-1))));
		}
		if(s1[1]=='0') {
			for(int i=2;i<l1;i++){
				if(s1[i]!='0') { swap(s1[i],s1[1]); break; }
			}
		}
		for(int i=1;i<l1;i++){
			a=a+((s1[i]-'0')*long long int(pow(10,double(l1-i-1))));
		}
		a=a*-1;
	}
	if(s1[0]!='-' && s2[0]=='-'){
		sort(s1.begin(),s1.end(),revsort);
		sort(s2.begin()+1,s2.end(),revsort);
		for(int i=0;i<l1;i++){
			a=a+((s1[i]-'0')*long long int (pow(10,double(l1-i-1))));
		}
		for(int i=1;i<l2;i++){
			b=b+((s2[i]-'0')*long long int(pow(10,double(l2-i-1))));
		}
		b=b*-1;

	}
	if(s1[0]=='-' && s2[0]=='-'){
	sort(s1.begin()+1,s1.end());
	sort(s2.begin()+1,s2.end(),revsort);
	if(s1[1]=='0') {
			for(int i=2;i<l1;i++){
				if(s1[i]!='0') { swap(s1[i],s1[1]); break; }
			}
		}
		for(int i=1;i<l1;i++){
			a=a+((s1[i]-'0')*long long int(pow(10,double(l1-i-1))));
		}

		for(int i=1;i<l2;i++){
			b=b+((s2[i]-'0')*long long int(pow(10,double(l2-i-1))));
		}
	a=a*-1; b=b*-1;
	}
	cout<<a-b<<endl;
	return 0;
}
