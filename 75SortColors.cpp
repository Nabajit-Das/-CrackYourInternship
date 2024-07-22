class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(auto ele:nums) m[ele]++;

        int i=0;
        for(auto ele:m){
            int t=ele.second;
            while(t--){
                nums[i++]=ele.first;
            }
        }
        return;
    }
};