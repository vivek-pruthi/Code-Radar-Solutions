int fibonacciSeries(int n){
    int a=0, b=1;
    int c;
    printf("0 1 ");
    for(int i=2 ;i<n;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }
}