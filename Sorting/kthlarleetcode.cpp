#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& nums, int si, int ei) {
    int count=0;
    int pivotelement=nums[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(nums[i]<=pivotelement) count++;
    }
    int pivotIndex=count + si;
    swap(nums[(si+ei)/2],nums[pivotIndex]);
    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(nums[i]<=pivotelement) i++;
        if(nums[j]>pivotelement) j--;
        else if(nums[i]>pivotelement && nums[j]<=pivotelement){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

int quickselect(vector<int>& nums, int si, int ei, int k) {
if (si <= ei) {
    int pi = partition(nums, si, ei);
    int n = nums.size();

    if (pi == (n - k))  // Found the kth largest element
        return nums[pi];
    else if (pi < (n - k))
        return quickselect(nums, pi + 1, ei, k);
    else
        return quickselect(nums, si, pi - 1, k);
}
return -1;
}

int findKthLargest(vector<int>& nums, int k) {
return quickselect(nums, 0, nums.size() - 1, k);  
}
int main(){
    vector<int>nums(8);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    int k=4;
    cout<<findKthLargest(nums,4);
}     