void selsort(int *A,int n){
    int min,temp;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(A[min]>A[j]){
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    return;
}