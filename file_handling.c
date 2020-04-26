#include <stdio.h>   //importing standard input output library
#include <string.h>   //importing string library
#define NEWS 4000     //news buffer to store news data
#define MAX_bUFFER 8000    //token buffer to store temp tokens
int new_Data();       //new_data() function declaration
int tokenizer(); //tokenizer() function declaration
int Copied_File();    //Copied_File to copy the content of admin_file.txt to a Copy.txt file is declared
int new_Data(){        //definition
    char Enter[NEWS];   //character array to store the piece of news entered by the user
    printf("Enter the piece of new item:");     //User input
    scanf("%[^;]s",Enter);

    FILE *new_file;       //File pointer to refer to admin_file.txt
    new_file=fopen("admin_file.txt","w+");    //open admin file.txt in write mode
    if(new_file==NULL)     //if file pointer is null
    {
        printf("File does not exist\n");    //place this message
        return 0;
    }
    else{
        fputs(Enter,new_file); }        //Writing onto file
       fclose(new_file);         //closing file
        }
int tokenizer(){       //tokenizer() definition
    char Line[MAX_bUFFER];    //character array to store stream of characters
    FILE *token,*new_file;   //file pointers for referring to files token and new_file
    new_file=fopen("admin_file.txt","r");   //opening admin_file.txt in read mode
    token=fopen("latest_token.txt","w");    //opening latest_token.txt in write mode
    if(token==NULL)      //if fill pointer is NULL
    {
        printf("File does not exist\n");   //display this message
        return 0;
    }
    else{
        printf("\n\nNews item entering into the file!");  //print message
        printf("\nNext step is tokenisation!");       //print message
        while(fgets(Line,sizeof(Line),new_file)){   //while all the char in the Line buff are written to the file
            char *tok=strtok(Line," ");    //char pointer tok to split the line till first space is encountered
            fputs(tok,token);    //tok written into the token file
            while(tok!=NULL){    //While tok is not Null
                tok=strtok(NULL," ");   //split the sentences into tokens
                fputs("\n",token);    //separated with a newline character
                fputs(tok,token);     //write onto the token file
            }
        }
        printf("\nTokenization done!");   //Tokenization completed
        printf("\nNext is Comparison");    //Ready for comparison
        }
    fclose(token);   //closing both the files
    fclose(new_file);
}

int Copied_File(){    //defining Copied_File() function
    FILE *fptr1,*fptr2;    //file references to the pointers
    char ch;     //declaring a ch variable
    fptr1=fopen("admin_file.txt","r");     //Opening admin_file.txt by location in read mode
    fptr2=fopen("Copy.txt","w");       //Opening Copy.txt by loction in write mode
    if(fptr1==NULL){       //if the file pointer is NULL
        printf("\nCannot Open File");     //print this message
        return(0);
    }
    else{
        ch=fgetc(fptr1);     //Getting first character in ch variable
        while(ch!=EOF){     //while ch reaches End Of File
            fputc(ch,fptr2);   //Write the content in Copy.txt file
            ch = fgetc(fptr1);    //Iterate to get the entire file content in Copy.txt file
        }
    printf("\nContents Copied!!");    //Print this Message Once the work is done
    }
    fclose(fptr1);      //close the admin_file.txt file
    fclose(fptr2);      //close the Copy.txt file
    return(0);
}
int main(){ //in main
    new_Data();     //call new_Data()
    tokenizer();    //call tokenizer()
    Copied_File();   //call Copied_File()
    printf("\nExitting Main");  //print message
    }

