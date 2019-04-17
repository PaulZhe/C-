#include<stdio.h>
#include<stdlib.h>

void show(int *arr, int n) {
    int i, sum = 0;
    for (i = 0;i < n; i++) {
        if (arr[i] != -1)
            sum++;
    }
    printf("%d\n", sum);
    for (i = 0; i < n; i++) {
        if (arr[i] != -1)
            printf("%d ", arr[i]);
    }
}

//去重
//void DeleteRepeat(int *arr, int num) {
//    int i, j;
//    for (i = 0; i < num - 1; i++) {
//        if (arr[i] == -1)
//            continue;
//        else {
//            for (j = i + 1; j < num; j++) {
//                if (arr[j] == -1)
//                    continue;
//                else {
//                    if (arr[j] == arr[i])
//                        arr[j] = -1;
//                }
//            }
//        }
//    }
//}

int main() {
    int num;
    int arr[100] = {0};
    scanf("%d", &num);
    int i, j, t, count = 0, change = 1;
    //arr[0]没有存东西
    for (i = 0; i < num; i++) {
        count++;
        scanf("%d", &arr[count]);
        for (j = 1; j < count; j++) {
            if (arr[count] == arr[j]) {
                arr[count] = -1;
                count--;
            }
        }
    }
//    DeleteRepeat(arr, num);
    for (i = 1; i < count && change; i++) {
        change = 0;
        for (j = 1; j <= count - i; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                change = 1;
            }
        }
    }
    printf("%d\n", count);
    for (i = 1; i <= count; i++) {
        printf("%d ", arr[i]);
    }
    //排序
//    for(i = num - 1; i >= 0; i--) {
//        for(j = 0; j < i; j++) {
//            if(arr[j] > arr[j + 1]) {
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//    show(arr, num);
    return 0;
}
