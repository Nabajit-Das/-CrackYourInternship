class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>bits(n+1,0);
        bits[0]=0;
        if(n==0) return bits;
        for(int i=1;i<=n;i++){
            bits[i]=bits[i/2]+i%2;
        }
        return bits;
    }
};