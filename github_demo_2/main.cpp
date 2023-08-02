// Your First C++ Program

#include <iostream>

void jakobCounter()
{
    for (int i = 0; i < 11; i++)
        std::cout << "\nJakob: " << i;
}

int main() {
    std::cout << "Hello World!"; // this is a merge conflict
    std::cout << "Hello Metaverse!"; 
    std::cout << "this is an insane change"; 
    jakobCounter();
    return 0;
}