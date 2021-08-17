class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            int curr = 0;
            for(int j = 0; j < arr[i].size(); j++){
                curr += arr[i][j];
            }
            ans = max(curr, ans);
        }
        return ans;
    }
};