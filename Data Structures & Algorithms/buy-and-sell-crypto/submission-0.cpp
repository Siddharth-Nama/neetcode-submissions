class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans = 0;
       int prefix[prices.size()];
       prefix[0]=prices[0];
       for(int i=1;i<prices.size();i++){
        int temp = prices[i]-prefix[i-1];
        cout<<"temp : "<<temp<<endl;
            if(temp > 0){
                ans = max(ans,temp);
            }
            
            prefix[i] = min(prices[i],prefix[i-1]);
            cout<<"for i << "<<prices[i]<<" << "<<prefix[i]<<" and ans "<<ans<<endl;
       }
       for(int i=0;i<prices.size();i++){
        cout<<"Prefix : "<<prefix[i]<<endl;
       }
       return ans;
    }
};
