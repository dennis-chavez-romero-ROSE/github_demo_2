// Your First C++ Program

#include <iostream>

void jakobCounter()
{
    for (int i = 0; i < 11; i++)
        std::cout << "\nJakob: " << i;
}

void print_nums() 
{

    for (int i = 19; i <= 30; i++)
    {
        std::cout << i << std::endl;
    }
}

int main() {
    std::cout << "Hello World!"; // this is a merge conflict
    std::cout << "Hello Metaverse!"; 
    std::cout << "this is an insane change"; 
    jakobCounter();
    print_nums();
    
    return 0;
}

