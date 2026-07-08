class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
vector<int> prefix(n),suffix(n),ans;
int temp = 1;
   prefix[0] = temp;
for(int i=1;i<n;i++){
 
    prefix[i] = nums[i-1]*temp;
    temp = prefix[i];
    cout<<"prefix["<<i<<"] --> "<<prefix[i]<<endl;
}
temp = 1;
suffix[n-1]=temp;

for(int i=n-2;i>=0;i--){
    suffix[i] = nums[i+1]*temp;
    temp = suffix[i];
    cout<<"suffix["<<i<<"] --> "<<suffix[i]<<endl;
}


for(int i=0;i<n;i++){
    ans.push_back(prefix[i]*suffix[i]);
}
return ans;
    }
};
