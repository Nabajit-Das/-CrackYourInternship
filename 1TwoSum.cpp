class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            if(m.find(t)==m.end()){
                m[nums[i]]=i;
            }
            else{
                ans.push_back(i);
                ans.push_back(m[t]);
                break;
            }
        }

        return ans;
    }
};