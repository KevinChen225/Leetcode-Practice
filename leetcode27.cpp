#include<iostream>
#include<vector>
int main(){
    std::vector<int> nums = {3,2,2,3};
    int val = 3;
    int fast = 0;
    int slow = 0;
    for(fast = 0; fast < nums.size(); ++fast){
        if(nums[fast] != val){
            nums[slow] = nums[fast];
            slow++;
        }
    }
    std::cout << slow <<std::endl;
    /*for(auto x : nums){
        std::cout << x <<std::endl;
    }*/
    return 0;
}