#include <iostream>
#include <fstream>
using namespace std;

int main (){

    int i, temp;
    int variable_counter = 1;
    string statement;


    ifstream MyReadFile("lex_input.txt");
    while (getline (MyReadFile, statement)) {
    cout << statement;
}
MyReadFile.close();

    cout << "The entered statement was:" << statement << endl;
     cout<<endl;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2' || statement[0] == '3' || statement[0] == '4' || statement[0] == '5' || statement[0] == '6' || statement[0] == '7' || statement[0] == '8' || statement[0] == '9' )
	    {
	    cout<<endl;
	    cout<<"There's a Lexical Error"<<endl;
	     cout<<endl;
	    return 0;
	    }
    else
    {
	    cout<< "<id, 1 >";
	    //print variable_counter
	    //print >
    }

    for (i = 1; i < statement.length (); i++){
		if (statement[i] == '='){

			break;

	}
    }
    cout<<"<=>";


    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' || statement[temp + 1] == '3' ||  statement[temp + 1] == '4' || statement[temp + 1] == '5' || statement[temp + 1] == '6' || statement[temp + 1] == '7' ||  statement[temp + 1] == '8' || statement[temp + 1] == '9' )
        {

         cout<<"There's a Lexical Error";

	    return 0;
        }
	else
    {

	    variable_counter ++;
	    cout<<"< 24 >";
	    //print variable_counter>
    }

	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == '+'){
			break;
		}
    }

    cout<<"<%>";


    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' || statement[temp + 1] == '2' || statement[temp + 1] == '3' ||  statement[temp + 1] == '4' || statement[temp + 1] == '5' || statement[temp + 1] == '6' || statement[temp + 1] == '7' ||  statement[temp + 1] == '8' || statement[temp + 1] == '9' )
	    {

         cout<<"There's a Lexical Error"<<endl;
	    return 0;
        }
	else
	     {

	    variable_counter ++;
	    cout<<"< 10 >";
	    //print variable_counter>
    }

	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == ';'){
			break;
		  }
    }

  cout<<"<;>";
   cout<<endl;

  return 0;
}





