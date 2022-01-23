vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]) > abs(nums[j])){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
            nums[i] = nums[i]*nums[i];
        }
        return nums;
    }
