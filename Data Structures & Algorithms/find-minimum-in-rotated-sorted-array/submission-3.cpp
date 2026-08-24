class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size() ==0)return 0;
        else if(nums.size()==1) return nums[0];
        else if(nums.size()==2){
            int maxi = min(nums[0], nums[1]);
            return maxi;
        }
        int l = 0, r= nums.size()-1;
        int mid = (r+l)/2;

        while(l<r){
            if(nums[mid] > nums[r]){
                l = mid+1;
            }
            else {
              r = mid;   
            }

            mid = (r+l)/2;
        }
        return nums[l];
    }
};
