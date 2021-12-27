/**
 *    author:   abhijayrajvansh
 *    created:  30.10.2021 10:51:35
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

// Logic
int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

// Recursive Approach:
int binarySearch(int arr[], int low, int high, int x){

    int mid = (low + high) / 2; // here in low + high brackets are imp

    if(low > high){
        return -1;
    }

    if(arr[mid] == x){
        return  mid;
    }
    if(arr[mid] > x){
        return binarySearch(arr, low, mid - 1, x);
    }
    else{
        return binarySearch(arr, mid + 1, high, x);
    }
}


int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x; cin >> x;
    int low = 0, high = 9; // high should (n - 1)
    int ans = binarySearch(arr, 0, 10, x);
    cout << ans;
    return 0;
}