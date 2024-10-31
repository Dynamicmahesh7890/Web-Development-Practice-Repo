#include"iostream"
using namespace std;
int main()
{
        int ch ,no1 , no2 , res;
do
{
        cout<<"select 1 for add two number \n select 2 for sub two number\nselect for stop program";
        cin>>ch;
        cout<<"enter a number ";
        cin>>no1>>no2;
        if (ch)
                res= no1+no2;
        else if (ch==1)
                res= no1+no2;
        else if(ch==0)
        {
                cout<<"stop program";
                        exit(0);

        }
        else {
                cout<<"invalid option "<<endl;
                exit(0);
        }
        cout<< res <<endl;
        while(ch!=0);
}
}

