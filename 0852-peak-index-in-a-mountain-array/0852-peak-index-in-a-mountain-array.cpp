class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // for(int i=1;i<arr.size()-1;i++){
        //     if(arr[i-1]<arr[i] && arr[i]> arr[i+1]){
        //         return i;
        //     }
        // }
        // return -1;
        int n=arr.size();
        int st=1,end=n-2;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
};