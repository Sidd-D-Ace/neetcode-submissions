class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);
        vector<int> ans(nums.size(),1);
        int j=1; 
        for(int i=0; i<nums.size(); i++){
            left[i]=j;
            j*=nums[i];
        }
        j=1;
        for(int i=nums.size()-1; i>=0; i--){
            right[i]=j;
            j*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};
