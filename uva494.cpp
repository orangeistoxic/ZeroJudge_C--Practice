#include<bits/stdc++.h>

using namespace std;

int main()
{
    string sen;
    while (getline(cin, sen))
    {
        int words = 0;
        bool isalph = 0;
        for (int i = 0; i < sen.length(); i++)
        {
            if (isalpha(sen[i]) && !isalph)
            {
                isalph = 1;
                words++;
            }
            else if (!isalpha(sen[i]) && isalph)
            {
                isalph = 0;
            }
        }
        cout << words << "\n";
    }
        
}