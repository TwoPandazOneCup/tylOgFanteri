#include <utility>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	vector<pair<string, string>> element(10);
  
  ifstream ist{"atom"};
  char c, it;
  int v = 1;
  int kolon;
  bool des = true;
  string linje;
  string namn;
  string designasjon;
  string input;
  string alleElement;

  //lese in frå fila
  while(ist >> c)
  {
	  
	  if(!des && c != ';') designasjon += c;
	  if( c == ':') des = false;
	  if(des) namn += c;

    
	  if( c == ';')
	  {
		  element[v].first = namn;
		  element[v].second = designasjon;

		  cout << element[v].second<<": \t" << element[v].first <<endl;
		  namn.clear();
		  designasjon.clear();
		  ++v;
		  des = true;
		  
	  }
		  
  }

  cin >> input;
  cout << input.at(0);
  char b = input.at(0);

  for(int i = 0; i < input.length(); ++i)
  {
	  if( b == e
  }
	  

  
        
}
