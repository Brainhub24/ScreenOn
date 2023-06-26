#include <iostream>
#include <Windows.h>

int main()
{
    // Disable screensaver and monitor power off
    SystemParametersInfo(SPI_SETSCREENSAVEACTIVE, FALSE, NULL, 0);
    SystemParametersInfo(SPI_SETLOWPOWERACTIVE, FALSE, NULL, 0);
    SystemParametersInfo(SPI_SETPOWEROFFACTIVE, FALSE, NULL, 0);

    // Prevent display from turning off
    SetThreadExecutionState(ES_CONTINUOUS | ES_DISPLAY_REQUIRED);

    // Run an infinite loop to keep the program running in the background
    while (true)
    {
        // Perform any other necessary tasks here
        // ...

        Sleep(1000); // Sleep for 1 second before repeating the loop
    }

    return 0;
}
