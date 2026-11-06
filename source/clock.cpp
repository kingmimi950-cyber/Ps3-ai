
#include "clock.h"

ChessClock::ChessClock() {
    reset();
}

void ChessClock::setTime(int seconds) {
    if (seconds < 0)
        seconds = 0;

    whiteSeconds = seconds;
    blackSeconds = seconds;
    whiteRunning = true;
}

void ChessClock::switchTurn() {
    whiteRunning = !whiteRunning;
}

void ChessClock::reset() {
    setTime(600); // 10 minutes per player
}
