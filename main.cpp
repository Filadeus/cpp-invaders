#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "snippets.h"

class player{
public:
    std::string representation;
    int posR;
    int posC;
    int c_health;
};

void init(std::string world[r][c], class player &Player){
    Player.representation = rps;
    Player.c_health = g_health;
    Player.posR = r - 2;
    Player.posC = c / 2;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            world[i][j] = ' ';
        }
    }

    world[Player.posR][Player.posC] = Player.representation;
}

void draw(std::string world[r][c]){
    std::cout << "\tSpace Invaders!" << std::endl;
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << world[i][j] << "|";
        }
        std::cout << std::endl;
    }
}

void input_t(std::string world[r][c], class player Player){
    std::string keypress;

    while(true){
        draw(world);

    }
}

int main(){
    std::string A_world[r][c];

    player Player;
    init(A_world, Player);

    draw(A_world);

    return 0;
}
