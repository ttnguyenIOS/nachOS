#include "syscall.h"
#include "copyright.h"

#define MAX_LENGTH 255

int main() {
	//Create file with name input from console
	int mFileId, counter, i;
	char *filename;
	char *result; 
	char *copyStuffix = "_copy.txt";
	counter = 0;
	i = 0;
	PrintString("---------TEST: CREATE FILE-----------\n");
	PrintString("Enter filename: ");
	mFileId = Open("stdin", 2);
	if (mFileId != -1) { 
		int length = Read(filename, MAX_LENGTH, mFileId);

		if (length <= 1) {
			PrintString("File name must be more than 1 character \n");
		} else if (Open(filename, 0) != -1) {
			PrintString("File's existed\n");
			while(filename[counter] != '.') {
				result[counter] = filename[counter];
				counter++;
			}
			while(i <= 8) {
				result[counter] = copyStuffix[i];
				counter++;
				i++;
			}	
			
			Create(result);
			PrintString("Create file success\n");
		} else {
			Create(filename);
			PrintString("Create file success\n");				
		}	
		Close(mFileId);
	} 
	return 0;

	//CreateFile with name
	//Create("defaultName");
}
