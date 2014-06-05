#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{

typedef VOID (*DLLPROC) (int , int);

HINSTANCE hinstDLL;
DLLPROC Enumproc;
BOOL fFreeDLL;

int test1 = atoi(argv[1]); //motaghyer tarif kardam ke int she 
int test2 = atoi(argv[2]);

hinstDLL = LoadLibrary("enumProcessDll.dll");

Enumproc = (DLLPROC) GetProcAddress(hinstDLL, "?Enumproc@@YAHHH@Z");

	Enumproc (test1 , test2 );  // inja ba ona call kardam

	fFreeDLL = FreeLibrary(hinstDLL);


return 0;
}