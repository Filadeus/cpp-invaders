#ifndef CPPINVADERS_SNIPPETS_H
#define CPPINVADERS_SNIPPETS_H

const int r = 12;
const int c = 8;
const std::string rps = "!";
const int g_health = 10;
const int m_health = 5;
const int b_health = 3;
const int dead_h = 0;

void init(std::string world[r][c], class player &Player);
void draw(std::basic_string<char> world);

#endif //CPPINVADERS_SNIPPETS_H
