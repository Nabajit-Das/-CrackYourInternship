class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<long long int,long long int>m;
        for(auto ele:nums){
            m[ele]++;
            if(m[ele]>1) return ele;
        }

        return -1;

    }
};