#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int arr[], int n ){
    for(int i = 0; i < n; i++){
        arr[i] = -5 + rand() % 36;
    }
}

void output(int nums[], int n){
    for(int i = 0; i < n; i++){
        printf("%2d ", nums[i]);
    }
    puts("");
}

void select_sort(int nums[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] > nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    srand(time(0));

    int n;
    printf("n =  "); scanf("%d", &n);
    int nums[n];

    fill_random_nums(nums, n);
    output(nums, n);
    select_sort(nums,n);
    output(nums,n);
    
return 0;    
}