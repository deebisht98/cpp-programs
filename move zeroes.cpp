void moveZeroes(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        while(p1 < nums.size()){
            if(nums[p1] != 0){
                int temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
                p2++;
            }
            p1++;
        }
    }
