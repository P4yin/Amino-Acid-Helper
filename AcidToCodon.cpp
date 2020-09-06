#include <iostream>
#include "AcidToCodon.h"
#include <string>

int AcidToCodon::acid_to_MRNA(string acid, string *output)
{
	int type = 0; //0 if correct
	if (acid == "alanine")
	{
		*output = "GCU, GCC, GCA, GCG"; //omg gcc
	}
	else if (acid == "arginine")
	{
		*output = "CGU, CGC, CGA, CGG, AGA, AGG";
	}
	else if (acid == "asparagine")
	{
		*output = "AAU, AAC";
	}
	else if (acid == "aspartic acid")
	{
		*output = "GAU, GAC";
	}
	else if (acid == "cysteine")
	{
		*output = "UGU, UGC";
	}
	else if (acid == "glutamine")
	{
		*output = "CAA, CAG";
	}
	else if (acid == "glutamic acid")
	{
		*output = "GAA, GAG";
	}
	else if (acid == "glycine")
	{
		*output = "GGU, GGC, GGA, GGG";
	}
	else if (acid == "histidine")
	{
		*output = "CAU, CAC";
	}	
	else if (acid == "isoleucine")
	{
		*output = "AUU, AUC, AUA";
	}	
	else if (acid == "leucine")
	{
		*output = "UUA, UUG, CUU, CUC, CUA, CUG";
	}
	else if (acid == "lysine")
	{
		*output = "AAA, AAG";
	}
	else if (acid == "methionine")
	{
		*output = "AUG";
	}
	else if (acid == "phenylalanine")
	{
		*output = "UUU, UUC";
	}
	else if (acid == "proline")
	{
		*output = "CCU, CCC, CCA, CCG";
	}
	else if (acid == "serine")
	{
		*output = "UCU, UCC, UCA, UCG, AGU, AGC";
	}
	else if (acid == "threonine")
	{
		*output = "ACU, ACC, ACA, ACG";
	}
	else if (acid == "tryptophan")
	{
		*output = "UGG";
	}
	else if (acid == "tyrosine")
	{
		*output = "UAU, UAC";
	}
	else if (acid == "valine")
	{
		*output = "GUU, GUC, GUA, GUG";
	}
	else if (acid == "pyrrolysine")
	{
		*output = "UAG";
	}
	else if (acid == "selenocysteine")
	{
		*output = "UGA";
	}
	else
	{
		*output = "";
		type = 1;
	}
	return type;
}