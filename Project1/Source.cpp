#include <stdio.h>
#include <windows.h>


int main(int argc, char* argv[]) 
{

typedef VOID (*DLLPROC) (int , int);

HINSTANCE hinstDLL;
DLLPROC Enumproc;
BOOL fFreeDLL;


if ( argc <= 1 || *argv == NULL ) 

		{
			printf ("Please enter 2 argument,Number of Operations and the time interval(second)");		
			system ("pause");
			return 0;

	}


int number = atoi(argv[1]); 
int interval = atoi(argv[2]);





hinstDLL = LoadLibrary("enumProcessDll.dll");

Enumproc = (DLLPROC) GetProcAddress(hinstDLL, "?Enumproc@@YAHHH@Z");

	Enumproc (number , interval );

	fFreeDLL = FreeLibrary(hinstDLL);


return 0;
}