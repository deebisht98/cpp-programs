#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Reverse array (recusive)

// void reverse(int arr[], int sz, int i) {
//     if (i >= (sz / 2)) return;
//     swap(arr[i], arr[sz - i - 1]);
//     reverse(arr, sz, i + 1);
// }

// Check palindrome (recursive)


// bool isPalindrome(string str, int index) {
//     if (index >= str.size() / 2) return true;
//     if (str[index] != str[str.size() - index - 1]) return false;
//     return isPalindrome(str, index + 1);
// }


// fibonacci

// int fib(int n) {
//     if (n <= 1) return n;
//     int flast = fib(n - 1);
//     int slast = fib(n - 2);
//     return flast + slast;
// }

// subsequence - a contigous/ non-contigous string formed by deleting some of the positions(can be none) from the given string that follows the order.

// void printSubsequence(int arr[], int sz, int index, vector<int> & ans) {
//     if (index == sz) {
//         for (auto it : ans) {
//             cout << it << " ";
//         }
//         if (ans.size() == 0) {
//             cout << "{}";
//         }
//         cout << endl;
//         return;
//     }

//     ans.push_back(arr[index]);
//     printSubsequence(arr, sz, index + 1, ans);

//     ans.pop_back();
//     printSubsequence(arr, sz, index + 1, ans);
// }


// Print all subsequences with sum k

// void printSubsequence(int arr[], int n, vector<int> &ans, int index, int sum, int k)
// {
//     if (index == n) {
//         if (sum == k) {
//             for (int it : ans) {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     // Take
//     sum += arr[index];
//     ans.push_back(arr[index]);
//     printSubsequence(arr, n, ans, index + 1, sum, k);

//     // Not Take
//     sum -= arr[index];
//     ans.pop_back();
//     printSubsequence(arr, n, ans, index + 1, sum, k);
// }


// Print only one subsequence with sum k

// bool printSubsequence(int arr[], int n, vector<int> &ans, int index, int sum, int k)
// {
//     if (index == n) {
//         if (sum == k) {
//             for (int it : ans) {
//                 cout << it << " ";
//             }
//             return true;
//         }
//         else return false;
//     }

//     // Take
//     sum += arr[index];
//     ans.push_back(arr[index]);
//     if (printSubsequence(arr, n, ans, index + 1, sum, k)) return true;

//     // Not Take
//     sum -= arr[index];
//     ans.pop_back();
//     if (printSubsequence(arr, n, ans, index + 1, sum, k)) return true;

//     return false;
// }



// count the subsequences with sum k

// int printSubsequence(int arr[], int n, int index, int sum, int k)
// {
//     if(sum > k) return 0;
//     if (index == n) {
//         if (sum == k) return 1;
//         else return 0;
//     }

//     // Take
//     sum += arr[index];
//     int lsum = printSubsequence(arr, n, index + 1, sum, k);

//     // Not Take
//     sum -= arr[index];
//     int rsum = printSubsequence(arr, n, index + 1, sum, k);

//     return lsum + rsum;
// }


// find all combinations with target (can use elements multiple times)
// Combination Sum 1

// void combination(int index, vector<vector<int>> &ans, vector<int> &ds, vector<int> &candidates, int target)
// {
//     if (index == candidates.size()) {
//         if (target == 0) {
//             ans.push_back(ds);
//         }
//         return;
//     }

//     if (candidates[index] <= target) {
//         ds.push_back(candidates[index]);
//         combination(index, ans, ds, candidates, target - candidates[index]);
//         ds.pop_back();
//     }

//     combination(index + 1, ans, ds, candidates, target);
// }

// vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     combination(0, ans, ds, candidates, target);
//     return ans;
// }



// Combination Sum 2

// void combination(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {
//     if (target == 0) {
//         ans.push_back(ds);
//         return;
//     }

//     for (int i = index; i < arr.size(); i++) {
//         if (i > index  && arr[i] == arr[i - 1]) continue;
//         if (arr[i] > target) break;
//         ds.push_back(arr[i]);
//         combination(i + 1, target - arr[i], arr, ans, ds);
//         ds.pop_back();
//     }
// }

// vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//     sort(candidates.begin(), candidates.end());
//     vector<vector<int>> ans;
//     vector<int> ds;
//     combination(0, target, candidates, ans, ds);
//     return ans;
// }


int main()
{
    int n = 4, index = 0;
    int arr[n] = {1, 2, 1, 1};
    int k = 3;
    int sum = 0;
    cout << printSubsequence(arr, n, index, sum, k);
    return 0;
}
