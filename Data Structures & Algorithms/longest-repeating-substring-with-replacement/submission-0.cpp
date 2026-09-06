class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mpp;
        int l=0;
        int r=0;
        int maxFreq = 0;
        int conversion = 0;
        int maxLen = 0;
        while(r<s.size() && l<=r){
            mpp[s[r]]++;
            maxFreq = max(maxFreq, mpp[s[r]]);
            conversion = ((r-l)+1) - maxFreq;
            if(conversion > k){
                mpp[s[l]]--;
                l++;
                maxFreq=0;
                for(auto i: mpp){
                    maxFreq = max(maxFreq, i.second);
                }
                
            }
            maxLen = max(maxLen, (r-l)+1);
            r++;
        }
        return maxLen;
    } 
};
