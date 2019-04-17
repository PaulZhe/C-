//
//  main.c
//  明明的随机数
//
//  Created by 小哲的DELL on 2019/4/17.
//  Copyright © 2019年 小哲的DELL. All rights reserved.
//

#include<stdio.h>

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
    //排序
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
    //打印
    printf("%d\n", count);
    for (i = 1; i <= count; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

