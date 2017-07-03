#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int count_the_word(string filename, string word)
{
    ifstream data_store;
    string line_of_text;
    int counter = 0;
    data_store.open(filename.c_str());
    if (!data_store)
    {
        cout<<"File not found\n";
        return 0;
    }
        while(!data_store.eof())
    {
        data_store >> line_of_text;
        if (line_of_text == word)
        {
            counter++;
        }

    }
    data_store.close();
    return counter;
}
