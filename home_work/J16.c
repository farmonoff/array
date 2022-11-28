#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_nums(int arr[], int n ){
    for(int i = 0; i < n; i++){
        arr[i] = -5 + rand() % 16;
    }   
}

void output(int nums[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
    puts("");
} 

int sum_positives(int arr[], int n){
    int sum = arr[0];
    for(int i = 1; i < n; i++){
        if(sum >= 0 && arr[i] >= 0){
            sum += arr[i]; 
        } else {
            break;
        }
    } 
    return sum;
}

int main() {
    srand(time(0));

    int n;

        printf("n = "); scanf("%d", &n); 
    int nums[n];
    int sum;

    fill_rand_nums(nums,n);
    output(nums,n);
    printf("%d", sum_positives(nums,n));

return 0;    
}