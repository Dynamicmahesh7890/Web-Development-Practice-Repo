#include"iostream"
using namespace std;
int main() {
    int no1 = 8, no2 = 4; 
    int res1 = no1 & no2; 
    int res2 = no1 | no2; 
    int res3 = no1 ^ no2; 
    int res4 = ~no1;      
    int res5 = no1 >> 2;  
    int res6 = no1 << 2; 
    
    cout << res1 << " " << res2 << " " << res3 << endl;
    cout << res4 << " " << res5 << " " << res6 << endl;

    return 0;
}

