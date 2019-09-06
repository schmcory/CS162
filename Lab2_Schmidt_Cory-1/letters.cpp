/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/21/2018
 ** Description: Letters.cpp is the letters (count, output) functions implementation file
 *********************************************************************/

//header files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//"letter.hpp" is the letters function header file
#include "letters.hpp"

//Function that count letter frequency count
void count_letters(ifstream &fin, int* count)
{
    string paragraph="", line;
    int i = 0;
    char character;
    
    //Reading a line of text
    while (getline(fin, line))
    {
        //If paragraph ends here
        if (line.empty())
        {
            break;
        }
        else
        {
            //Concatenating lines
            paragraph += line + ' ';
        }
    }
    
    // Removing extra white space
    paragraph.erase(paragraph.length() -1 );
    
    //Initially set all values to 0
    for(i=0; i<26; i++)
    {
        count[i] = 0;
    }
    
    //Frequency Count
    for(i=0; i<paragraph.length(); i++)
    {
        //Extracting a single character
        character = tolower(paragraph[i]);
        
        //Checking for character
        if((int)character >= 97 && (int)character <= 122)
        {
            //Updating count
            count[(int)character - 97] += 1;
        }
    }
}


//Function that writes results to output file
void output_letters(ofstream &fout, int* count)
{
    int i;
    
    //Frequency Count
    for(i=0; i<26; i++)
    {
        //Writing to file
        fout << (char)(i + 97) << " - " << count[i] << "\n " ;
    }
}
