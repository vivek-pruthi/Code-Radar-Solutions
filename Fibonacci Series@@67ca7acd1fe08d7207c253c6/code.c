int fibonacciSeries(int n){
    int a=0, b=1;
    int c;
    if(n==1){
        printf("0");
    }
    else{
    printf("0 ");
    printf("1 ");
    for(int i=2 ;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        
        printf("%d ",c);
    }
    }
}