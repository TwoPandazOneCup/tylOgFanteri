#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>


struct Goldilock
{
	int vekt;
	int temp;
};

using namespace std;

int main()
{
	ifstream ifs{"f"};
	stringstream buffer;
	buffer << ifs.rdbuf();
	string contents(buffer.str());
	vector<pair<int,int>> input;
	vector<int> resultat;

	char c;
	int i = 0;
	int linje = 0;
	int temperatur = 0;
	int vekt = 0;
	int mid = 0;
	int retteLinje[128];
	for( int i = 0; i < 127; ++i)
		retteLinje[i] = 0;

	Goldilock g;
	string tal;

	//cout << contents;

	
	while(contents.at(i) != ';' )
	{
		c = contents.at(i);
		//cout << static_cast<int>(c) <<endl;
		if(c == '\n' || c == ' ')
		{
			mid = stoi(tal);
			
			if( c == ' ')
			{
				vekt = mid;
				if(linje == 0)
					g.vekt = vekt;
			
			}
			if( c == '\n')
			{
				temperatur = mid;
				
				if (linje == 0)
					g.temp =  temperatur;
				else
					input.push_back(make_pair(vekt, temperatur));
				
							
			}
			tal.clear();

			if(c == '\n')
				++linje;
		}
		else
		{
			tal += c;
			
		}
		
		++i;
			
	}
	cout << g.vekt << " " <<g.temp <<endl;
	cout <<"vekt\t" << "temperaturar" << endl;
	
	for (int i = 0; i < input.size(); ++i)
		cout << input[i].first << "\t" <<input[i].second<< endl;

	for(int i = 0; i < input.size(); ++i)
		if(input[i].first > g.vekt && input[i].second < g.temp)
			resultat.push_back(i + 1);
	for(int i = 0; i < resultat.size() ; ++i)
		cout << resultat[i] << " " <<endl;

}
	
