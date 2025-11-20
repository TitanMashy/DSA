DSA REVISION SUMMARY

A compact, high-yield revision document for interview preparation and practice.
Use this as your one-stop revision sheet before interviews or coding tests.

⸻

STRUCTURE OVERVIEW

Each topic includes:
	•	Concept — key idea of the algorithm or problem
	•	Core approach / pseudocode — main steps or high-level logic
	•	Time and space complexity
	•	Edge cases and tips
	•	Revision prompts — short self-check questions

⸻

INDEX
	1.	Sorting Algorithms
	2.	Recursion
	3.	Math and Number Theory
	4.	Hashing and Maps
	5.	Pattern Printing
	6.	Single-File Utilities
	7.	Quick Revision Checklist
	8.	Micro-Questions

⸻

1. SORTING

Files: bubble_sort.cpp, insertion_sort.cpp, selection_sort.cpp, merge_sort.cpp, quick_sort.cpp, and recursive variants.

Concepts
	•	Sorting algorithms rearrange elements in ascending or descending order.
	•	Comparison-based sorting compares pairs of elements.
	•	Divide-and-conquer sorts (merge sort and quick sort) break problems into subproblems.
	•	Recursive and iterative versions both exist for learning purposes.

Core Algorithms

Bubble Sort:
	•	Idea: Repeatedly compare adjacent elements and swap if they are out of order.

for i from 0 to n-2:
    for j from 0 to n-2-i:
        if a[j] > a[j+1]:
            swap(a[j], a[j+1])

	•	Complexity: O(n²) time, O(1) space.
	•	Notes: Inefficient; mainly for educational use.

Insertion Sort:
	•	Idea: Insert each element into its correct place in the already-sorted left part.

for i from 1 to n-1:
    key = a[i]
    j = i - 1
    while j >= 0 and a[j] > key:
        a[j + 1] = a[j]
        j--
    a[j + 1] = key

	•	Complexity: O(n²) worst, O(n) best for nearly sorted arrays.
	•	In-place and stable.

Selection Sort:
	•	Idea: Select the smallest element from unsorted portion and place it at the beginning.
	•	Complexity: O(n²) time, O(1) space.
	•	Not stable; minimal number of swaps.

Merge Sort:
	•	Idea: Recursively split the array into halves, sort them, and merge back.

merge_sort(arr, low, high):
    if low >= high:
        return
    mid = (low + high) / 2
    merge_sort(arr, low, mid)
    merge_sort(arr, mid + 1, high)
    merge(arr, low, mid, high)

	•	Complexity: O(n log n) time, O(n) extra space.
	•	Stable and consistent performance.

Quick Sort:
	•	Idea: Select a pivot, partition the array into two halves (less than and greater than pivot), then recursively sort the halves.

partition(a, low, high):
    pivot = a[low]
    i = low
    j = high
    while (i < j):
        while (a[i] <= pivot):
            i++
        while (a[j] > pivot):
            j--
        if (i < j):
            swap(a[i], a[j])
    swap(a[low], a[j])
    return j

quick_sort(a, low, high):
    if low < high:
        p = partition(a, low, high)
        quick_sort(a, low, p - 1)
        quick_sort(a, p + 1, high)

	•	Complexity: Average O(n log n), worst O(n²), space O(log n).
	•	Not stable but very fast in practice.

Edge Cases
	•	Empty or one-element arrays.
	•	Repeated pivot values.
	•	For stable sort requirements, use merge sort.

Tips
	•	Randomize pivot or use median-of-three to avoid worst-case.
	•	Tail recursion elimination can optimize recursion depth.

Revision Questions
	1.	Why is merge sort stable while quick sort isn’t?
	2.	How can you prevent quick sort’s worst-case time complexity?
	3.	When is insertion sort better than quick sort?

⸻

2. RECURSION

Files: rev_arr_rec.cpp, rev_num_rec.cpp, palindrome_rec.cpp, fibonacci.cpp, pyramid.cpp, etc.

Concepts
	•	A function that calls itself with a smaller problem until a base case is reached.
	•	Base case prevents infinite recursion.
	•	Tail recursion: no computation after the recursive call returns.
	•	Non-tail recursion: further operations occur after recursive return.

Common Examples

Reverse Array Recursively:

reverse(a, l, r):
    if l >= r: return
    swap(a[l], a[r])
    reverse(a, l+1, r-1)

	•	Complexity: O(n)

Palindrome Check (String):

is_pal(str, l, r):
    if l >= r: return true
    if str[l] != str[r]: return false
    return is_pal(str, l+1, r-1)

	•	Complexity: O(n)

Fibonacci Recursion:

f(n) = f(n-1) + f(n-2)

	•	Very slow without memoization (O(2^n)).
	•	DP version runs in O(n) time.

Edge Cases
	•	Always ensure progress toward base case.
	•	Avoid exceeding recursion depth (stack overflow).
	•	For large N, prefer iterative or tail recursion optimization.

Revision Questions
	1.	Write recursive function to reverse an array.
	2.	Explain why naive Fibonacci is inefficient.
	3.	How would you print a pyramid using recursion only?

⸻

3. MATH AND NUMBER THEORY

Files: armstrong.cpp, palindrome.cpp, reverse_digit.cpp, prime_no.cpp, EuclideanAlgo.cpp, GCF_arr.cpp, all_divisors.cpp

Concepts
	•	Work with digits, divisibility, primality, GCD, and powers.

Key Operations
	•	Reverse Digits: rev = rev * 10 + (n % 10)
	•	Armstrong Number: sum of each digit^number_of_digits == number
	•	GCD (Euclid): gcd(a,b) = gcd(b, a % b)
	•	Divisors: For i in [1, sqrt(n)] add i and n/i
	•	Prime Check: divide from 2 to sqrt(n)

Edge Cases
	•	Use long long for large numbers.
	•	Use abs() for negatives.
	•	gcd(0, b) = b.

Revision Questions
	1.	Why is Euclid’s algorithm logarithmic?
	2.	Write efficient code for listing divisors.
	3.	How to find gcd of multiple numbers efficiently?

⸻

4. HASHING AND MAPS

Files: basic.cpp, count_freq.cpp, most_freq.cpp, map.cpp, strings.cpp, lc_1838.cpp

Concepts
	•	Use of maps and hash tables for counting, lookups, or frequency tracking.
	•	unordered_map uses hashing → average O(1) time per operation.
	•	map uses balanced BST → O(log n) per operation.

Core Patterns

Frequency Map:

for each x in arr:
    freq[x]++

Most Frequent Element:

for each key in freq:
    if freq[key] > max_count:
        max_key = key
        max_count = freq[key]

Edge Cases
	•	Reserve capacity for large hash maps to avoid rehashing.
	•	Handle negative keys (hash functions).

Revision Questions
	1.	Difference between map and unordered_map?
	2.	How to find top-k frequent elements?
	3.	How does frequency map help in LC 1838?

⸻

5. PATTERN PRINTING

Files: pyramid.cpp

Concepts
	•	Row and column loops or recursion to print star patterns.

Example (Pyramid):
For n = 5:

Row 1: 4 spaces + 1 star
Row 2: 3 spaces + 3 stars
Row 3: 2 spaces + 5 stars
Row 4: 1 space  + 7 stars
Row 5: 0 spaces + 9 stars

Formulas:

spaces = n - row
stars  = 2 * row - 1

Revision Questions
	1.	Write recursive pyramid pattern.
	2.	Modify it to inverted pyramid.

⸻

6. SINGLE-FILE UTILITIES

factorial.cpp → iterative & recursive factorial. O(n)
fibo.cpp → iterative or DP Fibonacci. O(n)
test.cpp → miscellaneous examples.

Tips
	•	Use long long to avoid overflow.
	•	Recursive factorial safe up to about 1e4 (depending on compiler).

Revision Questions
	1.	When can recursion cause stack overflow?
	2.	Compare iterative and recursive Fibonacci.

⸻

7. QUICK REVISION CHECKLIST

Sorting:
	•	Write and dry-run Bubble, Insertion, Selection, Merge, and Quick sort.

Recursion:
	•	Practice reversing array, palindrome check, Fibonacci, and printing patterns recursively.

Math:
	•	Implement gcd, all divisors, primes, Armstrong numbers.

Hashing:
	•	Implement frequency map and k-most-frequent element finder.

Patterns:
	•	Print pyramids recursively and iteratively.

Estimated revision time: 30–60 minutes.

⸻

8. MICRO-QUESTIONS AND CONCEPT CHECKS
	1.	Reverse digits of an integer — handle negatives and overflow.
	2.	Check Armstrong number — compute sum of digit powers.
	3.	Merge two sorted arrays — use two-pointer method.
	4.	Quick sort — explain partition logic.
	5.	Derive Euclid’s algorithm correctness.
	6.	Compare O(n²) and O(n log n) sorting performance.
	7.	What is tail recursion and how does it help?
	8.	How does recursion unwinding work internally?
	9.	Why is merge sort stable?
	10.	When should you use hashing over sorting?

⸻

PRO TIPS
	•	Re-write pseudocode for major algorithms weekly — improves recall.
	•	Always dry-run recursion on paper.
	•	Draw recursion tree for merge sort and quick sort once before interviews.
	•	For each algorithm, memorize its base case, time complexity, and recurrence relation.
	•	Practice implementing quick sort, merge sort, and binary search without looking at notes.