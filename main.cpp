#include <iostream>
#include "priorityQueue.h"
using namespace std;
int main() {
    int arr[] = {40,20,60,15,30,25,10,35,45,50,55};
    int size = 11;
    priorityQueue<int> a(arr,size);
    cout<<a.deQueue();
    return 0;
}