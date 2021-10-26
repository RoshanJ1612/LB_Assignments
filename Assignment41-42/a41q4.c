/*4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0 , iRet = 0,iSize = 0;
	char fName[30];
	char Buffer[1024];
	
	printf("Enter the file name\n");
	scanf("%s",fName);
	
	fd =open(fName,O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	
	
	/*while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		iSize=iSize+iRet;
	}*/
		iSize = lseek(fd,0,2);
	
	printf("File size is %d Bytes",iSize);
	
	close(fd);
	
	return 0;
}