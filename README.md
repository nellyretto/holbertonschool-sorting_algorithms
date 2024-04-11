# Sorting algorithms & Big O

This repository is a group project for the Big O algortihms. This project intends for us to be able to understand and explain this algorithms by ourselves.

# What are Big O Notation?

Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation

## Algorithms implemented

## Bubble sort


In **Bubble Sort** algorithm
* Traverse from left and compare adjacent elements and the higher one is placed at right side.
* In this way, the largest element is moved to the rightmost end at first.
* This process is then continued to find the second largest and place it and so on until the data is sorted.


`0. Bubble sort`
### Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

**prototype**
```c
void bubble_sort(int *array, size_t size)
```
## Insertion sort
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

In **Insertion sort**
* Start with second element of the array as first element in the array is assumed to be sorted.
* Compare second element with the first element and check if the second element is smaller then swap them.
* Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
* Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
* Repeat until the entire array is sorted.

`1. Insertion sort`
### Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

**prototype**
```c
void insertion_sort_list(listint_t **list)
```

## Selection sort

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

In **Selection sort**
* Set minIndex to position 0 (minIndex will hold the index of the smallest number in the unsorted subarray)
* Search for the smallest element in the unsorted subarray and update minIndex
* Swap the element at the position minIndex with the first element of the unsorted subarray.
* Again set minIndex to the first position of the  unsorted subarray
* Repeat steps 2 to 4 until the array gets sorted

`2. Selection sort`
### Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

**prototype**

```c
void selection_sort(int *array, size_t size)
```

## Quick sort
QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

In **Quick Sort**
* Always pick the first element as a pivot.
* Always pick the first element as a pivot.
* Pick a random element as a pivot.
* Pick the middle as the pivot.

`3. Quick sort`

**prototype**

```c
void quick_sort(int *array, size_t size)
```
### Write a function that sorts an array of integers in ascending order using the Quick sort algorithm


## Contributors
##### Vonzell Carson
Holberton School, cohort 23
##### Danielys Carrasquillo
Holberton School, cohort 23

