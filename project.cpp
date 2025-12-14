#include <iostream>
#include <ncurses.h>
#include <windows.h>


using namespace std;

// MAZE
int maze[18][18]={{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,},
                  { 0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,},
                  { 0 , 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,},
                  { 0 , 1 , 0 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 1 , 0 , 1 , 0 ,},
                  { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,},
                  { 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 ,},
                  { 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0 ,},
                  { 0 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,},
                  { 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,},
                  { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 0 ,},
                  { 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 1 , 0 ,},
                  { 0 , 1 , 0 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 ,},
                  { 0 , 1 , 1 , 0 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 ,},
                  { 0 , 1 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 ,},
                  { 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 ,},
                  { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,},
                  { 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 ,},
                  { 0 , 0 , 2 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,},
                 };

//animasi text escape room
void print_slow(int y, int x, const char* text) {
    move(y, x);
    for (int i = 0; text[i] != '\0'; i++) {
        addch(text[i]);
        refresh();
        Sleep(40);  // kecepatan animasi
    }
}


int main() {
    initscr();     // mulai ncurses
    noecho();      // tidak menampilkan input user
    clear();

    print_slow(2, 5, "Welcome to the Text Animation Demo!");
    print_slow(4, 5, "Loading...");
    print_slow(6, 5, "Please wait...");

    getch();       // menunggu  user menekan tombol
    endwin();      // keluar ncurses
    return 0;
}
