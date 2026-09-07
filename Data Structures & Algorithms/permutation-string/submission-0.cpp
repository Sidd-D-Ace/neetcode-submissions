class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int r=s1.size()-1;
        bool find = 0;
        unordered_map<char,int> mpp;
        for(char i:s1){
            mpp[i]++;
        }
        while(r<s2.size()){
            unordered_map<char,int> temp;
            for(int i=l; i<=r; i++){
                temp[s2[i]]++;
            }
            for(auto i:temp){
                auto p = mpp.find(i.first);
                if(p==mpp.end() || p->second!=i.second){
                    l++;
                    r++;
                    find=0;
                    break;
                }else{
                    find = 1;
                }
            }
            if(find){
                return true;
            }
        }
        return false;
    }
};
