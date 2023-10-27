class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int unique = 0; //unique elements

        for(int i=0; i < nums.size(); i++) {

            if(i+1 < nums.size() && nums[i] == nums[i+1])
                continue;
            

            nums[unique++] = nums[i];
        }

        return unique;
    }

    // done by myself :: SPD
};