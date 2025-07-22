# Smallest-positive-missing-
Goal: Put 1 at index 0, 2 at index 1, ..., n at index n-1 if present.

Loop: For each element, we try to place it at its correct index using swap().

Second loop: The first index i where arr[i] != i + 1 gives the missing number.

If no such index found, return n + 1.

