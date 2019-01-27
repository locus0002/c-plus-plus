#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

/*
    STREAM
    PUT IN from a keyborad - source (entrance)
    PUT OUT to the file - destination (exit)
*/

/*
    STREAM FLAGS
    ios::in => INPUT - READING
    ios::out => OUTPUT - WRITE TO FILE, if there is no file then create it, if there is a file then
                                        truncate it (remove content) unless it occurs with ios::in flag
    ios::trunc => TRCUNCATE - it is trucating the file (cutting everything inside)
    ios::in => At The End - sets pointer at the end of file, the place of pointer can be changed in that mode,
                            it's possible to read and write in that mode
    ios::app => APPEND - the  content is added at the end of file (it's not posible to remove content nor adding something at the end of file)
    ios::binary => opens the file as a binary file
*/

/*
    STREAM ERROR FLAGS

    bad()   => badbit (1) - this function return true if there is an error like writting to file which opened only for reading (ios::in)
    fail()  => failbit (4) - returns true if we try to assign string to interger while reading from file or when badbit situtation happens
    good()  => goodbit (0) - return true if everything is fine (if any of the above flags are false)
    eof()   => eofbit (2) - returns true if the opened file to read reaches the end of file
    rdstate() => Read State
    clear() => clear state
*/

/*
    ANOTHER FUNCTIONS (WRITING)
    tellp => tell put - tell where is the putting pointer
    seekp => seek put - set writing (putting) pointer at specified position

    seekp(hom_many_bytes_from_the_flag_place, flag);

    FLAGS
    ios::beg => (begin) set from the begin (default)
    ios::end => set from the end
    ios::cur => (current) set from current place
*/

/*
    ANOTHER FUNCTIONS (READING)
    tellg => tell get - tell where is the reading pointer
    seekg => seek get - set reading pointer at specified position

    seekg(hom_many_bytes_from_the_flag_place, flag);

    FLAGS
    ios::beg => (begin) set from the begin (default)
    ios::end => set from the end
    ios::cur => (current) set from current place
*/

/*
    getline(where to store the extracted characters, how many characteres should be taken unless, separator(delimiter)) extracts seprators and delete it
    get(where to store the extracted characters, how many characteres should be taken unless, separator(delimiter)) doesn't extract seprators
    ignore(how many characteres to extracte AND TO IGNORE THEM, sperator) - extracts characters

    get() =>  this functions takes one character only
*/

/*
    read(where to read, how many bytes to read);
    put(character to put on stream)
    peek()
    putback()
    write()
    gcount() getcharacter count - get count of extracted chracters from last extraction operation
    memcmp it stands memory compare
*/

void createFile();
void createFile2();
void createFile3();
void createFile4();
void createFile5();
void createFile6();
void createFile7();
void createFile7_2();
void createFile8();
void createFile9();
void createFile10();
void createFile11();
void createFile12();
bool areFilesEqual(fstream *, fstream *);
int sizeFile(fstream *);

main(){
    createFile12();
    system("pause");
}

void createFile12(){
    
    fstream currentFile;
    currentFile.open("textSample.txt", ios::in | ios::binary);

    if(currentFile.is_open()){

        char buffer[250];
        do{
            currentFile.getline(buffer, 250);
            cout << buffer << " (size: " << currentFile.gcount() << ")" << endl;
        }while(!currentFile.eof());
    }else{
        cout << "This file was not opened" << endl;
    }
}

void createFile11(){
    fstream currentFile;
    currentFile.open("textSection14_1.txt", ios::out | ios::binary);
    if(currentFile.is_open()){
        char sampleText[] = "Sample text";
        cout << sampleText << " size: " << sizeof(sampleText) << endl;
        //currentFile << sampleText;
        currentFile.write(sampleText, sizeof(sampleText)-1); //this function will write everithing even though characters that don't exist in the keyboard
    }
}

void createFile10(){
    char currentCharacter = cin.get(); // this will extract the first character
    cin.putback(currentCharacter); //this function will recovery the extracted chracter
    if(currentCharacter > '0' && currentCharacter < '9'){
        int number;
        cin >> number;
        cout << "Number is:" << number << endl;
    }else{
        string text;
        cin >> text;
        cout << "Text is:" << text << endl;
    }
}

void createFile9(){
    char currentCharacter = cin.peek(); // this will not extract the first character instead of get()
    if(currentCharacter > '0' && currentCharacter < '9'){
        int number;
        cin >> number;
        cout << "Number is:" << number << endl;
    }else{
        string text;
        cin >> text;
        cout << "Text is:" << text << endl;
    }
}

void createFile8(){
    string currentString = "thisisatest";
    for(int i=0; i<currentString.length(); i++){
        cout.put(currentString[i]).put(' ');
    }
    fstream myFile;
    myFile.open("textSection14_1.txt", ios::out | ios::binary);
    if(myFile.is_open()){
        char c;
        do{
            c = cin.get();
            myFile.put(c);
        }while(c!='.');
    }else{
        cout << "There was a problem trying opening the file" << endl;
    }
}

void createFile7_2(){
    fstream fileOne;
    fstream fileTow;
    fileTow.open("textSection14_1.txt", ios::in | ios::binary | ios::ate);
    fileOne.open("textSection14.txt", ios::in | ios::binary | ios::ate);
    
    if(fileOne.is_open() && fileTow.is_open()){
        if(areFilesEqual(&fileOne, &fileTow)){
            cout << "The files are equal" << endl;
        }
        
    }else{
        cout << "Error" << endl;
    }
}

bool areFilesEqual(fstream *fileOne, fstream *fileTwo){
    int fileOneSize = sizeFile(fileOne);
    int fileTwoSize = sizeFile(fileTwo);
    if(fileOneSize == fileTwoSize){

        char *fileOneBuffer = new char[fileOneSize];
        char *fileTwoBuffer = new char[fileOneSize];
        fileOne->read(fileOneBuffer, fileOneSize);
        fileTwo->read(fileTwoBuffer, fileOneSize);

        if(memcmp(fileOneBuffer, fileTwoBuffer, fileOneSize) != 0){

            cout << "Files are not equal" << endl;
            delete [] fileOneBuffer;
            delete [] fileTwoBuffer;
            return false;
        }

        delete [] fileOneBuffer;
        delete [] fileTwoBuffer;
        return true;
    }else{
        cout << "The files are different because of their size" << endl;
        return false;
    }
}

int sizeFile(fstream *currentFile){
    currentFile->seekg(0, ios::end);
    int size = currentFile->tellg();
    currentFile->seekg(0, ios::beg);
    return size;
}

void createFile7(){
    fstream myFileHandler;
    myFileHandler.open("textSection14_1.txt", ios::in | ios::binary | ios::ate);
    
    if(myFileHandler.is_open()){

        int fileOfSize = myFileHandler.tellg();
        char *buffer = new char[fileOfSize];
        myFileHandler.seekg(0, ios::beg);
        myFileHandler.read(buffer, fileOfSize);
        cout << buffer << endl;
        delete []buffer;
    }else{
        cout << "Error" << endl;
    }
}

void createFile6(){
    
    fstream myFileHandler;
    myFileHandler.open("textSection14_1.txt", ios::in);
    
    if(myFileHandler.is_open()){
        cout << "file was opened correctly" << endl;
        char buffer[50];
        // myFileHandler.getline(buffer, 50, '\n');
        // cout << buffer << endl << endl;
        // while(myFileHandler.getline(buffer, 50, '\n')){
        //     cout << buffer << endl;
        // }

        // while(myFileHandler.get(buffer, 50, '\n')){
        //     myFileHandler.ignore(1);
        //     cout << buffer << endl;
        // }

        char first, second;
        first = myFileHandler.get();
        myFileHandler.ignore(40, ' ');
        second = myFileHandler.get();
        cout << first << second << endl;
        myFileHandler.close();
    }else{
        cout << "file was NOT opened correctly" << endl;
    }
}

void createFile5(){
    
    fstream myFileHandler;
    myFileHandler.open("textSection14_1.txt", ios::out);
    if(myFileHandler.is_open()){
        cout << "file was opened correctly" << endl;
        string newLine = "this is a new text for the file";
        myFileHandler << newLine;
        cout << "The current position is: " << myFileHandler.tellp() << endl;
        myFileHandler.seekp(0,ios::beg);
        myFileHandler << "WORD";
        myFileHandler.close();
    }else{
        cout << "file was NOT opened correctly" << endl;
    }
}

void createFile4(){
    
    fstream myFileHandler;
    myFileHandler.open("textSection14_1.txt", ios::in);

    if(myFileHandler.is_open()){
        cout << "file was opened correctly" << endl;
        string buffer, temp;

        myFileHandler.seekg(0, ios::end);
        streampos sizeOfFile = myFileHandler.tellg();
        myFileHandler.seekg(0); // this instruction sets the pointer in the beginning of the file beceuse we want to read it

        cout << "The size of the file is: " << sizeOfFile << " bytes" << endl;

        do{
            myFileHandler >> temp;
            buffer += temp;
        }while(!myFileHandler.eof());
        cout << "Data: " << buffer << endl;

        if((myFileHandler.rdstate() ^ myFileHandler.eofbit) == 0){
            myFileHandler.clear();
        }

        myFileHandler.close();
    }else{
        cout << "file was opened uncorrectly" << endl;
    }
}

void createFile3(){
    fstream myFileHandler;
    myFileHandler.open("textSection14_1.txt", ios::in);
    if(myFileHandler.is_open()){
        cout << "file was opened correctly" << endl;
        myFileHandler << "Another line" ;
        if(myFileHandler.bad()){
            // if there is an error the system must clear the state, after that, it is possible reading the file
            myFileHandler.clear();
        }
        string buffer, temp;
        do{
            myFileHandler >> temp;
            buffer += temp;
        }while(!myFileHandler.eof());
        cout << "Data: " << buffer << endl;
        int bufferInt;
        myFileHandler >> bufferInt;
        cout << "Data integer: " << bufferInt << endl;
        if(myFileHandler.fail()){
            cout << "The system is trying storing a string into integer variable " << endl;
        }
        if((myFileHandler.rdstate() ^ myFileHandler.eofbit) == 0){
            myFileHandler.clear();
            // set indicator of place in file to some other place
            // some other operations on file
            //check out "myFileHandler::eofbit"
        }
        cout << "The good flag is: " << myFileHandler.good() << endl;
        myFileHandler.close();
    }else{
        cout << "file was opened uncorrectly" << endl;
    }
}

void createFile2(){
    fstream myFileHandler;
    /*
        New File: it creates a new file and and adds content inside of it
        Existed File: it opens an existed file, removes all data inside and adds new data
    */
    // myFileHandler.open("textSection14_1.txt", ios::out);
    /*
        New File: it doesn't create a new file
        Existed File: it opens an existed file, removes all data inside and adds new data
    */
    // myFileHandler.open("textSection14.txt", ios::out | ios::in);
    /*
        New File: it doesn't create a new file
        Existed File: it opens an existed file and adds new data at the end of it
    */
    // myFileHandler.open("textSection14.txt", ios::out | ios::in | ios::ate);
    /*
        New File: it creates a new file and and adds content inside of it
        Existed File: it opens an existed file and adds new data at the end of it
    */
    myFileHandler.open("textSection14_1.txt", ios::out | ios::app);

    if(myFileHandler.is_open()){
        cout << "the file was opened correctly" << endl;
        myFileHandler << "This is a new text " << endl;
        myFileHandler.close();
    }else{
        cout << "the file was NOT opened correctly" << endl;
    }
}

void createFile(){
    fstream myFileHandler;
    myFileHandler.open("textSection14.txt");
    if(myFileHandler.is_open()){
        cout << "The document was opened properly" << endl;
        //Here the system is overwritten the file with the operator <<
        myFileHandler << "This is a text example";
        myFileHandler.close();
    }
}