#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include <windows.h>
#include <winuser.h>
#include <unistd.h>

int main()
{
    int x = 1, y = 10;
    for (int i = 0; i < 500; ++i)
    {
        if (i % 2) x = -x;
        for (int j = 0; j < 100; ++j)
        {
            if (j % 2) y = -y;
            mouse_event(MOUSEEVENTF_MOVE, x, y, 0, 0);
            usleep(1);
        }
    }

    return 0;
}
