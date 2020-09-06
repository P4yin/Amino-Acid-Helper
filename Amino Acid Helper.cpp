#include <iostream>
#include <algorithm>
#include "AminoAcidConverter.h"
#include "AcidToCodon.h"
#include "SingleToAcid.h"
#include <string>
using namespace std;

int main()
{
    int state = 0; //program state 
    int length;
    string init, input, output, temp; //input, output, and intilaization option
    AminoAcidConverter obj; //object
    AcidToCodon xd;
    SingleToAcid ree;
    while (true)
    {
        while (state == 0) //prompts n stuff
        {
            cout << "What operation would you like to do:\nType '1' to convert codons to their repective Amino Acids.\nType '2' to convert the 1 letter code for Amino Acids to the Amino Acid's name:\nType '3' to convert an Amino Acid to it potential codons:\n";
            input = "";
            getline(cin, init);
            if (init == "1")
            {
                state = 1;
                break;
            }
            else if (init == "2")
            {
                state = 2;
                break;
            }
            else if (init == "3")
            {
                state = 3;
                break;
            }

        }
        while (state == 1) //codon to acid(s)
        {
            cout << "Type in the of the messenger RNA codon(s) you want to convert to their respective Amino Acids: (all spaces and non 'A', 'G', 'C', and 'U' characters will be removed):\n";
            getline(cin, temp);
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] == 'a' || temp[i] == 'u' || temp[i] == 'c' || temp[i] == 'g')
                {
                    input += temp[i];
                }
            }
            length = input.length();
            if (length % 3 == 0)
            {
                cout << obj.mRNA_to_acid(input, length) << endl;
                state = 0;
            }
            else
            {
                cout << "You are missing or have too many neucleotide bases. Try again. There are currently " << length << " nucleotide bases.\n";
                state = 0;
            }
        }
        while (state == 2)
        {
            cout << "Type in the 1 letters codes of the Amino Acids that you want to convert to their respective Amino Acid: (all spaces and characters not used to represent an amino acid will be removed):\n";
            getline(cin, temp);
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] == 'a' || temp[i] == 'r' || temp[i] == 'n' || temp[i] == 'd' || temp[i] == 'c' || temp[i] == 'q' || temp[i] == 'e' || temp[i] == 'g' || temp[i] == 'h' || temp[i] == 'i' || temp[i] == 'l' || temp[i] == 'k' || temp[i] == 'm' || temp[i] == 'f' || temp[i] == 'p' || temp[i] == 's' || temp[i] == 't' || temp[i] == 'w' || temp[i] == 'y' || temp[i] == 'v' || temp[i] == 'u' || temp[i] == 'o')
                {
                    input += temp[i];
                }
            }
            cout << ree.convert(input) <<endl;
            state = 0;
        }
        while (state == 3)
        {
            int type;
            string acid;
            cout << "Type in the name of the Amino Acid that you want to know the potential list of codons for: (***be sure to only input 1***)\n";
            getline(cin, temp);
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] != '.' && temp[i] != '\\' && temp[i]  != '/')
                {
                    input += temp[i];
                }
            }
            type = xd.acid_to_MRNA(input, &acid);
            if (type == 0)
            {
                cout << "The potential codons that will code for the inputted acid are" << acid << endl <<endl;
            }
            else
            {
                cout << "The name of the acid you inputted does not seem to exist. \nPlease check your input and try again.\n\n";
            }
            state = 0;
        }
    }
}