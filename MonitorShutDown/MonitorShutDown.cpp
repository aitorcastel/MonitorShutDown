#include <iostream>
#include <Windows.h>

int main()
{
    // turns off the monitor
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    Sleep(5000);
    //turn on the monitor
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
    return 0;
}