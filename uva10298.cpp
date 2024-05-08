    #include<bits/stdc++.h>

    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string ipt;

        while(cin>>ipt){

            if(ipt=="."){
                break;
            }

            int len=1;

            string R = "";

            while(1){
                bool thesame=1;
                R+=ipt[len-1];

                if(ipt.length()%len==0){

                    for(int i=0;i<ipt.length();i++){

                        if(ipt[i]!=R[i%len]){
                            thesame=0;
                            break;
                        }
                    }


                }
                else{
                    thesame=0;
                }

                if(thesame){
                    
                    cout<<ipt.length()/len<<endl;
                    break;
                }
                else{
                    len++;
                }
            }
            
            
        }
    }