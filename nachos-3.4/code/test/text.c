#include "syscall.h"
#define MAX_LENGTH 255

int main() {
	char* result;
	PrintString("--------------------TEXT--------------------\n");
	PrintString("Enter what you want to print to console: ");
	ReadString(result, 255);
	PrintString(result);
	PrintString("\n");
	return 0;
}
