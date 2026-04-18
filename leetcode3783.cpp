#include<iostream>
int main(){
    int n = 25;
    int ans = n;
    int i = 0;
    while(n > 0){
        i = i*10 + n%10;
        n/=10;
    }
    std::cout << abs(ans - i);
    return 0;
}