
#ifndef MUSTAFA_CONTROLLER_H
#define MUSTAFA_CONTROLLER_H

struct PlayerInput {
    int controller;
    int selectedX;
    int selectedY;
    bool confirm;
    bool cancel;
};

class ControllerManager {
public:
    PlayerInput players[4];

    ControllerManager();

    void resetInputs();
    PlayerInput getPlayer(int player);
};

#endif
