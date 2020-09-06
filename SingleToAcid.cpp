#include <iostream>
#include <string>
#include "SingleToAcid.h"
using namespace std;

string SingleToAcid::convert(string input)
{
	string acid;
	int a = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[a] == 'a')
		{
			acid = "Alanine";
		}
		else if (input[a] == 'r')
		{
			acid = "Arginine";
		}
		else if (input[a] == 'n')
		{
			acid = "Asparagine";
		}
		else if (input[a] == 'd')
		{
			acid = "Aspartic acid";
		}
		else if (input[a] == 'c')
		{
			acid = "Cysteine";
		}
		else if (input[a] == 'q')
		{
			acid = "Glutamine";
		}
		else if (input[a] == 'e')
		{
			acid = "Glutamic acid";
		}
		else if (input[a] == 'g')
		{
			acid = "Glycine";
		}
		else if (input[a] == 'h')
		{
			acid = "Histidine";
		}
		else if (input[a] == 'i')
		{
			acid = "Isoleucine";
		}
		else if (input[a] == 'l')
		{
			acid = "Leucine";
		}
		else if (input[a] == 'k')
		{
			acid = "Lysine";
		}
		else if (input[a] == 'm')
		{
			acid = "Methionine";
		}
		else if (input[a] == 'f')
		{
			acid = "Phenylalanine";
		}
		else if (input[a] == 'p')
		{
			acid = "Proline";
		}
		else if (input[a] == 's')
		{
			acid = "Serine";
		}
		else if (input[a] == 't')
		{
			acid = "Threonine";
		}
		else if (input[a] == 'w')
		{
			acid = "Tryptophan";
		}
		else if (input[a] == 'y')
		{
			acid = "Tyrosine";
		}
		else if (input[a] == 'v')
		{
			acid = "Valine";
		}
		else if (input[a] == 'u')
		{
			acid = "Selenocysteine";
		}
		else if (input[a] == 'o')
		{
			acid = "Pyrrolysine";
		}
		a += 1;
		cout << acid << endl;
	}
	return "Converted all inputted 1 letter amino acid codes to their respective amino acids.\n";
}