class expression
{
	friend class evaluate;
	// Variables utilisées dans "equilibre"
	stack<char> pile;
	ifstream file;
	char c;
	bool stop;
	bool fin;


	public :
		bool equilibre(char* filename);
};