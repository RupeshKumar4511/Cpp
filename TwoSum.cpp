#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int n, int target) {
    vector<int> s;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j]) == target) {
                s.push_back(i);
                s.push_back(j);
                return s; 
            }
        }
    }
    return s;
}

int main() {
    int arr[] = {3, 2, 4};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]); 

    vector<int> result = twoSum(arr, n, target);
    
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
