#include <iostream>
using namespace std;

int main()
{
    string input;

    cout<<"enter a value: ";
    cin>> input;



    for(int i=0; i< input.length(); i++)
    {
        if (input[i]=='/' && input[i+1]=='/')
        {

           cout<<"single line comment"<<endl;
            break;
        }
        else if (input[i]=='/' && input[i+1]=='*')
        {

           cout<<"multiple line comment"<<endl;
            break;
        }

else
    {
        cout<<" not comment"<<endl;

    }
    }






    return 0;
}

