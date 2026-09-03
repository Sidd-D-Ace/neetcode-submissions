class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int tempCount = 0;
        int count = 0;
        int i=0; 
        int j=0;
        if(s.size()==1) return 1;
        while(j<s.size() && i<=j){
            if(mpp.find(s[j])==mpp.end()){
                mpp[s[j]]=j;
            }else{
                i=mpp[s[j]]+1 > i ? mpp[s[j]]+1 : i;
                mpp[s[j]]=j;
            }
            tempCount = (j-i)+1;
            count = max(tempCount, count);
            j++;
        }
        return count;
    }
};
