#include <stdio.h>
#include <windows.h>


int main() 
{

typedef VOID (*DLLPROC) (int , int);

HINSTANCE hinstDLL;
DLLPROC Enumproc;
BOOL fFreeDLL;


hinstDLL = LoadLibrary("enumProcessDll.dll");

Enumproc = (DLLPROC) GetProcAddress(hinstDLL, "?Enumproc@@YAHHH@Z");

	Enumproc (200 , 20 );

	fFreeDLL = FreeLibrary(hinstDLL);


return 0;
}