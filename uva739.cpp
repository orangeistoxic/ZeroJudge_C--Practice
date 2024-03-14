#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<setw(34)<<left<<"         NAME"<<"SOUNDEX CODE\n";
    string name;
    string data1="BPFVCSKGJQXZDTLMNRAEIOUYWH";
    string data2="11112222222233455600000000";

    while(cin>>name)
    {
        string scode="A000";
        scode[0]=name[0];
        char pre='0';
        int sccount=1;
        for(int j=0;j<data1.length();j++)
        {
            if(data1[j]==name[0])
            {
                pre=data2[j];
                break;
            }
        }
        for(int i=1;i<name.length();i++)
        {
            if(sccount>3)
            {
                break;
            }
            for (int j = 0; j < data1.length(); j++)
            {
                if(data1[j]==name[i])
                {
                    if(data2[j]!=pre && data2[j]!='0')
                    {
                        scode[sccount]=data2[j];
                        sccount++;
                    }
                    pre=data2[j];
                    break;
                }
            }
        }
        cout <<"         "<<setw(25)<<left<<name<<scode<<endl;
    }
    cout << "                   END OF OUTPUT\n";
}