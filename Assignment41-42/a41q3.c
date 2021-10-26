/*3. Write application which accept file name from user and read all data from that file 
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0 , iRet = 0;
	char fName[30];
	char Buffer[10];
	
	printf("Enter the file name\n");
	scanf("%s",fName);
	
	fd =open(fName,O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	
	printf("Data from the file is :\n");
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		write(1,Buffer,iRet);
	}
	printf("%d",iRet);
	
	close(fd);
	
	return 0;
}