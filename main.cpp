// a population growth counter
//
// You can use this file for anything, 
// and you can also develop this software according to what you want.
//
// Give me a star on https://github.com/Wahyunaa/population-growth-counter
//
// Copyright (C) 2022 Wahyuna.

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){system("cls");
	unsigned int maxLine = 35;
	string middle = " ";
	string language, menu;
	for(int LanguageMenu = 1; LanguageMenu <2;){
  for(int line = 1; line <= maxLine; line++ ){
  	cout << "_";
  }
  cout << endl << endl;
	#include "info/software.cpp"
	for(int i=1;i<=5;i++){
  cout << middle;
}
  cout << softwareName << endl;
  for(int line = 1; line <= maxLine; line++ ){
  	cout << "_" ;
  }
  cout << endl << endl;
  cout << "Language: \n\n [1] English \n [2] indonesia\n\n";
  cout << "select a language: ";
  cin >> language;
  if(language == "1"){
    for (short ifTrue = 1; ifTrue < 2;){
    system("cls");
for(int line = 1; line <= maxLine; line++ ){
  	cout << "_";
  }
  cout << endl << endl;
 for(int i=1;i<=5;i++){
  cout << middle;
}
  cout << softwareName << endl;
  for(int line = 1; line <= maxLine; line++ ){
  	cout << "_" ;
  }
  cout << endl << endl; 
    // default language
    LanguageMenu = 2;
    cout << "Menu:\n\n [1] Total\n [2] Natural"<< endl;
  cout << "\nSelect menu: ";
  cin >> menu;
  if(menu == "1"){system("cls");
  ifTrue = 2;
for(int line = 1; line <= maxLine; line++ ){
  	cout << "_";
  }
  cout << endl << endl;
 for(int i=1;i<=5;i++){
  cout << middle;
}
  cout << softwareName << endl;
  for(int line = 1; line <= maxLine; line++ ){
  	cout << "_" ;
  }
  cout << endl << endl;
  long lm, ie, l, m, i, e, pt; cout << "Total population growth counter\n\n Birth: "; cin >> l;  cout << " Dead: ";  cin >> m;  cout << " Immigration: ";  cin >> i;  cout << " Emigration: ";  cin >> e;  lm = l - m;  ie = i - e;  pt = lm + ie;  cout << endl << "Total population growth rate: " << pt << endl;
  } else if(menu == "2"){system("cls");
  ifTrue = 2;
for(int line = 1; line <= maxLine; line++ ){
  	cout << "_";
  }
  cout << endl << endl;
 for(int i=1;i<=5;i++){
  cout << middle;
}
  cout << softwareName << endl;
  for(int line = 1; line <= maxLine; line++ ){
  	cout << "_" ;
  }
  cout << endl << endl;                 
     long pa, l, m;
     cout << "Natural population growth counter\n\n Birth: ";
     cin >> l; cout << " Dead: "; cin >> m; pa = l - m; cout << endl;  cout << "Natural population growth rate: " << pa << endl;
  }else{
    cout << "\n\nPlease choose correctly! \n" << endl;
    sleep(1);
     system("cls");
  }
    }
  } else if (language == "2"){
   // indonesia language
   LanguageMenu = 2;
   #include "language/id.cpp"
  } else {
    cout << "\nPlease choose correctly!\n\n";
  sleep(1);
    system("cls");
  }
    }
  cin.get();
  return 0;
}
