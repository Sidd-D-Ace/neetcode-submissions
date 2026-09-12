class Solution {
   public:
    string minWindow(string s, string t) {
        int l = 0, r = 0;
        int cnt = 0;
        int minLen = INT_MAX;
        int strIdx = -1;
        unordered_map<char, int> mpp;
        for (char i : t) {
            mpp[i]++;
        }

        while (r < s.size()) {
            if (mpp.find(s[r]) != mpp.end()) {
                if (mpp[s[r]] > 0) {
                    cnt++;
                }
            }
            mpp[s[r]]--;
            while(cnt == t.size()) {
                if(r - l + 1<minLen){
                    minLen = r - l + 1;
                    strIdx = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return strIdx>=0 ? s.substr(strIdx, minLen) : "";
    }
};
