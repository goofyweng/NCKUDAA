// file: lab10-2.cpp
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    const char *filename;
    string ifilename;
    cout << "Enter the filename:";
    cin >> ifilename;
    filename = ifilename.c_str();
    ofstream out_file(filename);
    int n;
    cout << "Enter an number:";
    cin >> n;
    for (int idx = 0; idx < n; idx++)
    {
        out_file << idx << endl;
    }
    cout << "Write file lab10-2.txt done!" << endl;
    out_file.close();
    return 0;
}
