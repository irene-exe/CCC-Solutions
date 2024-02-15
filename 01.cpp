#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int rounds; cin>>rounds;

        int undef = rounds, one = 0, elim = 0, curr = 0;

        while (!(undef==1 && one==1) and !(elim==rounds-1)){
            cout<<"Round "<<curr<<":"<<undef<<" undefeated, "<<one<<" one-loss, "<<elim<<" eliminated\n";
            elim+=one/2;
            one=one-one/2+undef/2;
            undef=undef-(undef/2);
            curr++;
        }
        cout<<"Round "<<curr++<<": 1 undefeated, 1 one-loss, "<<elim<<" eliminated\n";
        cout<<"Round "<<curr++<<": 0 undefeated, 2 one-loss, "<<elim<<" eliminated\n";
        cout<<"Round "<<curr<<": 0 undefeated, 1 one-loss, "<<elim+1<<" eliminated\n";
        
        cout<<"There are "<<curr<<" rounds";
    }

    return 0;
}