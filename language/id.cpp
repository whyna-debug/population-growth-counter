// indonesia language 
//
// This software is free to use,
// and you can also develop this software as you wish.
//
// Give me a star on https://github.com/Wahyunaa/population-growth-counter
//
// Copyright (C) 2022 Wahyuna.

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
    LanguageMenu = 2;
    cout << "Menu:\n\n [1] Total\n [2] Alami"<< endl;
  cout << "\nPilih menu: ";
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
  long lm, ie, l, m, i, e, pt; cout << "Penghitung pertumbuhan penduduk total\n\n Kelahiran: "; cin >> l;  cout << " Kematian: ";  cin >> m;  cout << " Imigrasi: ";  cin >> i;  cout << " Emigrasi: ";  cin >> e;  lm = l - m;  ie = i - e;  pt = lm + ie;  cout << endl << "Tingkat pertumbuhan penduduk total: " << pt << endl;
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
     cout << "Penghitung pertumbuhan peduduk alami\n\n Kelahiran: ";
     cin >> l; cout << " Kematian: "; cin >> m; pa = l - m; cout << endl;  cout << "Tingkat pertumbuhan penduduk alami: " << pa << endl;
  }else{
    cout << "\n\nMohon pilih menu dengan benar!\n" << endl;
    sleep(1);
     system("cls");
  }
    }
    
    
    
    
    
