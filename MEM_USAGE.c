#include<windows.h>
#include<stdio.h>   
#include<tchar.h>
#include <time.h>

int main()
{
    int memuse[10];
    MEMORYSTATUSEX state;
    state.dwLength = sizeof(state);

    for (int i = 0; i < 10; i++)
    {
        GlobalMemoryStatusEx(&state);
        printf("There is  %ld percent of memory in use.\n", state.dwMemoryLoad);
        Sleep(10000);
    }
    
    return 0;
}
