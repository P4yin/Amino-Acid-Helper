#include <iostream>
#include "AminoAcidConverter.h"
#include <string>
using namespace std;

string AminoAcidConverter::mRNA_to_acid(string x, int length)
{
	string acid;
	int a = 0;
	int b = 1;
	int c = 2;
	for (int i = 0; i < length / 3; i++)
	{
		if (x[a] == 'u')
		{
			if (x[b] == 'u')
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Phenylalanine";
				}
				else 
				{
					acid = "Leucine";
				}
			}
			else if (x[b] == 'c')
			{
				acid = "Serine";
			}
			else if (x[b] == 'a')
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Tyrosine";
				}
				else
				{
					acid = "STOP (Can code for Pyrrolysine)";
				}
			}
			else
			{
				if (x[c] == 'g')
				{
					acid = "Tryptophan";
				}
				else if (x[c] == 'a')
				{
					acid = "STOP (Can code for Selenocysteine)";
				}
				else
				{
					acid = "Cysteine";
				}
			}
		}
		else if (x[a] == 'c')
		{
			if (x[b] == 'u')
			{
				acid = "Leucine";
			}
			else if (x[b] == 'c')
			{
				acid = "Proline";
			}
			else if (x[b] == 'a')
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Histidine";
				}
				else
				{
					acid = "Glutamine";
				}
			}
			else
			{
				acid = "Arginine";
			}
		}
		else if (x[a] == 'a')
		{
			if (x[b] == 'u')
			{
				if (x[c] == 'g')
				{
					acid = "Methionine (also the starting amino acid)";
				}
				else
				{
					acid = "Isoleucine";
				}
			}
			else if (x[b] == 'c')
			{
				acid = "Threonine";
			}
			else if (x[b] == 'a')
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Asparagine";
				}
				else
				{
					acid = "Lysine";
				}
			}
			else
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Serine";
				}
				else
				{
					acid = "Arginine";
				}
			}
		}
		else
		{
			if (x[b] == 'u')
			{
				acid = "Valine";
			}
			else if (x[b] == 'c')
			{
				acid = "Alanine";
			}
			else if (x[b] == 'a')
			{
				if (x[c] == 'u' || x[c] == 'c')
				{
					acid = "Aspartic acid";
				}
				else
				{
					acid = "Glutamic acid";
				}
			}
			else
			{
				acid = "Glycine";
			}
		}
		cout << acid << endl;
		a += 3;
		b += 3;
		c += 3;
	}
	return "Converted all inputted RNA codons to their respective amino acids.\n"; //tells user that the process has finished
}