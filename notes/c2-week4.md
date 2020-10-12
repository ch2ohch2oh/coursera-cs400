## Heap

### Min heap

Every node in the tree has a value greater than 
the values in its child nodes.

### How to buid a min heap?

1. Sort the array!
2. Insert n times. This is the same as 
   calling `heapifyUp()` n times.
3. Call `heapifyDown()` for all but the last level.

### Runtime analysis

Why building a heap using `heapifyDown()` is O(n)?
See [here](https://stackoverflow.com/questions/9755721/how-can-building-a-heap-be-on-time-complexity).
