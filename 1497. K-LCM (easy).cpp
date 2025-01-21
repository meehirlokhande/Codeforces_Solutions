#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n)
{
    vector<int> result;
    if (n % 2 == 0)
    {
        // n is even
        if (n % 4 == 0)
        {
            result.push_back(n / 2);
            result.push_back(n / 4);
            result.push_back(n / 4);
        }
        else
        {
            result.push_back(2);
            result.push_back((n - 2) / 2);
            result.push_back((n - 2) / 2);
        }
    }
    else
    {
        // n is odd
        result.push_back((n - 1) / 2);
        result.push_back((n - 1) / 2);
        result.push_back(1);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k; 
        vector<int> arr = solve(n);

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        
        cout << endl; 
    }
    return 0;
}
