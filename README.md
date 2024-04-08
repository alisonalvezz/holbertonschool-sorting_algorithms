# Sorting algorithms and Big O

## What are Sorting Algorithms?
A sorting algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.
"Sorting" means reordering of all elements either in ascending or in descending order.

## Characteristics of Sorting Algorithms
- **Time complexity:** Is a measure of how long it takes to run an algorithm, is used to categorize sorting algorithms.
  The worst-case, average-case and best-case performance of a sorting algorithm can be used to quantify the time complexity of the process.
- **Space complexity:** It also has space complexity, which is the amount of memory required to execute the algorithm.
- **Stability:** A sorting algorithm is said to be stable if the relative order of equal elements is preserved after sorting.
- **In-place sorting:** An in-place sorting algorithm is one in which does not require additional memory to sort the data. This is important when available memory is limited or when the data cannot be moved.
- **Adaptivity:** An adaptive sorting algorithm is one that takes advantage of pre-existing order in the data to improve performance.

## Applications of Sorting Algorithms
- **Searching Algorithms:** Sorting often is a crucial step in search algorithms like binary search, ternery search, where the data needs to be sorted before searching for an specific element.
- **Data management:** Sorting data makes it easy to search, retrieve and analyze.
- **Database optimization:** Sorting data in databases improves query performance.
- **Machine Learning:** Sorting is used to prepare data for training machine learning models.
- **Data Analysis:** Sorting algorithms are used in operating systems for tasks like task scheduling, memory management, and file system organization.

## Types of Sorting Algorithms
**Here we are going to explain the sorting algorithms that we used in our project**
### Bubble Sort
![Bubble sort](https://www.lavivienpost.net/wp-content/uploads/2022/01/bubble-640.gif)
#### Bubble sort is the simplest *sorting algorithm* that works repeatedly swapping the adjacents elements if they are in wrong order.
In bubble sort, we:
- Traverse from left and compare adjacent elements and the higher one is placed at the right side.
- The largest element is moved to the rightmost end at first.
- This process is then continued to find the second largest and place it and so on until the data is sorted.
#### Time complexity of Bubble Sort:
The time complexity is:
- **Best Case:** O(n)
- **Average Case:** O(n^2)
- **Worst Case:** O(n^2)
#### *Note: This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.*

### Insertion Sort
![Insertion sort](https://www.lavivienpost.net/wp-content/uploads/2022/01/insertion-600.gif)
#### Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
In insertion sort, we:
- Start with the second element of the array (as first element in the array is assumed to be sorted)
- Compare the second element with the first element and check if the second element is smaller, then swap them.
- Move to the third element and compare it with the second element, then the first element and swap if necessary to put it in the correct position among the first three elements.
- Continue this process, comparing each element with the ones before it.
- Repeat until the entire array is sorted.
#### Time complexity of Insertion Sort:
- **Best Case:** O(n), if the list is already sorted, where n is the number of elements in the list.
- **Average Case:** O(n^2), if the list is randomly ordered.
- **Worst Case:** O(n^2), if the list is in reverse order.

### Selection Sort
![Selection sort](https://www.lavivienpost.net/wp-content/uploads/2022/01/selection-600.gif)
#### Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element of the unsorted portion of the list and swaps it with the first element of the unsorted part.
This process is repeated for the remaining unsorted portion until the entire list is sorted.
#### Time complexity of Insertion Sort
- O(n^2)

### Quick Sort
![Quick sort](https://www.lavivienpost.net/wp-content/uploads/2022/02/quicksort-600-1.gif)
#### Quick sort is a sorting algorithm based on the *Dvide and Conquer* algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.
The key process in Quick sort is a partition. The target of partitions is positioning the pivot in its correct position in the array, and put all smaller elements at the left of the pivot and bigger at the right of the pivot.
Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.
#### Time complexity of Quick Sort
- **Best case:** O(nlog(n)), when the pivot chosen at each step divides the array into roughly equal halves. The algorithm will be making balanced partitions, making efficient sorting.
- **Average case:** O(nlog(n))
- **Worst case:** O(n^2), when the pivot at each step consistenly results in highly unbalanced positions.

## Big O
### What is "Big O"?
*Big O* is a mathematical concept used to describe the limiting behavior of a function and its argument approaches a specific value or infinity. It's relevant for analyzing the efficiency of algorithms.
#### Key points:
- **Purpose:** *Big O* notation helps classify algorithms based on how their runtime or space requirements grow as the input size increases.
- **Symbol:** The letter 'O' stands for Ordnung, which means Order of Approximation
#### We can say that Big O notation is a relative representation of the complexity of an algorithm.

## Learning objectives of this project:
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### In the mandatory part of this project, we only worked with Bubble Sort, Insertion Sort, Selection Sort and Quick Sort

## First task: Bubble Sort
#### Prototype:
```
void bubble_sort(int *array, size_t size);
```
In this task we have to write a function that sorts an array of integers in ascending order using the *Bubble Sort* algorithm.
We have writed in the file [0-O)(https://github.com/alisonalvezz/holbertonschool-sorting_algorithms/blob/main/0-O) the Big O notations of the time complexity of *Bubble Sort* with one notation per line. 
- Best case O(n)
- Average Case O(n^2)
- Worst Case O(n^2)
