#include <iostream>
#include <string>
using namespace std;
int c[125],c2[125];
string s1,s2,str,sravn,pustaya;
int l1,l2,t;
char sym;
void fu(char ch, int kol){
	string str1,str2;
	int k=0;
	for(int i=0;i<l1;i++){
		if(c[s1[i]]==-1){
			str1.push_back(s1[i]);
			continue;
		}
		if(s1[i]!=ch){
			c[s1[i]]--;
		}
		else if(s1[i]==ch){ 
			k++;
			str1.push_back(ch);
		}
		if(k==kol) {
			for(int j=i+1;j<l1;j++){
				if(s1[j]!=ch){
					str1.push_back(s1[j]);
				}
			}
			s1=str1;
			break;
		}
	}
	k=0;
	for(int i=0;i<l2;i++){
		if(c2[s2[i]]==-1){
			str2.push_back(s2[i]);
			continue;
		}
		if(s2[i]!=ch){
			c2[s2[i]]--;
		}
		else if(s2[i]==ch){ 
			k++;
			str2.push_back(ch);
		}
		if(k==kol) {
			for(int j=i+1;j<l2;j++){
				if(s2[j]!=ch){
					str2.push_back(s2[j]);
				}
				c[sym]=-1;
				c2[sym]=-1;
			}
			s2=str2;
			break;
		}
	}
	l1=s1.length();
	l2=s2.length();
	str1=pustaya;
	str2=pustaya;
	return;
}
int main(){
	cin>>s1>>s2;
	l1=s1.length();
	l2=s2.length();
	for(int i=0;i<l1;i++){
		c[int(s1[i])]++;
	}
	for(int i=0;i<l2;i++){
		c2[int(s2[i])]++;
	}
	for(int i=122;i>=96;i--){
		sym=char(i);
		if(c[i]>0 && c2[i]>0){
			t=1;
			fu(sym,min(c[i],c2[i]));
		}
	}
	if(t==0){
		return 0;
	}
	else {
		l1=s1.length();
		l2=s2.length();
		for(int i=0;i<min(l1,l2);i++){
			if(s1[i]==s2[i]) 
				cout<<s1[i];
		}
	}
	return 0;
}
