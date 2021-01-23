//Question: https://www.geeksforgeeks.org/in-place-merge-sort/


void merge_sort(int *arr, int l, int r){
    if(l>=r)return;
    int m = l + (r - l)/2;
    merge_sort(arr, l, m);
    merge_sort(arr, m+1, r);
    merge(arr, l, m, r);
}

void merge(int *arr, int l, int m, int r){
    int i = l;
    int j = m+1;
    if(arr[m]<=arr[j])return;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j])i++;
        else{
            int value = arr[j];
            int index = j;
            while(index!=i){
                arr[index] = arr[index-1];
                index--;
            }
            arr[index] = value;
            m++;
            i++;
            j++;
        }
    }

}