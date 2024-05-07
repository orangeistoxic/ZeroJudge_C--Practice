#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    while(cin>>input)
    {
        if(input==0)
        {
            break;
        }
        int i=0;
        string bi="";
        int counter=0;
        while(input!=0)
        {
            if(input%2!=0)
            {
                counter++;
                bi.insert(0,"1");
            }
            else
            {
                bi.insert(0,"0");
            }
            
            input=input/2;
            i++;
        }
        cout << "The parity of " << bi << " is " << counter << " (mod 2).\n";
    }
}