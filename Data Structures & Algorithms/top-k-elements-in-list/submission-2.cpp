class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        vector<vector<int>> CountEle(nums.size() + 1);
        vector<int> ans;
        for(auto i:nums){
            mpp[i]++;
        }
        
        for(auto i:mpp){
            CountEle[i.second].push_back(i.first);
        }

        for(int i=nums.size(); k>0; i--){
            if(!CountEle[i].empty()){
                ans.insert(ans.end(), CountEle[i].begin(), CountEle[i].end());
                k-=CountEle[i].size();
            }
        }
        
        return ans;
    }
};
