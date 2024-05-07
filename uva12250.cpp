#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=1;
    string ENG = "HELLO", SPA = "HOLA", GER = "HALLO", FRE = "BONJOUR", ITA = "CIAO", RUS = "ZDRAVSTVUJTE";

    string ipt;

    while(cin>>ipt)
    {
        if(ipt=="#")
        {
            break;
        }

        cout<<"Case "<<c<<": ";

        if(ipt==ENG)
        {
            cout<<"ENGLISH\n";
        }
        else if(ipt==SPA)
        {
            cout<<"SPANISH\n";
        }
        else if(ipt==GER)
        {
            cout<<"GERMAN\n";
        }
        else if(ipt==FRE)
        {
            cout<<"FRENCH\n";
        }
        else if(ipt==ITA)
        {
            cout<<"ITALIAN\n";
        }
        else if(ipt==RUS)
        {
            cout<<"RUSSIAN\n";
        }
        else
        {
            cout<<"UNKNOWN\n";
        }
        
        c++;
        
    }
}