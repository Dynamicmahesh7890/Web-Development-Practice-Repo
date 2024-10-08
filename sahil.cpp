#include"iostream"
using namespace std;
int main()
{
        char var;
        cout<<"Enter a var"<<endl;
        cin>>var;
        if(int(var)>= 65 && int (var)<=90)
                cout<<"upper case charecter"<<endl;
        else if( int (var)>= 97&&int(var)<=122)
                cout<<"lower case charecter"<<endl;
        else if(int (var)>=48&& int (var)<=57)
                cout<<"numbers"<<endl;
        else
                cout<<"it is a symbol"<<endl;




}
