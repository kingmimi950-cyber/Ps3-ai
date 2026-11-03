/*
 * PS3 AI — first native homebrew smoke-test shell.
 *
 * Current scope:
 * - Registers an XMB exit callback.
 * - Runs an idle main loop so the title can be packaged and launch-tested.
 *
 * Not implemented yet:
 * - RSX graphics / chat UI
 * - controller navigation and text entry
 * - HTTPS client and AI service integration
 *
 * Build with the PSL1GHT SDK. Do not treat this starter as the finished app.
 */

#include <stdint.h>
#include <sys/process.h>
#include <sys/timer.h>
#include <sysutil/sysutil.h>

static void ps3ai_exit_callback(uint64_t status, uint64_t param, void *userdata)
{
    (void)status;
    (void)param;
    (void)userdata;
    sysProcessExit(0);
}

int main(void)
{
    sysUtilRegisterCallback(0, ps3ai_exit_callback, 0);

    for (;;) {
        sysUtilCheckCallback();
        sysUsleep(100000);
    }

    return 0;
}
