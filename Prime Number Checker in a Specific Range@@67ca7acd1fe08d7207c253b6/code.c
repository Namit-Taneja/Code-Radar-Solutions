// Your code here...
void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                count+=1;
            }
            else{
                continue;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
        else{
            continue;
        }
    }
}