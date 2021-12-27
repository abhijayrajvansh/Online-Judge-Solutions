/**
 *    author: abhijayrajvansh  created: 02.11.2021 21:41:49
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

// Function to return the length of the longest
// sub string having frequency of a character
// greater than half of the length of the
// sub string
int maxLength(string s, int n)
{
	int ans = INT_MIN;
	vector<int> A, L, R;
	int freq[n + 5];

	// for each of the character 'a' to 'z'
	for (int i = 0; i < 26; i++) {
		int count = 0;
		memset(freq, 0, sizeof freq);

		// finding frequency prefix array of the
		// character
		for (int j = 0; j < n; j++) {
			if (s[j] - 'a' == i)
				count++;
			freq[j] = count;
		}

		// Finding the r[] and l[] arrays.
		for (int j = 0; j < n; j++) {
			L.push_back((2 * freq[j - 1]) - j);
			R.push_back((2 * freq[j]) - j);
		}

		int max_len = INT_MIN;
		int min_val = INT_MAX;

		// for each j from 0 to n
		for (int j = 0; j < n; j++) {
			min_val = min(min_val, L[j]);
			A.push_back(min_val);

			int l = 0, r = j;

			// Finding the lower bound of i.
			while (l <= r) {
				int mid = (l + r) >> 1;
				if (A[mid] <= R[j]) {
					max_len = max(max_len, j - mid + 1);
					r = mid - 1;
				}
				else {
					l = mid + 1;
				}
			}
		}

		// storing the maximum value of i - j + 1
		ans = max(ans, max_len);

		// clearing all the vector so that it clearing
		// be use for other character.
		A.clear();
		R.clear();
		L.clear();
	}

	return ans;
}

int main()
{
	string s = "ababbbacbcbcca";
	int n = s.length();
	cout << maxLength(s, n) << '\n';	
	return 0;
}