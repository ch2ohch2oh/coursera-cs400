## Week 1 - Hashing

### Hash function

The hash function has two parts:
- A hash
- A compression

Do NOT create you own hash function. Use the ones created
by the experts.

Characteristics of a good hash function:
- Computation time is short
- Deterministic
- Satisfy the simple uniform hashing assumption (SUHA)
  P(h(a) == h(b)) = 1/N if a != b

### Chaining

Store all elements with the same key in a linked list.

### Probe-based hashing

Fill in the next empty spot if collision.
This method suffers from primary clustering where the
elements pile up.

Double hashing avoids primary clustering.

    $ h(k, i) = (h1(k) + i * h2(k)) % hash_table_size

No matter what, as the load factor increases, the performance
get worse. Thus we need to keep the load factor below
a threshold.

Note hash table is not the only way to implement a dictionary.
One can also use AVL or red-black tree.
