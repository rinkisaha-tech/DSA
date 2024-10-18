[![C](https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/45px-C_Programming_Language.svg.png?20201031132917)](https://github.com/rinkisaha-tech/DSA)
```   All In C Programming :) ```

```markdown
# Data Structures and Algorithms (DSA) Syllabus

This repository covers essential topics in **Data Structures and Algorithms (DSA)**. It is designed for anyone interested in mastering DSA concepts, coding techniques, and problem-solving skills.

## Table of Contents
1. [Introduction to DSA](#introduction-to-dsa)
2. [Complexity Analysis](#complexity-analysis)
3. [Array and Strings](./array/)
4. [Linked Lists](#linked-lists)
5. [Stacks and Queues](#stacks-and-queues)
6. [Recursion and Backtracking](#recursion-and-backtracking)
7. [Hashing](#hashing)
8. [Trees](#trees)
9. [Graphs](#graphs)
10. [Dynamic Programming](#dynamic-programming)
11. [Greedy Algorithms](#greedy-algorithms)
12. [Sorting and Searching](#sorting-and-searching)
13. [Divide and Conquer](#divide-and-conquer)
14. [Advanced Topics](#advanced-topics)

## Introduction to DSA
- **What is DSA?**
  - Importance of DSA in problem-solving
  - Applications in real-world systems

## Complexity Analysis
- **Time Complexity:**
  - Big O, Big Theta, and Big Omega notations
  - Best case, worst case, and average case analysis
  - Complexity of common operations (e.g., loops, recursive calls)
  
- **Space Complexity:**
  - Memory usage in algorithms

### Example: Time Complexity of a Loop

```java
// O(n) - Time Complexity
for (int i = 0; i < n; i++) {
    System.out.println(i);
}
```

## Arrays and Strings
- **Arrays:**
  - Types: 1D, 2D, Dynamic Arrays
  - Operations: Insert, Delete, Traverse, Search
  
### Example: Array Traversal

```python
# O(n) - Time Complexity for traversing an array
arr = [1, 2, 3, 4, 5]
for num in arr:
    print(num)
```

- **Strings:**
  - Basic operations (length, substring, concatenation)
  - Algorithms: KMP, Rabin-Karp for pattern matching

### Example: String Manipulation

```java
// String concatenation example in Java
String str1 = "Hello, ";
String str2 = "World!";
String result = str1 + str2;
System.out.println(result);  // Output: Hello, World!
```

## Linked Lists
- **Types of Linked Lists:**
  - Singly Linked List
  - Doubly Linked List
  - Circular Linked List

### Example: Singly Linked List Node Definition

```java
class Node {
    int data;
    Node next;
    
    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
```

## Stacks and Queues
- **Stacks:**
  - LIFO Principle
  - Applications: Balancing parentheses, Postfix evaluation

### Example: Stack Implementation

```python
# Stack implementation using Python list
stack = []

# Push operation
stack.append(10)
stack.append(20)

# Pop operation
stack.pop()  # Removes 20
```

- **Queues:**
  - FIFO Principle
  - Variants: Circular Queue, Priority Queue, Deque

### Example: Queue Implementation

```java
import java.util.LinkedList;
import java.util.Queue;

Queue<Integer> queue = new LinkedList<>();
queue.add(1);
queue.add(2);
queue.poll();  // Removes 1
```

## Recursion and Backtracking
- **Recursion:**
  - Recursive algorithms, base and recursive cases

### Example: Fibonacci Series using Recursion

```python
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(5))  # Output: 5
```

- **Backtracking:**
  - N-Queens problem, Sudoku solver

## Hashing
- **Hash Tables:**
  - Hash functions, collision handling

### Example: HashMap in Java

```java
import java.util.HashMap;

HashMap<String, Integer> map = new HashMap<>();
map.put("Alice", 25);
map.put("Bob", 30);
System.out.println(map.get("Alice"));  // Output: 25
```

## Trees
- **Binary Trees:**
  - Inorder, Preorder, Postorder Traversals

### Example: Binary Tree Traversal

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def inorder_traversal(root):
    if root:
        inorder_traversal(root.left)
        print(root.data)
        inorder_traversal(root.right)
```

## Graphs
- **Graph Algorithms:**
  - BFS, DFS, Shortest Path (Dijkstra's)

### Example: Depth First Search (DFS)

```python
def dfs(graph, node, visited):
    if node not in visited:
        print(node)
        visited.add(node)
        for neighbor in graph[node]:
            dfs(graph, neighbor, visited)

graph = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}

visited = set()
dfs(graph, 'A', visited)
```

## Dynamic Programming
- **Dynamic Programming (DP):**
  - Memoization, Tabulation techniques

### Example: DP Fibonacci

```python
def fib_dp(n):
    dp = [0] * (n+1)
    dp[1] = 1
    for i in range(2, n+1):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n]

print(fib_dp(5))  # Output: 5
```

## Greedy Algorithms
- **Greedy choice property, optimal substructure**

## Sorting and Searching
- **Sorting Algorithms:**
  - Bubble Sort, Quick Sort

### Example: Quick Sort

```python
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

print(quick_sort([3,6,8,10,1,2,1]))  # Output: [1, 1, 2, 3, 6, 8, 10]
```

## Divide and Conquer
- **Merge Sort, Quick Sort, Binary Search**

## Advanced Topics
- **Tries, Segment Trees, Disjoint Set Union (DSU)**

-----------------------------------------------------------

## Resources
- **Books:**
  - "In the above folders all the code and the techniques are implemented. If you want to check the codes."
  - "All codes are implemented in C."

- **Online Platforms:**
  - GeeksforGeeks, Javatpoint, Codeforces
```
