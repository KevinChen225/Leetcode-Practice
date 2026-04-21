#include<iostream>
#include<vector>
int main(){
    std::vector<int> nums = {1,2,3,4,5,6};
    //nums = {-1,0,3,5,9,12}
    int target = 5;
    int left = 0;
    int right = nums.size() - 1;

    while(right >= left){
        int middle = (left + right) / 2;
        if(nums[middle] < target){
            //std::cout << nums[middle];
            left = middle + 1;
            middle = (left + right)/2;
            
        }else if(nums[middle] > target){

            right = middle - 1;
            middle = (right + left)/2;

        }else if(nums[middle] == target){

            std::cout << middle;
            return 0;
            
        }

    }
    std::cout << "-1";
    //std::cout << left << " " << right;
    return 0;
}