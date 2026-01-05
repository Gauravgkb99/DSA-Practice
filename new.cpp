#include <bits/stdc++.h>

using namespace std;

int main() {
    std::srand(std::time(nullptr)); 
    
    set<int> st;
    
    int size = 87;
    
    vector<int> arr;
    
    while(size){
        int y = rand() % 10000;
        size--;
        arr.push_back(y);
    }
    
    cout<<87<<endl;
    for(int i: arr) cout<<i<<" ";
    cout<<endl;
    
    cout<<rand() % 10000<<endl;

    return 0;
}

// g++-15 new.cpp -o new -std=c++17 && ./new
 