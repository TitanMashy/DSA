# DSA Revision Notes

This document is generated based on the actual solutions found in your repository. It covers concepts, logic, and complexity for each problem.

## 1. Arrays

### Second Largest Element
- **File**: `Arrays/Easy/2_Second_Largest.cpp`
- **Logic**: 
  - Initialize `largest` and `secLar` to `INT_MIN`.
  - Iterate through the array once.
  - If `arr[i] > largest`: update `secLar = largest`, then `largest = arr[i]`.
  - Else if `arr[i] > secLar` and `arr[i] < largest`: update `secLar = arr[i]`.
- **Complexity**: Time O(N), Space O(1).

### Check if Array is Sorted
- **File**: `Arrays/Easy/3_is_sorted.cpp`
- **Logic**: 
  - Iterate from `0` to `n-2`.
  - If `arr[i] > arr[i+1]`, return false (not sorted).
  - If loop completes, return true.
- **Complexity**: Time O(N), Space O(1).

---

## 2. Hashing

### Basic Array Hashing
- **File**: `hashing/basic.cpp`
- **Logic**: Uses a fixed-size array `hash[7]` to precompute frequencies. Suitable only for small, non-negative integer ranges.
- **Complexity**: Time O(N) to precompute, O(1) to fetch. Space O(Range).

### Count Frequencies
- **File**: `hashing/count_freq.cpp`
- **Logic**:
  - **Hash Method**: Uses `unordered_map<int, int>` to store frequencies. Iterates array to populate map.
  - **Regular Method**: Nested loops (O(N^2)) to count frequencies manually (brute force).
- **Complexity**: Hash Method: Time O(N) (avg), Space O(N).

### Map vs Unordered Map
- **File**: `hashing/map.cpp`
- **Logic**: Uses `std::map` (ordered) to count frequencies. Keys are stored in sorted order.
- **Complexity**: Time O(N log N) due to tree-based map insertions. Space O(N).

### Most Frequent Element
- **File**: `hashing/most_freq.cpp`
- **Logic**:
  - Uses `unordered_map` to count frequencies.
  - Iterates through the map to find elements with `maxFreq` and `minFreq`.
  - Handles multiple elements with the same frequency by collecting them in vectors.
- **Complexity**: Time O(N), Space O(N).

### String Hashing
- **File**: `hashing/strings.cpp`
- **Logic**: Uses `hash[26]` array for lowercase English letters. Maps `'a'` to index `0`, `'b'` to `1`, etc.
- **Complexity**: Time O(N), Space O(1) (fixed size 26).

---

## 3. Math Problems

### Euclidean Algorithm (GCD)
- **File**: `math_problems/EuclideanAlgo.cpp`
- **Logic**: Repeatedly subtract the smaller number from the larger one until one becomes 0. The non-zero one is the GCD.
- **Note**: Modulo version (`a % b`) is generally faster than subtraction.

### GCD of Array
- **File**: `math_problems/GCF_arr.cpp`
- **Logic**: Computes GCD of the first two elements, then GCD of the result with the third, and so on. Uses `MyGcd` (modulo implementation).
- **Complexity**: Time O(N * log(min(a,b))).

### All Divisors
- **File**: `math_problems/all_divisors.cpp`
- **Logic**: Iterate `i` from `1` to `sqrt(n)`. If `n % i == 0`, then `i` and `n/i` are divisors. Avoid duplicates if `i == n/i`.
- **Complexity**: Time O(sqrt(N)).

### Armstrong Number
- **File**: `math_problems/armstrong.cpp`
- **Logic**: Sum of cubes of digits. Extract digits using `% 10` and `/ 10`.
- **Complexity**: Time O(log10(N)).

### Palindrome Number
- **File**: `math_problems/palindrome.cpp`
- **Logic**: Reverse the integer and compare with original. Handles negative numbers (returns false).
- **Complexity**: Time O(log10(N)).

### Prime Check
- **File**: `math_problems/prime_no.cpp`
- **Logic**: Count divisors up to `sqrt(n)`. If count is exactly 2 (1 and itself, though logic in code counts 1 and n/1 separately), it's prime.
- **Complexity**: Time O(sqrt(N)).

### Reverse Integer
- **File**: `math_problems/reverse_digit.cpp`
- **Logic**: `ans = ans * 10 + digit`. Checks for integer overflow before updating `ans`.
- **Complexity**: Time O(log10(N)).

---

## 4. Recursion

### Fibonacci
- **File**: `recursion/fibonacci.cpp`
- **Logic**: `fibo(n) = fibo(n-1) + fibo(n-2)`. Base case `n <= 1`.
- **Complexity**: Time O(2^N) (Exponential). Needs memoization for efficiency.

### Palindrome Check (Recursive)
- **File**: `recursion/palin_optimized_rec.cpp`, `recursion/palindrome_rec.cpp`
- **Logic**: Compare `str[i]` with `str[n-i-1]`. Recurse with `i+1`.
- **Optimized**: `palindrome_rec.cpp` handles non-alphanumeric characters by skipping them.
- **Complexity**: Time O(N), Space O(N) (recursion stack).

### Pyramid Printing
- **File**: `recursion/pyramid.cpp`
- **Logic**: Uses recursion to simulate nested loops. `row` and `col` are passed as arguments.
- **Complexity**: Time O(N^2).

### Reverse Array
- **File**: `recursion/rev_arr_rec.cpp`
- **Logic**: Swap `arr[start]` and `arr[end]`, then recurse with `start+1`, `end-1`.
- **Complexity**: Time O(N).

### Reverse Number
- **File**: `recursion/rev_num_rec.cpp`
- **Logic**: Pass accumulated reverse value as argument. `revNum(n/10, rev * 10 + n%10)`.
- **Complexity**: Time O(log10(N)).

---

## 5. Sorting

### Bubble Sort
- **File**: `sorting/bubble_sort.cpp`, `sorting/rec_bubble_sort.cpp`
- **Logic**: Repeatedly swap adjacent elements if they are in wrong order. Largest element "bubbles" to the end in each pass.
- **Optimization**: `is_swapped` flag stops early if array is sorted.
- **Complexity**: Time O(N^2).

### Insertion Sort
- **File**: `sorting/insertion_sort.cpp`, `sorting/rec_insertion_sort.cpp`
- **Logic**: Build sorted array one item at a time. Pick element and shift larger elements to the right to find correct position.
- **Complexity**: Time O(N^2).

### Selection Sort
- **File**: `sorting/selection_sort.cpp`
- **Logic**: Find minimum element in unsorted part and swap with the first element of unsorted part.
- **Complexity**: Time O(N^2).

### Merge Sort
- **File**: `sorting/merge_sort.cpp`
- **Logic**: Divide array into halves, sort recursively, then merge sorted halves. Uses extra space for merging.
- **Complexity**: Time O(N log N), Space O(N).

### Quick Sort
- **File**: `sorting/quick_sort.cpp`
- **Logic**: Pick pivot (low), partition array such that elements < pivot are left, > pivot are right. Recurse.
- **Complexity**: Time O(N log N) avg, O(N^2) worst. Space O(log N) stack.

---

## 6. Star Patterns

### Diamond Pattern
- **File**: `star_patterns/pyramid.cpp`
- **Logic**:
  - **Top**: Loop `i` from `0` to `n-1`. Print `n-i` spaces, then `2*i+1` stars.
  - **Bottom**: Loop `i` from `0` to `n-1`. Print `i+1` spaces, then `2*(n-i)-1` stars.
- **Complexity**: Time O(N^2).
