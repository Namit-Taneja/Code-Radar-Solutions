// Your code here...
void fibonacciSeries(int n){
    if(n==1){
        printf("0");
    }
    int a=0;
    int b=1;
    printf("%d %d",a,b);
    for(int i=2;i<n;i++){
        int c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}