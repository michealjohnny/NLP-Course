#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  /*Time to declare all the bits and bobs
that I'll need for storing counts and strings*/
float countWords = 0, countChars = 0;
string wordcount;
double avg;
string shortest, longest, word;
ifstream myinput;
/*open the file and and stream contents to word*/
   myinput.open("text_file.txt");

   myinput >> word;
   shortest = longest = word;

/*while loop through the input so I can ++ and += when needed*/
while(myinput  >> word)

  {
    /*calc avg*/
    ++countWords;
    int len = word.size();
    countChars += word.size();
    avg = countChars/countWords;
    
    /*calc the long and short*/
    if(word.size() > longest.size())
       longest = word;
    else if (word.size() < shortest.size())
       shortest = word;
    
  }
/* output the biz */
cout << "Longest is: " << longest << ", " << longest.size() << endl;
cout << "Shortest is: " << shortest << ", " << shortest.size() << endl;
cout << "Avg word len: " << avg  << endl;
 
return 0;

}