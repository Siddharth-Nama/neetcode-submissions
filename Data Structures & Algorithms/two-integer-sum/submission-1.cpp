class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;
        for(int i =0;i<nums.size();i++){
            map[nums[i]] = i;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp = target-nums[i];
            if(map.find(temp)!= map.end() && i!= map[temp]) {
                ans.push_back(i);
                ans.push_back(map[temp]);
                return ans;
            }  
        }
        return ans;
    }
};
