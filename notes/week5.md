## Week 5 Notes

### Amortized running time

Sample ojective: resize an array when it is full

Method 1: grow array by +2 each time. 
The total work done by adding n elements is O(n^2).

Method 2: double the array capacity each time.
The total work done by adding n elements is O(n).

### Queue

First in first out.

Operation | Array based | Linked list based
----------|-------------|------------------
Create    | O(1)        | O(1)
Push      | O(1)*        | O(1)
Pop       | O(1)*        | O(1)
Empty     | O(1)        | O(1)

The (amortized) time complexity for both implementations
is O(1).


### Stack

First in last out.

It is worth noting that the time compexity for stacks
and queues are the same.

