int selectionSort(char arr[] , char n){
    for (int i = 0 ;i<n-1; i++ ){
        for (int j = 0 ; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
int printArray(char arr[], char n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}