#include "PriorityQueue.hpp"

using namespace std;

int main() {
    PriorityQueue<int> queue;

    queue.enqueue(1, 3);
    queue.enqueue(2, 2);
    queue.enqueue(3, 1);

    std::cout << queue.size() << " is the size" << std::endl;
    queue.dequeue();
    std::cout << queue.size() << " is the new size" << std::endl;
    queue.dequeue();
    std::cout << queue.size() << " is the new size" << std::endl;
    queue.dequeue();
    std::cout << queue.size() << " is the new size" << std::endl;
    queue.dequeue();
    std::cout << queue.size() << " is the new size" << std::endl;


    return 0;
}
