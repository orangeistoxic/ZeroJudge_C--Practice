#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,sq;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        sq=0;
        for(int i=1;i<=N;i++)
        {
            sq+=pow(i,2);
        }
        cout<<sq<<endl;
    }
}