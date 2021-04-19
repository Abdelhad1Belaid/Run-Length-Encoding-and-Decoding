#include "decoding.h"
#include "encoding.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool exit(bool f){
	system("clear");
	cout << "Exiting ...\n";
	system("sleep 2");
	f = false;
	return f;
}

bool try_again(bool f){
	system("clear");
	f = true;
	return f;
}

void play(){
	string str;
	char choice;
	bool flag = true;
	while(flag){
      cout <<" -------------------------------------------------\n|____Run-Length Encoding & Decoding Algorithm____|\n -------------------------------------------------\n";
      cout << "Encode [E] / Decode [D] / Quit [Q] / Clear [C] =>";
      cin >> choice;
	  if (choice == 'E'){
	      cout << "Enter a String To Encode =>";
	      cin >> str;
	      string encod = run_length_encoding(str);
	      cout << "Encoded => \t" << encod << endl;
	  }else if(choice == 'D'){
	      cout << "Enter a String To Decode =>";
	      cin >> str;
	      string decod = run_length_decoding(str);
	      cout << "Decoded => \t" << decod << endl;
	  }else if(choice == 'C'){
	      system("clear");
	  }else if(choice == 'Q'){
	      flag = exit(flag);
	  }else{
	      char q;
	      system("clear");
	      cout << "Ooops, Wrong Choice .\nTry using only [E, D, Q, C] Capitalized\n"<<endl;
	      cout << "Try again..[y/n]:";
	      cin >>q;
	      if(q == 'y'){
	          flag = try_again(flag);
	      }else{
	          flag = exit(flag);
	      }
	  }
  }
}
