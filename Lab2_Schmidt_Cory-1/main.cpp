/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/21/2018
 ** Description: Main function file for Lab 2
 *********************************************************************/

//header files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//letters.hpp is the letters function header file
#include "letters.hpp"

int main()
{
    //Declaration of variables
    ifstream fin;
    ofstream fout;
    string ipFileName, opFileName;
    int count[26] = {0}, i=1;
    
    //Get input file name from the user
    cout << "Enter input file name: ";
    cin >> ipFileName;
    
    //Open input file
    fin.open(ipFileName.c_str());
    
    //Loop through file
    while(fin.good())
    {
        //Count letters
        count_letters(fin, count);
        
        //Get output file name from the user
        cout << "Enter output file name for paragraph " << i << ": ";
        cin >> opFileName;
        
        //Update number of paragraphs
        i = i + 1;
        
        //Open output file
        fout.open(opFileName.c_str());
        
        //Count letter frequency
        output_letters(fout, count);
        
        //Close output file
        fout.close();
    }
    
    //Close input file
    fin.close();
    cout << "\n\n";
    return 0;
}
