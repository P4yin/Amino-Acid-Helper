#pragma once
#include <string>
using namespace std;

class AminoAcidConverter
{
public:
	string mRNA_to_acid(string codon, int length); //turns the mRNA codons into their respective amino acids. codon is the variable used to store inputted codons, length is the length of that stirng
};