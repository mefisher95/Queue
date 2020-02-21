#include <iostream>
#include "Queue.h"

int main()
{
    Queue< int >::debug_printing(false);
   
    Queue< int > queue;
    queue.enqueue(5);
    std::cout << queue << std::endl;
    queue.enqueue(6);
    std::cout << queue << std::endl;
    int x = queue.front();
    std::cout << 'x' << x << std::endl;
    queue.front() = 4;
    std::cout << queue << std::endl;

    int y = queue.back();
    std::cout << 'y' << y << std::endl;
    queue.dequeue();
    std::cout << queue << std::endl;
    std::cout << "size: " << queue.size() << std::endl;
    queue.clear();
    std::cout << queue << std::endl;
    std::cout << "empty: " << queue.is_empty() << std::endl;
    queue.enqueue(1);
    std::cout << queue << std::endl;
    queue.enqueue(1);
    std::cout << queue << std::endl;
    queue.enqueue(1);
    std::cout << queue << std::endl;
    queue.enqueue(1);
    std::cout << queue << std::endl;
    queue.clear();
    std::cout << queue << std::endl;
    


    return 0;
}