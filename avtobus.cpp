#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    
    if(n<=2 || n%2==1){
        cout<<-1<<endl;
        return;
    }
    
    long long maxi = -1;
    
    if(n%6==0){
        maxi = n/6;
    }
    else if(n%6==4){
        maxi = n/6 + 1;
    }
    else if(n%6==2){
        long long p = n-8;
        
        maxi = p/6 + 2;
    }
    
    long long mini = -1;
    
    if(n%4==0){
        mini = n/4;
    }
    else if(n%4==2){
        long long p = n-6;
        mini = p/4 + 1;
    }
    
    cout<<maxi<<" "<<mini<<endl;
}
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}

// g++-15 avtobus.cpp -o avtobus -std=c++17 && ./avtobus