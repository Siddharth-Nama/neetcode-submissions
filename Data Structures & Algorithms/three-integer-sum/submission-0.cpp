class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]--;
            for (int j = i + 1; j < n; j++) {
                freq[nums[j]]--;
                int target = -(nums[i] + nums[j]);
                if (freq[target] > 0) {
                    vector<int> temp = {nums[i], nums[j], target};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                freq[nums[j]]++;
            }
            freq[nums[i]]++;
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};