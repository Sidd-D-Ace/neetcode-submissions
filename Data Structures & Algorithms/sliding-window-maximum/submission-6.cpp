class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<pair<int,int>> dq;
        vector<int> ans;
        for(int i=0; i<k; i++){
            while(dq.size()>0 && nums[i]>dq.back().first){
                dq.pop_back();
            }
            dq.push_back({nums[i],i});
        }

        for(int i=k; i<nums.size(); i++){
            ans.push_back(dq.front().first);
            while(dq.size()>0 && dq.front().second<=i-k){
                dq.pop_front();
            }
            while(dq.size()>0 && nums[i]>dq.back().first){
                dq.pop_back();
            }
            dq.push_back({nums[i],i});
        }
        ans.push_back(dq.front().first);
        return ans;
    }
};
