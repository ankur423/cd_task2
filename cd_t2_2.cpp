#include <iostream>
using namespace std;

int main()
{
    string input;

    cout<<"enter a value: ";
    cin>> input;



    for(int i=0; i< input.length(); i++)
    {
        if (input[i]=='+'|| input[i]=='-'||input[i]=='*'||
                input[i]=='/'||input[i]=='%'|| input[i]=='=')
        {
            cout << "operator: "<<input[i]<<endl;


        }
        else{
            cout<<" no operator found"<<endl;
        }

    }





    return 0;
}

