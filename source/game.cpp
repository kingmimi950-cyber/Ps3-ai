
#include "game.h"

GameSession::GameSession() {
    active = true;
}

void GameSession::restart() {
    board.reset();
    active = true;
}

void MustafaGame::restartAll() {
    matchA.restart();
    matchB.restart();
}

void MustafaGame::restartMatchA() {
    matchA.restart();
}

void MustafaGame::restartMatchB() {
    matchB.restart();
}
