class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        unordered_map<int,int> mpp;
        int temp=0;
        for(int i = 0; i<nums.size(); i++){
            temp = target-nums[i];
            auto j = mpp.find(temp);
            if(j!=mpp.end()){
                if(i<j->second){
                    return {i,j->second};
                }else{
                    return {j->second, i};
                } 
            }else{
                mpp[nums[i]]=i;
            }
        }
        return {0,0};
    }
};
