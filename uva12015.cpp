#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cases,count=1;
    cin>>cases;

    while(count<=cases)
    {
        string web[10];
        int Vi[10],maxnum=0;
        for(int i=0;i<10;i++)
        {
            cin>>web[i]>>Vi[i];
            if(Vi[i]>maxnum)
            {
                maxnum=Vi[i];
            }
        }
        cout << "Case #"<<count<<":\n";
        for(int i=0;i<10;i++)
        {
            if(Vi[i]==maxnum)
            {
                cout<<web[i]<<endl;
            }
        }
        count++;
    }
}