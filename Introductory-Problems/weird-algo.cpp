#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <climits>
#define ll long long
using namespace std;

void solve(ll n)
{
    cout << n << " ";
    while (n != 1)
    {
        if (n & 1)
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
        else
        {
            n /= 2;
            cout << n << " ";
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    solve(n);
}
