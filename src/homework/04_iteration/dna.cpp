#include "dna.h"
#include <string>
#include <iostream>

using std::string;  using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_string(const string& dna)
{
    double count = 0; //number of times g or c appears
    int length = dna.length(); //length of string

    for(int i = 0; i <= length; i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'c') //non case sensitive loop
        {
            count++;
        }
    } 
    double total = count/length;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse_DNA = "";
    int length = dna.length();
    for(int i = length; i >= 0; i--)
    {
        reverse_DNA.push_back(dna[i]);
    }
    return reverse_DNA;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string revDNA = get_reverse_string(dna);
    int length = revDNA.length();
    for(int i = 0; i <= length; i++)
    {
        switch(revDNA[i])
        {
            case 'A':
                revDNA[i] = 'T';
                break;
            case 'a':
                revDNA[i] = 't';
                break;
            case 'T':
                revDNA[i] = 'A';
                break;
            case 't':
                revDNA[i] = 'a';
                break;
            case 'G':
                revDNA[i] = 'C';
                break;
            case 'g':
                revDNA[i] = 'c';
                break;
            case 'C':
                revDNA[i] = 'G';
                break;
            case 'c':
                revDNA[i] = 'g';
                break;
        }
    }
}
