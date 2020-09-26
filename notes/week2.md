## Week 2 Notes

A variable in C++ has:

1. A name
2. A type
3. A value
4. A location in memory

### Stack Memory

Below is the addr of two variables in C++.
```
 num in main(): 7
&num in main(): 0x7ffede3f1a94
 x in foo(): 42
&x in foo(): 0x7ffede3f1a74
```

One thing we note is the address is quite high. Even though
I am using a 64-bit CPU, the address is only 48 bits.
Also we see that the **stack grows from high to low**.

A pointer stores an address of a varible.

### Heap Memory

If memory needs to exist for longer than the lifecycle of 
the function, heap memory needs to be used. The **only** way 
to create heap memory in C++ is to use the `new` operator.

Heap memory goes from low to high in contrast to stack memory.

### Code Organization

Interface in .h headerfiles while implementation in .cpp source files.

## My Thoughts

Easy. 