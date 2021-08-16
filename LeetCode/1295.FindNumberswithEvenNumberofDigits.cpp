class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int a : nums){
            string temp = to_string(a);
            count += (temp.size() % 2 == 0);
        }
        return count;
    }
};