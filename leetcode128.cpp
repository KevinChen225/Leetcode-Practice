#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    //O(nlogn) approach
    std::vector<int> nums = {100,4,200,1,3,2};
    if(nums.size() == 0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int count = 1;
    int longest = 1;

    for(int i = 1;i < nums.size();++i){

        if(nums[i-1] == nums[i]){  //[1, 2, 2, 3]處理重複
            continue;
        }else if(nums[i] == nums[i - 1] + 1){
            count++;
        }else{
            count = 1; 
        }

        longest = std::max(longest, count);
    }
    
    std::cout << longest;

    return 0;
}