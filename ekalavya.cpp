#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans=false;int i;
        for(i=2;i*i<n;i++){
            if(n%i==0){
                ans=true;
                break;
            }
        }
        if(ans)
        cout<<"1"<<" "<<i<<" "<<n/i<<endl;
        else
        cout<<"-1"<<endl;
      
    }
	return 0;
}
