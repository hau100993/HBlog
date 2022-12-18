#include <stdio.h>
#include <string.h>

/*

matrix
1 2 3 4 
3 4 5 6 
1 2 3 4 

*/


int readFile()
{

// open file

FILE* fd = fopen("matrix.txt", "w+");
if(!fd)
{
   printf("open error\n"); 
   return -1; 

}

unsigned int col = 4; 
unsigned int row = 3; 


int matrix[row][col];


// read line by line: matrix [row][col] :row = number line, coll = number charater in line??

//unsigned int tmp ; 

unsigned int r = 0;
unsigned int c = 0;

char buf[64]; 

//Write more data: 

printf("Let input data: 1 2 3 4 5 \n"); 

// buf[0]='\n';
while(fgets(buf, sizeof(buf), stdin) != NULL)

{
    if(strcmp(buf, "done\n")==0)
    {
        printf("Input done. Let's print file\n");
        break;
    }
    printf("Write : %s\n", buf);

    fputs(buf, fd);
    // buf[0]='\n';
}




// Read: 
//while( fgets(fd, "%s ", buf) != 0) 
// buf[0] = '\n'; 
while(fgets(buf, sizeof(buf), fd)) 
{
	printf("line %d - %s", r, buf); 
    r++;
}

fclose(fd);

return 0;

}


int main()

{
	readFile(); 

    return 0;

}