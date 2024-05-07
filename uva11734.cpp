#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N,cases=1;
    cin>>N;

    string a;
    getline(cin,a);

    while(N--){
        string ipt,jud;
        getline(cin,ipt);
        getline(cin,jud);

        if(ipt==jud){
            cout<<"Case "<<cases<<": Yes\n";
        }
        else{
            string nipt="";
            int j=0;
            for(int i=0;i<ipt.length();i++){
                if(ipt[i]!=' '){
                    nipt+=ipt[i];
                    j++;
                }
            }

            if(nipt==jud){
                cout<<"Case "<<cases<<": Output Format Error\n";
            }
            else{
                cout<<"Case "<<cases<<": Wrong Answer\n";
            }
        }

        cases++;
    }
}