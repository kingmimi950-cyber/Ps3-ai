
#ifndef MUSTAFA_GAME_H
#define MUSTAFA_GAME_H

#include "chess.h"

struct GameSession {
    ChessBoard board;
    bool active;

    GameSession();

    void restart();
};

class MustafaGame {
public:
    GameSession matchA;
    GameSession matchB;

    void restartAll();
    void restartMatchA();
    void restartMatchB();
};

#endif
