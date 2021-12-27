/**
 *    author: abhijayrajvansh  created: 12.11.2021 12:44:24
**/
#include <bits/stdc++.h>
using namespace std;

void findTriplets(vector<int> arr, int n)
{
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<endl;
                }
            }
        }
    }
 
}
int main()
{
    vector<int> arr(5);
    int n = 5;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    findTriplets(arr, n);
    return 0;
}