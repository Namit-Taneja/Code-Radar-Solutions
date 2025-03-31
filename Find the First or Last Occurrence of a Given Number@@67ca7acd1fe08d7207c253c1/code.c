// Your code here...
int findOccurrence(int arr[],int n,int target,char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
            else{
                continue;
            }
        }
    }
    else{
        int j=0;
        for(int i=n;i>0;i--){
            if(arr[i]==target){
                return j;
            }
            else{
            j+=1;
        }
        }
        
    }
}