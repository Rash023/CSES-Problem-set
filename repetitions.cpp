#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <climits>
#include <string>
#define ll long long
using namespace std;

int main()
{
    string st;
    cin >> st;
    int maxCnt = 0;
    char prevChar = st[0];
    int cnt = 1;
    for (int i = 1; i < st.length(); i++)
    {
        if (st[i] == prevChar)
        {
            cnt++;
        }
        else
        {
            prevChar = st[i];
            maxCnt = max(maxCnt, cnt);
            cnt = 1;
        }
    }
    maxCnt = max(cnt, maxCnt);
    cout << maxCnt;
}
