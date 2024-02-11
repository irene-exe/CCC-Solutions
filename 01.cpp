#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int a; cin>>a;
        bool isNasty = false;

        vector <int> sum;
        vector <int> diff;

        for (int i=0; i<(a/2); ++i){
            if (i!=0 and a%i==0){
                sum.push_back(i+(a/i));
                diff.push_back((a/i)-i);
            }
        }
        for(int i=0; i<sum.size(); ++i){
            for(int j=0; j<diff.size(); ++j){
                if(sum[i]==diff[j]){
                    isNasty=true;
                }
            }
        }

        if(isNasty) cout<<a<<" is nasty\n";
        else cout<<a<<" is not nasty\n";
    }
    return 0;
}