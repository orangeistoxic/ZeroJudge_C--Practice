// basicly copy this blog: https://luke2336.github.io/p/uva_106/

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

using ll = long long;

const int MAXN = 1000001;


// std :: _gcd is available in c++17
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> firstTimeUsed(MAXN,MAXN), numOfFirstTimeUsed(MAXN,0), primeXYZCount(MAXN,0), numOfNotUsed(MAXN,0);

    //firstTimeUsed[i] : the first time i is used in  z==value
    //numOfFirstTimeUsed[i] = the number of numbers that are used for the first time in z==i

    numOfNotUsed[1] = 1;

    for(int m=2; m*m<MAXN; m++)
    {
        for(int n = (m & 1) + 1; n<m; n+=2) //if m is odd, n start with 2, if m is even, n start with 1
        {
            if(gcd(m,n) != 1) { continue;}

            int x = m*m - n*n;
            int y = 2*m*n;
            int z = m*m + n*n;

            if(z >= MAXN) { break;}

            if(gcd(gcd(x,y),z) == 1) // if x,y,z are coprime
            {
                primeXYZCount[z]++;

                for(int k=1; k*z<=MAXN; k++)
                {
                    int xx = k*x;
                    int yy = k*y;
                    int zz = k*z;

                    firstTimeUsed[xx]  = min(firstTimeUsed[xx], zz);
                    firstTimeUsed[yy]  = min(firstTimeUsed[yy], zz);
                    firstTimeUsed[zz]  = zz; 
                }
            }
        }
    }

    for(int i=1; i<=MAXN; i++)
    {
        primeXYZCount[i] += primeXYZCount[i-1]; //prefix sum
        numOfFirstTimeUsed[firstTimeUsed[i]]++;
    }   

    for(int i=2; i<=MAXN; i++)
    {
        numOfNotUsed[i] = numOfNotUsed[i-1] + 1 - numOfFirstTimeUsed[i];
    }

    int N;

    while(cin>>N)
    {
       
        cout<<primeXYZCount[N]<<" "<<numOfNotUsed[N]<<endl;
    }

    return 0;
}