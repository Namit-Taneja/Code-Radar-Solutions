// Your code here...
int binarySearch(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(arr[mid]<target){
            left+=1;
        }
        else{
            right-=1;
        }
    }
    return -1;
}