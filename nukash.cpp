#include"iostream"
using namespace std;
int main()
{
    char ch;
    int pin;
    float Amount =0.8 ,CAmount=0.0, WAmount=0.0;
    cout <<"welcome to LIT ATM "<<endl;
    sleep('1');
    cout<<"Please insert card "<<endl;
    usleep('1000');
    cout<<"Enter ATM pin number";
    cin>>pin;
    if (pin== '1234')
{
while
{
    cout<<"Select w for withdraw Amount\n Select D for depositeAmount\n select for show current Balance\n E for Exit";
    cin>>ch;
    if(ch == 'D')
    {
        cout<<"Enter deposit Amount ";
        cin>> DAmount;
        Amount = Amount + DAmount ;
    }
    else if(ch =='w')
    {
        cout<<"Enter withdraw Amount ";
        cin>>WAmount;
        if(WAmount< Amount)
            Amount = Amount - WAmount;
        else
        {
            cout<<"Insufficent Balance"<<endl;
            exit (0);

        }
    }
else if (ch =='s')
    {
        cout<<"Your Current Saving Amount"<<Amount<<endl;
        
    }
    else if ( ch == 'E')
    {

    }
else 
{
            cout<<"Invalid Option Try next time"<<endl;
            exit(0);
}

}
}
}