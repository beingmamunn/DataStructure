#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
string s[100010];
map <string,int> mp;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (mp.find(s[i]) == mp.end())
        {
            printf("OK\n");
            mp[s[i]] = 1;
        }
        else
        {
            cout << s[i] << mp[s[i]] << endl;
            mp[s[i]]++;
        }
    }

    return 0;
}
