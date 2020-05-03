// C program to Open a File, 
// Write in it, And Close the File 

# include <stdio.h> 
# include <string.h> 

void ques()
{
    FILE *filePointer ; 
	
	// Get the data to be written in file 
	char dataToBeWritten[100] ;
    printf("ENTER QUESTION :");
   fgets(dataToBeWritten,100,stdin);
   //scanf("%s",dataToBeWritten);
	

	// Open the existing file GfgTest.c using fopen() 
	// in write mode using "w" attribute 
	filePointer = fopen("question.c", "w") ; 
	
	// Check if this filePointer is null 
	// which maybe if the file does not exist 
	if ( filePointer == NULL ) 
	{ 
		printf( "question.c file failed to open." ) ; 
	} 
	else
	{ 
		
		//printf("The file is now opened.\n") ; 
		
		// Write the dataToBeWritten into the file 
		if ( strlen ( dataToBeWritten ) > 0 ) 
		{ 
			
			// writing in the file using fputs() 
			fputs(dataToBeWritten, filePointer) ; 
			fputs("\n", filePointer) ; 
		} 
		
		// Closing the file using fclose() 
		fclose(filePointer) ; 
		
		printf("Data successfully written in file question.c\n"); 
		printf("The file is now closed.") ; 
	} 
    }

    void review()
    {
        // Declare the file pointer 
	FILE *filePointer ; 
	
	// Declare the variable for the data to be read from file 
	char dataToBeRead[100]; 
	filePointer = fopen("question.c", "r") ; 
	
	if ( filePointer == NULL ) 
	{ 
		printf( "question.c file failed to open." ) ; 
	} 
	else
	{ 		
		// Read the dataToBeRead from the file 
		// using fgets() method 
        printf("QUESTION ASKED : \n");
		while( fgets ( dataToBeRead, 100, filePointer ) != NULL ) 
		{ 
		
			// Print the dataToBeRead 
			printf( "%s" , dataToBeRead ) ; 
		} 
		
		
		fclose(filePointer) ; 
		
	
	} 
      // Declare the file pointer 
	FILE *filePointerAns ; 
	
	// Declare the variable for the data to be read from file 
	char dataToBeReadAns[100]; 
	filePointerAns = fopen("answer.c", "r") ; 
	
	if ( filePointerAns == NULL ) 
	{ 
		printf( "answer.c file failed to open." ) ; 
	} 
	else
	{ 		
		// Read the dataToBeRead from the file 
		// using fgets() method 
        printf("ANSWER GIVEN : \n");
		while( fgets ( dataToBeReadAns, 100, filePointerAns ) != NULL ) 
		{ 
		
			// Print the dataToBeRead 
			printf( "%s" , dataToBeReadAns ) ; 
		} 
		
		
		fclose(filePointerAns) ; 
		
	
	} 


    }

    void answer(){
         FILE *filePointer ; 
	
	// Get the data to be written in file 
	char dataToBeWrittenAns[100] ;
    printf(" \n enter answer :");

    fgets(dataToBeWrittenAns,100,stdin);
	

	// Open the existing file GfgTest.c using fopen() 
	// in write mode using "w" attribute 
	filePointer = fopen("answer.c", "w") ; 
	
	// Check if this filePointer is null 
	// which maybe if the file does not exist 
	if ( filePointer == NULL ) 
	{ 
		printf( "answer.c file failed to open." ) ; 
	} 
	else
	{ 
		
		//printf("The file is now opened.\n") ; 
		
		// Write the dataToBeWritten into the file 
		if ( strlen ( dataToBeWrittenAns ) > 0 ) 
		{ 
			
			// writing in the file using fputs() 
			fputs(dataToBeWrittenAns, filePointer) ; 
			fputs("\n", filePointer) ; 
		} 
		
		// Closing the file using fclose() 
		fclose(filePointer) ; 
		
		printf("Data successfully written in file answer.c\n"); 
		printf("The file is now closed.\n") ; 
	} 
    

    }
int main( ) 
{ 

	// Declare the file pointer 

    int  cont=0;
    do{
    int choice;
    cont=0;

    printf("MENU \n 1.ASK QUESTION \n 2.REVIEW A QUESTION \n 3.ANSWER A QUESTION ! \n ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : ques();
        break;
        case 2 :review();
        break;
        case 3 :review();
        answer();
        break;
        default:printf("CHECK YOUR CHOICE");
    }
    printf("DO YOU WANT TO CONTINUE (1/0):");
    scanf("%d",&cont);
    //clrscr();


    }while(cont==1);
    
	return 0;		 
} 
