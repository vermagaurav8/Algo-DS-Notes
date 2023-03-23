class Solution {
public:					
    int majorityElement(vector<int>& nums) {	// Moore Voting Algorithm
            
    int counter = 0, majority;
        for (int num : nums) {
            if (!counter) {
                majority = num;
            }
            counter += num == majority ? 1 : -1;
        }
        return majority;
    }
};
