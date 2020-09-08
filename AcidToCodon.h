#pragma once
#include <string>
using namespace std;

class AcidToCodon
{
public:
	int acid_to_MRNA(string acid, string *output); //turns acid to potential codons. Acid is the inputted acid, output is a variable in your code that will be the outputted codon
};