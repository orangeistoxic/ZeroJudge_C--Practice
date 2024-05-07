#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);  //key!!!!!
    cin.tie(0);

    int N;
    cin>>N;
    string a;
    getline(cin,a);
    while(N--){
        string ID;
        getline(cin,ID);

        int tot=0;
        for(int i=0;i<=18;i++){

            if (i == 0 || i == 2 || i == 5 || i == 7 || i == 10 || i == 12 || i == 15 || i == 17 ){
                tot+=(((ID[i]-48)*2)%10+((ID[i]-48)*2)/10);
                //cout<<tot<<endl;
            }
            else if(ID[i]!=' '){
                tot+=(ID[i]-48);
                //cout<<tot<<endl;
            }
        }
        
        if(tot%10==0){
            cout << "Valid\n";
        }
        else{
            cout << "Invalid\n";
        }
    }
}