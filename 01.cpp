#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int a,b,c; cin>>a>>b>>c;
        string a1[a], b1[b], c1[c];

        getline(cin, a1[0]);
        for(int i=0; i<a; i++) getline(cin,a1[i]);
        for(int i=0; i<b; ++i) getline(cin,b1[i]);
        for(int i=0; i<c; ++i) getline(cin,c1[i]);

        for(int i=0; i<a; ++i){
            for(int j=0; j<b; ++j){
                for(int k=0; k<c; ++k){
                    cout<<a1[i]<<" "<<b1[j]<<" "<<c1[k]<<".\n";
                }
            }
        }
    }
    return 0;
}
