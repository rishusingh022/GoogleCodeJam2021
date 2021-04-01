#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    int arr[t];
    for(int c=0; c<t; c++){
        long long ans=0;
        int Cost_CJ,Cost_JC;
        cin>>Cost_CJ>>Cost_JC;
        string s;
        cin>>s;
        if(s.size()==1){
            arr[c]=0;
            continue;
        }
        char ch;
        char prev=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                continue;
            }
            ch=s[i];
            if(prev=='C' && ch=='J'){
                ans+=Cost_CJ;
            }
            else if(prev=='J' && ch=='C'){
                ans+=Cost_JC;
            }
            prev=ch;
        }
        arr[c]=ans;
    }
    for(int i=0;i<t;i++){
        cout << "Case #" << i+1 << ": "<<arr[i]<<endl;
    }
    return 0;
}