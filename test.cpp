
#include <iostream>
using namespace std;

double OP, PO1, FP1, saved1, FP2, saved2, total_saved, PO2, total_PO, AD;
char SAD;


int main (){

    cout << "Original price:"; 
    cin >> OP;

    cout << "Percent off:";
    cin >> PO1;

    saved1 = PO1 / 100 * OP;
    FP1 = OP - saved1;

    cout << "Has stackable additional discount? (Y or N):";
    cin >> SAD; 

    if (SAD == 'Y') {
     cout << "Additional discount:";   
     cin >> AD;

     saved2 = AD / 100 * FP1;
     
     FP2 = FP1 - saved2;
     
     total_saved = saved1 + saved2;
     
     total_PO = total_saved / OP * 100;

     cout << "Final price:" << FP2 << endl;

     cout << "Total percent off:" << total_PO << "%" << endl;

     cout << "Saved amount:" << total_saved << endl;


    }


    else {
        cout << "Final price:" << FP1 << endl;

        cout << "Saved amount:" << saved1 << endl;
    
    } 
    system ("Pause");
    return 0;

 

    



 
}
