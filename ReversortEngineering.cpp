#include<bits/stdc++.h>
using namespace std;
int reversort(vector<int> arr){
    int cost=0;
    for(int i=0;i<int(arr.size())-1;i++){
        int j=min_element(arr.begin()+i,arr.end())-arr.begin();
        reverse(arr.begin()+i,arr.begin()+j+1);
        cost+=j-i+1;
    }
    return cost;
}
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}
int main(){
    int t; 

   
    cin >> t;
    for(int c=0; c<t; c++){
       bool ans = false;
        long long n,cost;
        cin>>n>>cost;
        vector<int>temp(n),temp2(n);
        
        for(int i=0;i<n;i++){
            temp[i]=i+1;
        }
        do{
          
            int a=reversort(temp);
            if(a==cost){
              ans  = true;
              temp2 = temp;
                break;
            }
        }while(next_permutation(temp.begin(),temp.end()));
        cout << "Case #" << c+1 << ": ";
        if(!ans)
        cout<<"IMPOSSIBLE";
        else
        {
        for(int i=0;i<temp2.size();i++){
            cout<<temp2[i]<<" ";
        }
        }
        cout<<endl;

    }
    return 0;
}