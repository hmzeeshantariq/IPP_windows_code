#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

int main()
{
	SYSTEM_INFO sysInfo;
	 Copy the hardware information to the SYSTEM_INFO structure. 
	GetSystemInfo(&sysInfo);
	 Display the contents of the SYSTEM_INFO structure. 
	printf("Hardware information: \n");
	printf("  OEM ID: %u\n", sysInfo.dwOemId);
	printf("  Number of processors: %u\n", sysInfo.dwNumberOfProcessors);
	printf("  Page size: %u\n", sysInfo.dwPageSize);
	printf("  Processor type: %u\n", sysInfo.dwProcessorType);
	printf("  Minimum application address: %lx\n", sysInfo.lpMinimumApplicationAddress);
	printf("  Maximum application address: %lx\n", sysInfo.lpMaximumApplicationAddress);
	printf("  Active processor mask: %u\n",	sysInfo.dwActiveProcessorMask);

	system("systeminfo");

	return 0;
}