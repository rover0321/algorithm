//
// Created by huangxiang on 17-5-7.
//

#ifndef ALGORITHM_DATAUTIL_H
#define ALGORITHM_DATAUTIL_H


class DataUtil {
public:
    static long* generateRandomArray(int n);

    /**
     * 打印一下当前数组中所有的数据
     * @param a
     * @param n
     */
    static void print(long *a, int n);

    /**
     * 交换数组指定两个位置的元素
     * @param a
     * @param m
     * @param n
     */
    static void swap(long* a, int m, int n);
};


#endif //ALGORITHM_DATAUTIL_H
