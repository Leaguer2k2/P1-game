#include <iostream>
#include <ncurses.h>

using namespace std;

const int width = 40;
const char playerChar = 'P';
const char groundChar = '_';
const char obstacleChar = 'X';
const int jumpHeight = 5;

int playerPos = width / 3;
int obstaclePos = width - 1;
bool isJumping = false;
int jumpCounter = 0;

void DrawGame() {
    clear();
    for (int i = 0; i < width; i++) {
        if (i == playerPos && !isJumping) {
            printw("%c", playerChar);
        } else if (i == playerPos && isJumping) {
            printw(" ");
        } else if (i == playerPos && jumpCounter > 0) {
            printw("%c", playerChar);
        } else if (i == obstaclePos) {
            printw("%c", obstacleChar);
        } else {
            printw("%c", groundChar);
        }
    }
    refresh();
}

void UpdateGame() {
    if (obstaclePos == 0) {
        obstaclePos = width - 1;
    } else {
        obstaclePos--;
    }

    if (isJumping) {
        if (jumpCounter < jumpHeight) {
            jumpCounter++;
        } else {
            isJumping = false;
            jumpCounter = 0;
        }
    }
}

int main() {
    initscr();
    noecho();
    keypad(stdscr, TRUE);

    char userInput;
    while (true) {
        DrawGame();
        UpdateGame();

        userInput = getch();
        if (userInput == ' ') {
            isJumping = true;
        } else if (userInput == KEY_LEFT && playerPos > 0) {
            playerPos--;
        } else if (userInput == KEY_RIGHT && playerPos < width - 1) {
            playerPos++;
        }

        napms(100);
    }

    endwin();
    return 0;
}
