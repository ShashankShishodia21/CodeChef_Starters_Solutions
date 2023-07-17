#include <stdio.h>

void quicksort(int arr[], int left, int right);
int partition(int arr[], int left, int right);

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, ans;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&arr[i]);
        } 
        quicksort(arr, 0, n-1);
        for(int i=n-2; i>=0; i--){
            if(arr[n-1] != arr[i]){
                ans = arr[n-1]+arr[i];
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int p = partition(arr, left, right);
        quicksort(arr, left, p - 1);
        quicksort(arr, p + 1, right);
    }
}

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}
