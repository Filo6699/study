#include <iostream>
#include <unistd.h>  // For usleep function to simulate delay

#define MOVE_UP "\033[A\033[G"
#define cout std::cout << MOVE_UP

int main() {
    cout << "Meow" << std::flush;
    usleep(500000);
    cout << "Meow 2" << std::flush;
    usleep(500000);
    cout << "Meow 3" << std::flush;
    usleep(500000);
}
