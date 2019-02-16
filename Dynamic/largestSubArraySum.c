
int* main() {
    int i,tmax=0,max=0;
    *result_count = 2;
    int arr[1000];
    printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
    int* res = malloc(sizeof(int)*pow(10,4));
    int summ =0,maximum=-99;
    for(i=0;i<arr_count;i++)
    {
        tmax += *(arr + i);
        if(tmax<0)tmax=0;
        if(max<tmax)max=tmax;

        if(*(arr +i)>0)summ += *(arr + i);
        if(maximum<*(arr+i))maximum = *(arr+i);

    }
    *res = max;
    
    if(max<=0){*(res) = maximum;}
    if(maximum<=0){*(res+1) = maximum;}
    else {*(res+1) = summ;}
    //printf("%d %d",*res, *(res+1));
    return res;



}
