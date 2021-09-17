//Typesetting problem
//The input file is a line without formal typesetting. Please write a program to restructure the
//input file, and print out the result in output file.
#include <fstream>
#include <iostream>
using namespace std;

// string replace(string str, char c, char d)
// {
//     string s1="";
//     for(int i=0;i<str.length();i++)
//     {
//         if(str[i]!=c)
//         s1=s1+str[i];
//         else
//         s1=s1+str[i]+d;
//     }
//     return s1;
// }

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    ifstream in_file(filename);
    if (in_file.fail())
    {
      cout << "File " << filename << " does not exist !!" << endl;
      exit(1);
    }

    ofstream modifiedFile;
    modifiedFile.open("ex10-2.out",ios::app);
    string textline; //all the text in alltextline
    char ch, buffer[10];
    int i = 0; int count = 0;
    while (!in_file.eof()) {
      in_file.get(ch);
      if (in_file.fail()) break;

      if (ch!=' ' && ch!=',' && ch!='.' && ch!='\n')
      {
        buffer[i++]=ch;
      }

      else
      {
        if (ch==',')
          buffer[i++]=',';
        else if (ch=='.')
          buffer[i++]='.';
        buffer[i]='\0';

        if (i!=0)
        {
          if (count==0)
          {
            cout << buffer;
            modifiedFile << buffer;
            count = i;
          }
          else if ((count = count + (i+1)) < 60)
          {
            cout << " " << buffer;
            modifiedFile << " " << buffer;
          }
          else
          {
            cout << '\n' << buffer;
            modifiedFile << '\n' << buffer;
            count = i;
          }

          if (ch=='.')
          {
            cout << '\n';
            modifiedFile << '\n';
            count = 0;
          }
        }
        i = 0;
      }
    }
    modifiedFile.close();
    in_file.close();

    return 0;
}
