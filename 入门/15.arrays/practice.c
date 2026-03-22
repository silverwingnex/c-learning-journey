//生成n个1到100之间的随机数存入数组，并求和，求平均值，要求用函数实现，最后输出这个和，平均值，然后统计有多少个数大于平均值。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateARR(int arr[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }
    return 0;
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double averageArray(int arr[], int n) {
    int sum = sumArray(arr, n);
    return (double)sum / n;
}

int counter(int arr[], int n, double avg) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    return count;
}

//反转数组
int reverseARR(int arr[], int n){
    for (int i = 0; i < n/2; i++){
        int temp = arr[i];//交换,需要一个临时变量储存被覆盖的值
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    return 0;
}

int main() {
// 可以根据需要修改n的值,c语言没有动态数组，所以需要定义一个固定大小的数组
    int arr[10];//只能输入常量表达式
    int n = 10;
    generateARR(arr, n);
    int sum = sumArray(arr, n);
    double avg = averageArray(arr, n);
    int count = counter(arr, n, avg);

    printf("随机数数组为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("随机数的和为: %d\n", sum);
    printf("随机数的平均值为: %.2f\n", avg);
    printf("大于平均值的数的个数为: %d\n", count);

    printf("反转后的数组为: ");
    reverseARR(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //打乱数组元素
    int arr2[10];
    generateARR(arr2, n);
    printf("将要打乱的数组为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        int randomindex = rand() % n;//生成一个随机索引
        int temp = arr2[i];//交换
        arr2[i] = arr2[randomindex];
        arr2[randomindex] = temp;
    }
    printf("打乱后的数组为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);

    }
    printf("\n");

    return 0;
}