#include <stdio.h>

//查找算法是指在数组中查找特定元素的算法，常见的有以下几种：

//二分查找,前提是数组必须是有序的.核心是min和max两个指针

//若数组均匀分布，可以改进二分查找，使用插值查找，核心是根据目标元素与数组首尾元素的关系来计算mid的位置
//插值查找，mid = min + (max - min)*(target - arr[min]) / (arr[max]-arr[min])

//分块查找，核心是将数组分成若干块，块内无序，块间有序，先通过块间有序的特性找到目标元素所在的块，再在块内进行查找

//哈希查找，优化了分块查找
//核心是使用哈希函数将目标元素映射到一个哈希地址中，缩小范围，直接在哈希地址中查找目标元素

//排序算法是指将数组中的元素按照一定的顺序进行排列的算法，常见的有以下几种：

//冒泡排序，核心是通过不断交换相邻元素,来将较大的元素逐渐“冒泡”到数组的末尾

//选择排序，核心是每次从未排序的部分中选择最小的元素，并将其放到已排序部分的末尾

//冒泡排序的实现
void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - 1 - i; j++){
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}
//选择排序的实现
void selectionSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[i]) {
                // 交换 arr[i] 和 arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}

//二分查找的实现
int binarySearch(int arr[], int len, int target) {
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = (min + max) / 2;
        if (arr[mid] == target) {
            return mid; // 找到目标元素，返回索引
        } else if (arr[mid] < target) {
            min = mid + 1; // 目标元素在右半部分
        } else {
            max = mid - 1; // 目标元素在左半部分
        }

    }
    return -1; // 没有找到目标元素，返回-1
}


int main(){
    int arr[10] = {5,3,2,4,6,7,1,8,10,9};
    int len = sizeof(arr) / sizeof(int);
    bubbleSort(arr, len);
    printf("排序后的数组:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target;
    printf("请输入要查找的元素: ");
    scanf("%d",&target);
    int result = binarySearch(arr, len, target);
    if (result != -1) {
        printf("元素 %d 在数组中的索引是 %d\n", target, result);
    } else {
        printf("元素 %d 不在数组中\n", target);
    }
    return 0;
}