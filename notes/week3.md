## Week 3 Notes

### Constructors

Note it is **not a good idea** to call constructor within another
constructor before C++11. See [here](https://stackoverflow.com/questions/308276/can-i-call-a-constructor-from-another-constructor-do-constructor-chaining-in-c).
Even if in C++11, calling another constructor naively in the function 
body will not work. It will only create a temporary object on stack.


The simplest constructor is the default constructor.
The default constructor will be supplied by the compiler **only if** no
other constructors are defined.

Copy constructor: a constructor with extactly one argument which must be
a const reference to another object of the same type.
```
Cube::cube(const cube & another);
```

### Assignment Operators

Note in the case of 
```
Cube c1;
Cube c2;
c1 = c2;
```
There are two invokations of the default constructor. However,
there is no invokations of the copy constructor.
The assignment operator is called. The assignment operator **does not** 
create new objects in contrast to constructors.

### Reference

A reference **does not** stores memory itself, it is only an alias
to another variable. Therefore, it must be assigned when initialized.

### Destructors

A custom destructor is needed when the object
allocates external resources such as heap memory, files 
or shared memories.
