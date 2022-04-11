class Solution {
public:
    void sortColors(vector<int>& a) {
    // coode here 
//         int n=a.size();
//     int low=0,mid=0,high=n-1;
//     while(mid<=high) {
//         if(a[mid]==0) {
//             swap(a[low],a[mid]);
//             low++;
//             mid++;
//         }
//         else if(a[mid]==1) {
//             //swap(a[mid],a[i]);
//             mid++;
//         }
//         else {
//             swap(a[high],a[mid]);
//             high--;
            
//         }
//     }
        int begin=0,mid=0,end=a.size()-1;
        while(mid<=end) {
            if(a[mid]==0) {
                swap(a[begin],a[mid]);
                begin++;
                mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else if(a[mid]==2){
                swap(a[end],a[mid]);
                end--;
            }
        }
        
        
        
//         int begin=0,end=a.size()-1,mid=0;
//         while(begin<=end&&mid<=end) {
//             if(a[mid]==0) {
//                 swap(a[begin],a[mid]);
//                 begin++;
//                 mid++;
//             }
//             else if(a[mid]==1) mid++;
//             else {
//                 swap(a[mid],a[end]);
//                 end--;
//             }
//         }
    }
};