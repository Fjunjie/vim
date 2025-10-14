
#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

void SaveInstas(HINSTANCE hInst);

void f(int a){
    int j =relocate(a);
    int k = 10/j;
    if (a == 0) return 1;
    return 0;
}

BOOL WINAPI dsmain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    
    if (fdwReason == DLL_PROCESS_ATTACH)
	SaveInst(hinstDLL);
    return TRUE;
}
