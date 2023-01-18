#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k;
    cin>>n>>q;
    vector<vector<int>> a(n);

    for(int i = 0; i<n; i++){
        cin>>k;
        a[i].resize(k);
        
        for(int l=0; l< k; l++){

            cin>>a[i][l];
            

        }
        
    }
    int c,d;

    for(int i = 0; i<q; i++){
        cin>>c>>d;

        cout<<a[c][d]<<endl;

    }
    return 0;
}