
#include "environment.hpp"
#if defined _WIN32
#include <windows.h>
#pragma comment(lib, "user32")
#endif


int main()
{
    #if defined _WIN32
    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
    #endif
    Environment env1(10, 4);

    srand(time(NULL));

    env1.run();

    return 0;
}
