
#ifndef MUSTAFA_RENDERER_H
#define MUSTAFA_RENDERER_H

#include "game.h"

struct ScreenArea {
    int x;
    int y;
    int width;
    int height;
};

class ChessRenderer {
public:
    ScreenArea matchA;
    ScreenArea matchB;

    ChessRenderer();

    void setupSplitScreen();
    ScreenArea getMatchArea(int match);
};

#endif
