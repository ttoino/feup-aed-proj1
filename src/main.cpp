#include <chrono>
#include <iostream>
#include <thread>

#include "../includes/Company.h"
#include "../includes/Exceptions.h"
#include "../includes/UserInterface.h"

int main() {
    UserInterface ui;
    Company comp;

    try {
        comp.populate();
    } catch (ReadError) {
        std::cerr << "Something went wrong reading a file!" << std::endl;
        return 1;
    } catch (std::invalid_argument) {
        std::cerr << "Error in file!" << std::endl;
        return 2;
    }

    try {
        while (true) {
            ui.show(comp);
        }
    } catch (Exit) {
        ui.exit();
    }

    try {
        comp.save();
    } catch (ReadError) {
        std::cerr << "Something went wrong writing to a file!" << std::endl;
        return 1;
    }

    return 0;
}
