## AVL and B-trees

The height difference is defined as the height of right sub-tree
minus the height of the left sub-tree.

For the tree below,
the height of the left subtree of node `a` is 0,
while the height of the right subtree of node `a` is 1.
Hope this will clarify the meaning of height.

AVL tree is named after Adelson-Velsky and Landis.

```
  a
 / \
b   c
   / \
  d   e
```

### BST rotation

There are 4 cases.

## B-tree

The aim for B-tree to perform both well in memory and 
on disk.

The order of a B-tree node is the number of keys stored on
that node plus one.

For a B-tree of order m:
- All keys within a node are in sorted order.
- Each node contains no more than **m-1** keys.
- Each internal node can have at most m children.

