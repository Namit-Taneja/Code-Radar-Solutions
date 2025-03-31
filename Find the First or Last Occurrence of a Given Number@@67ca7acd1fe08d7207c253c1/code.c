// Your code here...
int findOccurance(int arr[],int n,int target,char mode){
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
        int j=1;
        for(int i=n;i>0;i--){
            if(arr[i]==target)
            printf("%d",j);
        }
        else{
            j+=1;
        }
    }
}