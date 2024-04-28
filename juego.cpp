#include <iostream>
#include <chrono>
#include <thread>
//librerias que hice para hacer esto mas wonito
#include "dinosprites.h"
#include "menu.h"

int main() {
    showMenu(); 
    return 0;
}

int dinosaurio() {
    char endGame = 'n';

    while (endGame != 'y') {
        system("clear"); 
        dino1();
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); 

        system("clear");
        dino2();
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); 

        system("clear");
        dino3();
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); 

        std::cout << "Y= fin del juego: ";
        std::cin >> endGame;
    }

    std::cout << "Game Over!" << std::endl;

    return 0;
}

