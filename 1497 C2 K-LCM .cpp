#include <bits/stdc++.h>
using namespace std;
void solve(int n,int k,vector<int>& result){
    n = n - (k-3);

    if(n%2==1){
        result[k-3] = (n-1)/2;
        result[k-2] = (n-1)/2;
        result[k-1] = 1;
    }
    else if(n%4==0){
        result[k-3] = (n)/2;
        result[k-2] = n/4;
        result[k-1] = n/4;
    }
    else{
        result[k-3] = 2;
        result[k-2] = (n-2)/2;
        result[k-1] = (n-2)/2;
    }

    return;

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> result(k,1);
        solve(n,k,result);
        
        for(int i=0;i<result.size();i++){
            cout << result[i]<<" ";
        
        }
        cout << endl;
    }
    
}
