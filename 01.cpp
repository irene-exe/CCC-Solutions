#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int a; cin>>a;
        vector <int> div;
        for(int i=1; i<=a/2; i++){
            if(a%i==0){
                div.push_back(i);
            }
        }

        int add=0,sub=0;
        bool isNasty = false;
        while(add!=div.size()-1 and sub!=div.size()-1){
            if(a/div[add]+div[add]>a/div[sub]-div[sub]){
                add++;
            } else if (a/div[add]+div[add]<a/div[sub]-div[sub]) {
                sub++;
            } else {
                isNasty=true;
                break;
            }
        }
        if(isNasty) cout<<a<<" is nasty";
        else cout<<a<<" is not nasty";
    }
    
    return 0;
}