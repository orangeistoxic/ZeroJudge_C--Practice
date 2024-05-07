#include <bits/stdc++.h>

// lcs Problem : https://yungshenglu.github.io/2018/05/15/LongestCommonSubsequence1/
// Video : https://youtu.be/NnD96abizww?si=svJd90glAblQuIDq

using namespace std;

int main()
{
    int T1,T2;
    int T1T[100],T2T[100];
    int Num=1;

    while(cin>>T1>>T2){
        if(T1==0 && T2==0)
        {
            break;
        }

        for(int i=0;i<T1;i++)
        {
            cin>>T1T[i];
        }
        for(int i=0;i<T2;i++)
        {
            cin>>T2T[i];
        }

        int lcs[T1][T2];
        int MaxT=0;

        for(int i=0;i<T1;i++)
        {
            for(int j=0;j<T2;j++)
            {
                if(T1T[i]==T2T[j])
                {
                    if(i==0 || j==0)
                    {
                        lcs[i][j]=1;
                    }
                    else 
                    {
                        lcs[i][j]=lcs[i-1][j-1]+1;
                    }
                }
                else 
                {
                    if(i==0 && j==0)
                    {
                        lcs[i][j]=0;
                    }
                    else if(i==0)
                    {
                        lcs[i][j]=lcs[i][j-1];
                    }
                    else if(j==0)
                    {
                        lcs[i][j]=lcs[i-1][j];
                    }
                    else 
                    {
                        lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                    }

                }
                MaxT=max(MaxT,lcs[i][j]);
            }
        }

        cout << "Twin Towers #"<<Num<<endl;
        Num++;
        cout << "Number of Tiles : "<<MaxT<<endl;
    }
}