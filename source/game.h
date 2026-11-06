#ifndef MUSTAFA_GAME_H
#define MUSTAFA_GAME_H

#include "chess.h"

struct GameSession {
    ChessBoard board;
    bool active;

    GameSession() {
        active = true;
    }

    void restart() {
        board.reset();
        active = true;
    }
};

class MustafaGame {
public:
    GameSession matchA;
    GameSession matchB;

    void restartAll() {
        matchA.restart();
        matchB.restart();
    }

    void restartMatchA() {
        matchA.restart();
    }

    void restartMatchB() {
        matchB.restart();
    }
};

#endif
