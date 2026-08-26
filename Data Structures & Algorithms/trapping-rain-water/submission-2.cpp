class Solution {
public:
    int trap(vector<int>& arr) {
        vector<int> Lmax(arr.size(),0);
        vector<int> Rmax(arr.size(),0);
        Lmax[0] = arr[0];
        Rmax[arr.size()-1] = arr[arr.size()-1];

        for(int i=1; i<arr.size(); i++){
            Lmax[i] = max(Lmax[i-1], arr[i]);
        }

        for(int i=arr.size()-2; i>=0; i--){
            Rmax[i] = max(Rmax[i+1], arr[i]);
        }
        int storage = 0;
        for(int i=0; i<arr.size(); i++){
            storage += min(Lmax[i], Rmax[i])-arr[i];
        }
        return storage;
    }
};
