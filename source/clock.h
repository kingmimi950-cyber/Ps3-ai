
#ifndef MUSTAFA_CLOCK_H
#define MUSTAFA_CLOCK_H

class ChessClock {
public:
    int whiteSeconds;
    int blackSeconds;
    bool whiteRunning;

    ChessClock();

    void setTime(int seconds);
    void switchTurn();
    void reset();
};

#endif
