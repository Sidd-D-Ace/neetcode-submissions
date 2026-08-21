class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i <nums.size() - 2; i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[k-1]==nums[k]){
                        k--;
                    }
                    while(j<k && nums[j+1]==nums[j]){
                        j++;
                    }
                    k--;
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    j++;
                }
            }
            while(i + 1 < nums.size() && nums[i+1]==nums[i]){
                i++;
            }
        }
        return ans;
    }
};