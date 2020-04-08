#include <windows.h>
#include <stdio.h>

DWORD WINAPI ThreadFunc(void* value) {
	
	int * i = (int *) value;
	printf("From Thread %d\n", *i);
	return 0;
}

int main() {
	HANDLE thread[10];
	printf("In main()\n");

	for (int i = 0; i < 10; i++) {
		thread[i] = CreateThread(NULL, 0, ThreadFunc, &i, 0, NULL);
		if(thread[i])
		{
			WaitForSingleObject(thread[i], INFINITE);
			CloseHandle(thread[i]);
		}
	}
	return 0;
}