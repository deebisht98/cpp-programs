#include <iostream>
using namespace std;

// recursive method

int fib (int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

// Top-Down Approach (recursion + memoization) 
// TC -> O(N)
// SC -> O(N) + O(N) -> O(N)

int dp1[100];

int fib2 (int n){
    if(n == 0 || n == 1) return n;

    // step 3
    if(dp1[n] != -1) return dp1[n];

    // step 2
    dp1[n] = fib(n-1) + fib(n-2);
    return dp1[n];
}

// Bottom-Up approach (tabulation) 
// TC -> O(N-2) -> O(N)
// SC -> O(N)

int dp2[100];

int fib3 (int n){
    for(int i=2;i<=n;i++){
        dp2[i] = dp2[i-1] + dp2[i-2];
    }
    return dp2[n];
}

// space optimized using only 2 variables
// TC -> O(N)
// SC -> O(1)

int fib4 (int n){
    int prev1 = 1;
    int prev2 = 0;

    if(n == 0)  return prev2;

    for(int i=2;i<=n;i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    cout << fib(4) << endl;

    // step 1
    memset(dp1, -1, sizeof(dp1));
    cout << fib2(4) << endl;

    dp2[0] = 0;
    dp2[1] = 1;     
    cout << fib3(4) << endl;


    // applying space optimization
    cout << fib4(4) << endl;

    return 0;
}
