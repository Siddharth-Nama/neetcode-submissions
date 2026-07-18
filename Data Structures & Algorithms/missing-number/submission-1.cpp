class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a1 = 0,a2 = nums[0];
        int t = 1;
        for(int i=1;i<n;i++){
            a1 = a1^t;
            t++;
            a2 = a2^nums[i];
        }
        a1 = a1^n;
        int temp = a1^a2;
        return temp;
    }
};
