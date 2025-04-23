//
//
//
#ifndef NGUYENNHIHW6_PRIORITY_QUEUE_H
#define NGUYENNHIHW6_PRIORITY_QUEUE_H
class priority_queue {
bool isEmpty();
int parent(int H[], int i);
int leftChild(int H[], int i);
int rightChild(int H[], int i);
int minimum(int H[]);
void heapify(int H[], int size, int i);
void insert(int H[], int size, int i);
void buildHeap(int H[], int size);
int deleteMin(int H[], int max_size);
void print(int H[], int size);
};
#endif //NGUYENNHIHW6_PRIORITY_QUEUE_H
