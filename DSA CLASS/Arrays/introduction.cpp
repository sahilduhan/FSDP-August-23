#include<bits/stdc++.h>
using namespace std;
int main(){


    // linear search

    int n;
    cin>>n;
    vector<int>Arr;
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    int target;
    cin>>target;


    // // iterate over the array

    // for(int i=0;i<n;i++){
    //     if(Arr[i] == target){
    //         cout<<"mil gya"<<endl;
    //     }
    // }

    // cout<<"nahi mila"<<endl;


    // binary search

    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + end / 2;
        if(Arr[mid] == target) cout<<"mil gya";
        if(target > Arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
    }


    // meger sorted arrays

    // vector<int>arr1 = {1,2,4,5};
    // vector<int>arr2 = {2,3,235,23246};


    // int first = 0;
    // int second = 0;

    // vector<int>ans;
    // while(first < arr1.size() and second < arr2.size()){
    //     if(arr1[first] <= arr2[second]){
    //         ans.push_back(arr1[first]);
    //         first++;
    //     }
    //     else {
    //         ans.push_back(arr2[second]);
    //     }
    // }

    // while(first < arr1.size()){
    //     ans.push_back(arr1[first]);
    //     first++;
    // }

    // while(second< arr2.size()){
    //     ans.push_back(arr2[second]);
    //     second++;
    // }

    // check if array is palindromic 

    // vector<int>Arr = {1,2,3,3,2,1};

    // int i = 0, j = Arr.size()-1;
    // bool flag = true;
    // while(i != j){
    //     if(Arr[i] != Arr[j]){
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag) cout<<"Palindrome";
    // else cout<<"Not a Palindrome";


    // unordered_map<int, int> mp;

    // vector<int>arr = {1,1,1,1,12,2,412,141313,35,135135,35513513};

    // for(int i=0;i<arr.size();i++){
    //     mp[arr[i]]++;
    // }

    // for(auto it : mp){
    //     cout<<it.second<<" ";
    //     cout<<endl;
    // }
    vector<int>arr = {12,3312,241,13};
    int sum = 24
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == sum) cout<<"mil gya"<<endl;
        }
    }

    return 0;
}

