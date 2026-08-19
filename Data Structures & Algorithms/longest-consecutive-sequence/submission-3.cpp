class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCount = 0;
        unordered_set<int> s;
        int num=0;
        for(auto i:nums){
            s.insert(i);
        }
        for(auto i:nums){
            int tempCount = 0;
            if(s.find(i-1)!=s.end()){
                continue;
            }else{
                tempCount++;
                int num=i+1;
                while(s.find(num)!=s.end()){
                    tempCount++;
                    num+=1;
                }
            }
            s.insert(i);
            maxCount=max(maxCount, tempCount);
        }

        return maxCount;
    }
};
