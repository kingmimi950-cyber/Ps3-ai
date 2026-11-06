
#include "renderer.h"

ChessRenderer::ChessRenderer() {
    setupSplitScreen();
}

void ChessRenderer::setupSplitScreen() {
    // Match A: Top half
    matchA.x = 0;
    matchA.y = 0;
    matchA.width = 1280;
    matchA.height = 360;

    // Match B: Bottom half
    matchB.x = 0;
    matchB.y = 360;
    matchB.width = 1280;
    matchB.height = 360;
}

ScreenArea ChessRenderer::getMatchArea(int match) {
    if (match == 0)
        return matchA;

    return matchB;
}
