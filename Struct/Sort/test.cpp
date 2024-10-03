#include <gtest/gtest.h>

//������� 1
#include "bubbleSort.h"
#include "ExchangeSort.h"
#include "InsertionsSort.h"
#include "OptimizedBubbleSort.h"
#include "SelectionSort.h"



// ����: ���������� ������� � ����� ���������
TEST(InsertionsSortTest, SingleElementArray) {
    int arr[] = { 5 };
    InsertSort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}

// ����: ��� ��������������� ������
TEST(InsertionsSortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ � �������� �������
TEST(InsertionsSortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ � ����������� ����������
TEST(InsertionsSortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    InsertSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ � �������������� �������
TEST(InsertionsSortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    InsertSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ ���� double
TEST(InsertionsSortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    InsertSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
