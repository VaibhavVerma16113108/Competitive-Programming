class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26] = {0};
        for(char ch: text){
            arr[ch - 'a']++;
        }
        int ans = INT_MAX;
        arr[11] /=2; arr[14] /= 2;
        vector<int> letters = {0,1,11,13,14};
        for(int i: letters){
            ans = min(ans, arr[i]);
        }
        return ans;
    }
};
