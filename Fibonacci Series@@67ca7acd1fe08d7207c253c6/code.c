int fibonacciSeries(int n){
    int a=0, b=1;
    int c;
    printf("0 1 ");
    for(int i=2 ;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        
        printf("%d ",c);
    }
}