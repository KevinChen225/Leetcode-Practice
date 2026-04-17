#include<iostream>
#include<vector>
int main(){
    
    std::vector<int> nums = {1,2,3,4};
    int n = nums.size();
    std::vector<int> left_product(n);
    std::vector<int> right_product(n);
    std::vector<int> ans(n);
        

    left_product[0] = 1;
    for (int i = 1; i < n; i++) {
        left_product[i] = left_product[i - 1] * nums[i - 1];
    }

    right_product[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right_product[i] = right_product[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
        ans[i] = left_product[i] * right_product[i];
    }

    for (int x : ans) {
        std::cout << x << std::endl;
    }
    return 0;
}