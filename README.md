# IFO and FIFO:

LIFO (Last In, First Out): In LIFO, the last element added to a collection is the first one to be removed. It follows a stack-like behavior, where the newest item is processed first.

# FIFO (First In, First Out):

FIFO is a queue-based approach where the first element added is the first one to be removed. It mirrors a queue, resembling a line where the first person to join is the first to be served.

#Stack:

A stack is a data structure that follows the LIFO principle. Elements are added and removed from the same end, known as the "top." Stacks are useful for managing function calls, tracking execution history, and solving problems involving nested structures.

# Queue:

A queue is a data structure that adheres to the FIFO principle. Elements are added at the rear and removed from the front. Queues are suitable for scenarios such as task scheduling, order processing, and breadth-first search algorithms.

# Common Implementations of Stacks and Queues:

# Stacks:

Implemented using arrays or linked lists. Arrays offer simplicity, while linked lists provide dynamic sizing.

# Queues:

Similarly, queues can be implemented with arrays or linked lists. Priority queues, a variation, introduce the concept of priorities for element removal.

# Most Common Use Cases of Stacks and Queues:

# Stacks:

Used in function call management (call stack), parsing expressions, and undo mechanisms.

# Queues:

Applied in print job scheduling, breadth-first search algorithms, and managing tasks in a multitasking environment.

# Proper Use of Global Variables:

Minimize the use of global variables to enhance code maintainability and readability. Limit global variables to constants or values shared across multiple functions. Encapsulate functionality within functions and classes, passing necessary parameters to avoid unintended side effects and enhance code modularity. Global variables should be used judiciously to prevent potential issues with naming conflicts and code comprehension.
