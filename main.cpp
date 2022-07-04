#include <string>
#include <iostream>

using namespace std;

string doubleSpace(string sente)
{
    
    // https://www.w3schools.com/cpp/cpp_strings_access.asp
    for(int i = 0; i < sente.length(); i++){
      while((sente[i] == ' ') && (sente[i+1] == ' ')){
        sente.erase(i,1);
      }
    }

    return sente;

}

int main()
{
  string sentence = "You should, should you be interested, look for for more information online";
  //getline(cin, sentence);
  // manipulate the sentence here
  int numSpaces = 0;
  string output = "";

  for(int x = 0; x < sentence.length(); x++){
    if(sentence[x] == ' '){
      numSpaces++; 
    } 
  }
  string words[numSpaces];
  for(int i = 0; i < numSpaces; i++){
    words[i] = sentence.substr(0, sentence.find(' '));

    sentence.erase(0, sentence.find(' ') + 1);
    }
  
  for(int x = 0; x <= numSpaces; x++){
    for(int y = 0; y <= numSpaces; y++){
      if((words[x] == words[y]) && (x != y)){
        words[x] = ' ';
      }
    }
    output += words[x];
    output += ' ';
  }
  // better way
  /*
  for(int x = 0; x < index_of_array; x++){
    if(words[x] == words[x+1])
      words[x] = "";
  }
  for(int x = 0; x < index_of_array; x++){
    if(words[x] != "")
    cout << words[x] << " ";
  }
  */
  
  cout << doubleSpace(output) << "\n";
}
// function to just delete word then just add to an output string then compare every word as you chop it off

    // string sentence = "You should, should you be interested, look for for more information online";
    // //getline(std::cin, sentence);
    // // manipulate the sentence here

    // int space = sentence.find(' ');
    // cout << space << endl;
    // string  word = "";
    // word = sentence.substr(0, space);


    // if(sentence.find(word, space) < sentence.length())
    //   {
    //   cout << "Found: " << sentence.find(word, space + 1) << endl;
    //   while(sentence.find(word, space) < sentence.length()){
    //       sentence.erase(sentence.find(word, space -1 ), word.length() + 1);
    //     }
    //   }
    // else
    // {
    //   cout << "Not Found" << endl;
    //   bool found = false;
    //   int x = space + 1, nextSpace;
    //   while(!found){
    //     if(sentence.at(x) == ' '){
    //       nextSpace = x;
    //       found = true;
    //     }
    //   x++;}
    //   word = sentence.substr(space + 1, nextSpace - space);
    //   cout << "2nd word is: " << word << endl;
    // }

    // if(sentence.at(sentence.length()-1 == ' ')){
    //   sentence.erase(sentence.length() - 1, 1);
    // }
    // cout << sentence << "!!" << "\n";