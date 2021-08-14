#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string s1,s2,str,s3;
    cin>>s1>>s2;
    long long l1=s1.length(),l2=s2.length(),t,r=0;
    int k=0,m=0;
    if(l2>l1) { swap(s1,s2); swap(l1,l2); k++; }
    int i=0;
    if(l1==l2){ 
        for(int j=0;j<l1;j++) { if(s1[j]==s2[j]) r++; }
        while(true){
        if(s1[i]>s2[i]) break;
        if(s2[i]>s1[i]){ k++; swap(s1,s2); swap(l1,l2); break; }
        i++; 
        if(i==l1) { break; }
    }
    } // S1>S2
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int ost=0;
    t=l1-l2;
    int c=0;
    for(int i=0;i<t;i++) s2.push_back(c+'0');
    for(int i=0;i<l1;i++){
        if(s2[i]>s1[i]){
            int ost=10-(s2[i]-'0');
            s1[i+1]=s1[i+1]-1;
            str.push_back((ost+(s1[i]-'0'))%10+'0'); 
            }
        else{
            str.push_back(((s1[i]-'0')-(s2[i]-'0'))+'0');
        }
    }
    reverse(str.begin(),str.end());
    for(int i=0;i<l1;i++){ 
        if(str[i]-'0'==0) m++;
        if(str[i]-'0'!=0) break;
    }
    for(int i=m;i<l1;i++){
        s3.push_back(str[i]);
    }
    if(k>0) cout<<'-';
    if(r==l1) s3='0';
    cout<<s3<<endl;
    return 0;
}
