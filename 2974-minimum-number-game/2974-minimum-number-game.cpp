class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

    sort(nums.begin(), nums.end());

    while (!nums.empty()) {
        int alice_move = nums.front();
        nums.erase(nums.begin());
        
        int bob_move = nums.front();
        nums.erase(nums.begin());

        arr.push_back(bob_move);
        arr.push_back(alice_move);
    }

    return arr;
        
    }
};