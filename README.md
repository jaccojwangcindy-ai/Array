# Data structures
1. Arrays
Concept: A fixed-size container where items are lined up side-by-side.
Real-World Analogy: An egg carton. You can instantly pick the 3rd egg because you know exactly where it is.
Where it's used:
Image Processing: An image is just a grid of pixels (colors).
Spreadsheets: Data in Excel rows and columns.
Why?
Speed: Computers can jump to any item instantly if they know the index number (e.g., "Give me item #50").
Simplicity: It’s the standard way to store a list of things that doesn't change size often.
2. Linked Lists
Concept: A chain of items where each item holds a "hand" (pointer) to the next one.
Real-World Analogy: A Treasure Hunt. You go to the first location, find a note telling you where the next location is, and so on.
Where it's used:
Music Playlists: Each song knows which song plays "Next" or "Previous."
Photo Viewers: Swiping left/right to see the next photo.
Operating Systems: keeping track of free memory blocks.
Why?
Flexibility: It is very fast to add or remove items in the middle of the chain (you just change where the "hand" points). You don't have to shift everyone else around like in an Array.
3. Stacks (LIFO - Last In, First Out)
Concept: A pile of items. You can only touch the top one.
Real-World Analogy: A stack of dinner plates. You wash the one you put on top last.
Where it's used:
Undo Button (Ctrl+Z): The computer remembers your actions in a stack. The last thing you typed is at the top; hitting "Undo" removes it.
Browser "Back" Button: Your history is a stack.
Why?
Reversing History: It is perfect for tracking "states" so you can backtrack to the previous one.
4. Queues (FIFO - First In, First Out)
Concept: A line of people waiting.
Real-World Analogy: A line at a fast-food register. The first person in line is the first one served.
Where it's used:
Printers: If 5 people click "Print," the printer puts the jobs in a queue and prints them in order.
Web Server Requests: When thousands of people try to buy concert tickets at once, they are put in a queue.
Why?
Fairness: It ensures data is processed in the exact order it arrived.
Buffering: It holds data safely until the processor is ready to handle it.
5. Trees (Hierarchical)
Concept: A root structure that branches out.
Real-World Analogy: Your family tree or the folder structure on your laptop.
Where it's used:
File Systems: Folders inside folders.
HTML (Websites): The "Document Object Model" (DOM)—<body> contains <div>, which contains <p>.
Autocorrect: A specialized tree (Trie) quickly searches for words starting with "app...".
Why?
Organization: It is the only structure that handles "Parent" and "Child" relationships naturally.
Searching: In a sorted tree, you can cut your search time in half with every step (Is it bigger or smaller than the current node?).
6. Graphs (Networks)
Concept: A web of connections where anything can connect to anything.
Real-World Analogy: A map of cities and roads, or a spiderweb.
Where it's used:
Social Networks: You are a "Node," your friendship is a "Connection" (Edge).
GPS/Google Maps: Intersections are nodes; roads are edges.
The Internet: How computers link to other computers.
Why?
Connectivity: It models complex relationships where one thing is connected to many others (Many-to-Many).
Pathfinding: It is the best structure to calculate the shortest route between two points.
1. Arrays
Application: Digital Images (Pixels)
How it works: A standard photo is just a grid (matrix) of pixels. A 1920x1080 image is essentially a massive 2D array where every cell contains a color code.
Algorithm Used: Matrix Transformation. When you rotate a photo or apply a filter, the computer iterates through the array and modifies the math of every pixel.
Why Arrays?
Direct Access: The computer needs to calculate millions of pixels instantly. Arrays allow the CPU to jump to pixel[500][500] instantly without counting from the beginning.
Memory: Arrays sit side-by-side in memory (contiguous), making them the fastest structure for the CPU to read.
2. Linked Lists
Application: Music Playlist (Spotify/Apple Music)
How it works: When you shuffle songs, they aren't physically moved in memory. Instead, Song A simply points to Song Z as "Next."
Algorithm Used: Traversal. Moving from Current Node to Next Node.
Why Linked Lists?
Dynamic Changes: If you drag a new song into the middle of your playlist, the program just updates two pointers (links). In an Array, it would have to shift every single subsequent song down one spot, which is slow.
3. Stacks (LIFO)
Application: The "Undo" Button (Ctrl+Z)
How it works: Every time you type or delete something in Word, that "state" is pushed onto a stack.
Algorithm Used: Backtracking. When you hit Undo, the program "pops" the most recent state off the stack and reverts to the one underneath it.
Why Stacks?
Last-In, First-Out: The most recent action you did is the first one that needs to be removed. Stacks are built exactly for this "reverse order" logic.
4. Queues (FIFO)
Application: Printer Spooler
How it works: In an office, 5 people might hit "Print" at the same time. The printer can't do them all at once.
Algorithm Used: Scheduling. The printer takes the first job arrived, processes it, then dequeues it to look for the next one.
Why Queues?
Fairness: Queues guarantee First-Come, First-Served.
Buffering: It holds the data safely in a line so the slow printer doesn't crash from the fast computer sending too much data at once.
5. Trees
Application: File Explorer (Folders)
How it works: Your C: drive is the "Root." Inside are folders like Users and Program Files (Children). Inside those are more folders.
Algorithm Used: Depth-First Search (DFS). When you search for a file, the computer dives deep into one folder, then backs up and tries the next branch.
Why Trees?
Hierarchy: It is the only structure that naturally models "Parents" and "Children." You can't have a file system without a hierarchy.
6. Graphs
Application: Google Maps (GPS)
How it works: Every intersection is a "Node." Every road connecting them is an "Edge." The "Edge" has a weight (distance or traffic time).
Algorithm Used: Dijkstra’s Algorithm (or A*). This algorithm scans the graph to calculate the path with the smallest total weight (shortest time) between your location and your destination.
Why Graphs?
Complex Connections: Roads aren't straight lines; they are a web. Graphs are designed to model networks where one point connects to many others.






