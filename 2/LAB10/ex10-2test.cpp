#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    FILE *fp;
    char c, buffer[20];
    int count = 0;
    int i;
    ofstream modifiedFile;
    modifiedFile.open("ex10-2.out",ios::app);
    fp = fopen("ex10-2.1.txt","r");
    while(true)
    {
        i = 0;
        while((c = fgetc(fp))!=EOF && c!=' ' && c!=',' && c!='.' && c!='\n')
            buffer[i++] = c;
        if(c == EOF)
            break;
        else if(c == ',')
            buffer[i++] = ',';
        else if(c == '.')
            buffer[i++] = '.';
        buffer[i] = '\0';

        if(i != 0)
        {
            if(count == 0)
            {
                cout << buffer;
                modifiedFile << buffer;
                count = i;
            }
            else if((count += (i+1)) < 60)
            {   cout << " " << buffer;
                modifiedFile << " " << buffer;
            }
            else
            {
                cout << "\n" << buffer;
                modifiedFile << "\n" << buffer;
                count = i;
            }

            if(c == '.')
            {
                cout << "\n";
                modifiedFile << "\n";
                count = 0;
            }
        }
    }
    fclose(fp);
    return 0;
}
