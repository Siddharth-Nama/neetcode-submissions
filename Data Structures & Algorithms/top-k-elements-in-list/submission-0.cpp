class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto temp:freq){
            cout<<"freq["<<temp.first<<"] -- "<<temp.second<<endl;
        }
        vector<vector<int>> a(n+1);
        
           for (auto temp : freq) {
    a[temp.second].push_back(temp.first);
        }

        for(int i=0;i<=n;i++){
            for(int j=0;j<a[i].size();j++)
            cout<<"a["<<i<<"]["<<j<<"] -> "<<a[i][j]<<endl;
        }
         vector<int> ans;
         int count =1;
        for(int i = n;i>=0;i--){
            if(a[i].size() != 0){
                for(int j=0;j<a[i].size();j++){
                    if(count<=k) {
                        ans.push_back(a[i][j]);
                        count++;
                    }
                }
            } 
        }
        return ans;
    }
};
