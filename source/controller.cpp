
#include "controller.h"

ControllerManager::ControllerManager() {
    resetInputs();
}

void ControllerManager::resetInputs() {
    for (int i = 0; i < 4; i++) {
        players[i].controller = i;
        players[i].selectedX = 0;
        players[i].selectedY = 0;
        players[i].confirm = false;
        players[i].cancel = false;
    }
}

PlayerInput ControllerManager::getPlayer(int player) {
    if (player < 0 || player >= 4) {
        PlayerInput empty = {-1, 0, 0, false, false};
        return empty;
    }

    return players[player];
}
