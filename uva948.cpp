#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N,input;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string fibStr = "";
        cin>>input;
        int output=input;
        int f1=0,f2=1,f3=1;

        while(input>=f3)
        {
            f1=f2;
            int temp=f2;
            f2=f3;
            f3=temp+f3;
        }

        while(f1!=0)
        {
            f3=f2;
            int temp=f2;
            f2=f1;
            f1 = temp - f1;

            if(input>=f3)
            {
                fibStr+='1';
                input=input-f3;
            }
            else 
            {
                fibStr+='0';
            }
            
        }


        cout<<output<<" = "<<fibStr<<" (fib)\n";


    }
}