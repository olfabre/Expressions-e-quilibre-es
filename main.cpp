#include<iostream>
#include <fstream>
#include <stack>

using namespace std;

#include "expression.h"

int main(int argc,char** argv)
{
	expression expr;

	
	if(argc < 2)
		cout << "Nombre d'arguments insuffisants" << endl;
	else{
		if(expr.equilibre(argv[1]))
			cout << "0K" << endl;
		else
			cout << "KO" << endl;
	}


	return(1);
}