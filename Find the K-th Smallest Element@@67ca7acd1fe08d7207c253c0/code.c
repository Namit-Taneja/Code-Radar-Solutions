// Your code here...
int bubblesort(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
int kthSmallest(int arr[],int n,int k){
    bubblesort(arr,n,k);
    if(k>n){
        return -1;
    }
    else{
        return arr[k-1];
    }
}