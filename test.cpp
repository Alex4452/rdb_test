#include <iostream>
#include <dlfcn.h>
#include <stdio.h>

int main ()
{
	 dlopen("libicuuc.so.63.1", RTLD_LAZY);
	 std::cout << dlerror();
}
