#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <string>

using namespace std;

int n,m,c;

void rec(int one, string l){
    if (l.size()==m){
        cout<<l<<"\n";
    } else if (l.size()+one==m and one>0){
        rec(one-1, l+'1');
    } else if (one==0){
        rec(one, l+'0');
    } else {
        rec(one-1, l+'1');
        rec(one, l+'0');
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>m>>c;
        rec(c,"");
    }

    return 0;
}

