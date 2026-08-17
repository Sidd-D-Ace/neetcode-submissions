class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<int> ans;
        int maxNum = INT_MIN;
        int maxEle=0;
        while(k>0){
            for(auto i:mpp){
                if(i.second > maxNum){
                    maxEle=i.first;
                    maxNum = i.second;
                }
            }
            ans.push_back(maxEle);
            mpp.erase(maxEle);
            // maxEle=0;
            maxNum=INT_MIN;
            k--;
        }
        return ans;
    }
};
