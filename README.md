# Data structures
1. Arrays
The Concept: A row of numbered slots, placed right next to each other. (Like an egg carton).

How it Works in a System: The computer reserves a single, solid block of memory (RAM). Because they are numbered sequentially (Index 0, 1, 2...), the computer can calculate exactly where an item is using simple math without searching.

Real-World Application: Digital Images / Computer Screens. A 1080p screen is just a massive 2D array of pixels.

The Algorithm: Matrix Transformations. When you apply a filter in Photoshop, the algorithm loops through the array and does math on the color numbers to change them.

Why we use it: Blazing Speed. It provides instant access to any item if you know its index number.

2. Linked Lists
The Concept: Items scattered anywhere, but each item holds a "note" pointing to the exact location of the next item. (Like a treasure hunt).

How it Works in a System: When a hard drive saves a large file but doesn't have a single empty space big enough, it breaks the file into pieces. It saves the pieces in random empty spots and "links" them together.

Real-World Application: Music Playlists (Spotify). * The Algorithm: Linear Traversal. When you hit "Next Track," the algorithm just reads the pointer on your current song to find where the next song lives.

Why we use it: Flexibility. It's incredibly fast to insert or delete an item in the middle of the list. You just change where the "pointers" point, without needing to shift all the other items around.

3. Stacks (LIFO: Last In, First Out)
The Concept: A vertical pile. You can only add to the top, and you must take off the top. (Like a stack of dinner plates).

How it Works in a System: The CPU uses a "Call Stack" to remember what it was doing. If Program A is running, but suddenly Program B needs to run, the CPU pushes Program A onto the stack, runs B, and then pops A back off to resume.

Real-World Application: The "Undo" Button (Ctrl+Z).

The Algorithm: Push/Pop Backtracking. Every time you type a word, it is "Pushed" to the stack. When you hit Undo, the algorithm "Pops" the most recent action off the top and reverses it.

Why we use it: Reversing History. It is the perfect structure for managing states that need to be undone or reversed in exact order.

4. Queues (FIFO: First In, First Out)
The Concept: A standard waiting line. You join at the back, you get served at the front. (Like a line at a fast-food register).

How it Works in a System: When you open 10 apps at once, they all want the CPU's attention. The Operating System puts them in a queue so the CPU doesn't crash from being overwhelmed.

Real-World Application: Printer Spoolers or Buying Concert Tickets online.

The Algorithm: Round-Robin Scheduling. The algorithm takes the first task in the queue, processes it, and then moves to the next one in line.

Why we use it: Fairness and Buffering. It guarantees strict order (first come, first served) and acts as a safe "waiting room" when a system gets too much data at once.

5. Trees
The Concept: A hierarchy starting from a "Root" that branches out into "Parents" and "Children." (Like a family tree).

How it Works in a System: This is how your Operating System organizes your hard drive. The Root (C:/) branches into Folders, which branch into Sub-Folders, which hold Files (Leaves).

Real-World Application: Databases & Autocomplete (Google Search).

The Algorithm: Binary Search. If you are looking for the number 75 in a tree organized 1-100, the algorithm asks the root: "Is 75 bigger or smaller than 50?" It's bigger, so it instantly ignores the entire 1-50 half of the tree.

Why we use it: Massive Search Efficiency. By chopping the search area in half with every step, you can search billions of records in fractions of a second.

6. Graphs
The Concept: A web of dots (Nodes) connected by lines (Edges). Everything can connect to anything. (Like a spiderweb).

How it Works in a System: Computer networks (like the Internet itself) are graphs. Your router is a node, and the cables connecting it to other routers are the edges.

Real-World Application: Google Maps / GPS.

The Algorithm: Dijkstra’s Algorithm (Shortest Path). Intersections are nodes, and roads are edges. The algorithm checks the "weight" (traffic or distance) of all connected roads to calculate the absolute fastest route to your destination.

Why we use it: Mapping Relationships. It is the only data structure built to handle complex "many-to-many" relationships and find the most efficient paths between them.
