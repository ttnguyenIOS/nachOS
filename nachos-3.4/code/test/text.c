#include "syscall.h"
#define MAX_LENGTH 255

int main() {

	char* result[MAX_LENGTH];
	PrintString("--------------------TEXT--------------------\n");
	PrintString("Enter what you want to print to console: ");
	ReadString(result, MAX_LENGTH);
	PrintString("Output: ");
	PrintString(result);
	PrintString("\n");
	return 0;
	
}
