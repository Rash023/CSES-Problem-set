#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> ans;
    // inititalizing the array with n=1
    ans.push_back("0");
    ans.push_back("1");

    int i, j;

    // every iteration will generate 2*i new string from the previous strings
    for (i = 2; i < (1 << n); i = i << 1)
    {
        // adding the elements in the array in reverse order
        for (j = i - 1; j >= 0; j--)
        {
            ans.push_back(ans[j]);
        }

        // adding a 0 to the first half of the array
        for (j = 0; j < i; j++)
        {
            ans[j] = "0" + ans[j];
        }

        // adding 1 to the second half of the array
        for (j = i; j < 2 * i; j++)
        {
            ans[j] = "1" + ans[j];
        }
    }

    // printing the vector

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}