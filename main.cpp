// Using min-heap for min-priority queue
#include <cmath>
#include <iostream>
using namespace std;
class priority_queue {
    int *H;
    int max_size; //maximum capacity of the queue
    int endOfQueue; //current number of elements in the queue
public:
    explicit priority_queue(int size){
        endOfQueue = -1;
        max_size = size;
        H = new int[size];
    }
    bool isEmpty() { // If tree is empty or not
        if (endOfQueue == -1)
            return true;
        else return false;
    }
    int minimum() { // minimum, return minimum
        int minimum = H[1];
        return minimum;
        // H index 1 is our root, a.k.a our smallest value. We want this to be min.
    }
    // parent, left, right children
    int parent(int i) {
        // Three returns are from "binary-heap" from geeksforgeeks
(https://www.geeksforgeeks.org/binary-heap/)
        int parent = H[(i - 1) / 2]; // Value will minus 1 and be split into 2 kids
        return parent;
    }
    int leftChild(int i) {
        int leftChild = H[(2 * i) + 1]; // Value will be larger than parent
        return leftChild;
    }
    int rightChild(int i) {
        int rightChild = H[(2 * i) + 2]; // Value will be larger than left node
        return rightChild;
    }
};
    // maintain heap property with heapify (while loops to swap nodes)
void heapify(int H[], int max_size, int i) {
    // call our three functions from before, since they each return their respective values
    int leftChild(i);
    int rightChild(i);
    int minimum = (i); // Smallest value we are trying to make root at all times
    while (minimum!= i) { // if smallest supposed value isn't the smallest, swap the node with actual root (i).
        swap(H[minimum ], H[i]);
    }
    while (leftChild < i) {  // if left child is less than root, it is now the root
        leftChild = minimum;
    }
    while (rightChild < i) {  // if right child is less than root, it is now root
        rightChild = minimum;
}
// For a min heap, the minimum always has to be on top. So if the left or right child is smaller, it has to start moving up. We are moving up the tree from below.
// If it's larger, it stays. Hence only "<i" loops
}
// Inserting value into tree, just adding +1 into size. Size capacity has to be infinite
void insert(int H[], int max_size, int i) {
    H[max_size] = INFINITY;
    max_size = 1 + max_size;
}
int deleteMin(int H[], int max_size) { // Delete 1 from size instead of add. Similar to insert.
// self note: H[1] (index 1) is our root. NOT 0
    int min = H[1]; // make int min our root
    H[1] = H[max_size]; // root - 1, heapify
    max_size = (max_size -1);
    heapify(H,max_size,1); // parameters must be in same order
// same as min();
}
// include in option one, buildHeap then insert inside heap. :)
void buildHeap(int H[], int size) { // From Prof. Debnath's slide "heap.pptx"
    for (int i = size / 2; i > 0; i--)
        heapify(H,size,i);
}
// print array (option 3)
void print(int H[], int size) // print function from "Bubble Sort" from GeeksforGeeks https://www.geeksforgeeks.org/bubble-sort/
{
    int i;
    for (i = 0; i < size; i++)
        cout << H[i] << endl;
}
int main() {
  bool cont = true;
  int size;
  int H[1000];
  int menuChoice;
  cout << "Welcome to binary heap generator!" << endl; 
  cout << "Choose from the following options:" << endl;
  // display menu
  cout << "1. Insert item into heap" << endl;
  cout << "2. Delete minimum element" << endl;
  cout << "3. Print array representation of queue" << endl; cout << "4. Exit program" << endl;
  // user selection
  cin >> menuChoice;

  switch (menuChoice) {
    case 1: {
      int numberOfValues;
      cout << "How many values would you like to enter?: " << endl;
      cin >> numberOfValues;
      for (int i = 0; i < numberOfValues; i++) {
        cout << "Enter your value here:" << endl;
        cin >> i;
        insert(H, size, i);
        buildHeap(H, size);
        if (i == -1) {
          cont = false;
          break;
      }
    }
}

case 2: {
    cout << "Your minimum has been removed from the heap!" << endl;
    cout << "Returning back to menu...\n" << endl;
    deleteMin(H, size);
    break;
    }
case 3: {
    cout << "Visual representation of your queue: " << endl;
    cout << "Returning back to menu...\n" << endl;
    print(H, size);
    break;
    }
case 4: {
  cont = false;
  std::cout << "Thank you for using this program, see you!" << endl; 
  break;
    }
  }
}
