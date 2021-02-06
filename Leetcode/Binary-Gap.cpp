class Solution {
public:
    int binaryGap(int n) {
        int ans = 0, curr = 0, i = 0;
        while(n){
            if(n & 1){
                curr = i;
                break;
            }
            i++;
            n = (n >> 1);
        }
        while(n){
            if(n & 1){
                ans = max(ans, i-curr);
                curr = i;
            }
            n = (n >> 1);
            i++;
        }
        return ans;
    }
};
