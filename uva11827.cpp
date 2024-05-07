#include<bits/stdc++.h>


// KEYPOINT : GCD ,stringstream;
using namespace std;

int gcd(int a, int b)
{
    if (a != 0 && b != 0)
    {
        while ((a %= b) && (b %= a));
    }
    return a + b;
}

int main(){
    int N;
    cin>>N;
    string a;
    getline(cin,a);

    while(N--){
        string ipt;
        getline(cin,ipt);
        stringstream ss(ipt);
        
        vector<int>  nums;
        int iptnum;
        while(ss>>iptnum){
            nums.push_back(iptnum);
        }

        int maxGCD=1;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                maxGCD=max(maxGCD,gcd(nums[i],nums[j]));
            }
        }

        cout<<maxGCD<<endl;
        
    }
}
