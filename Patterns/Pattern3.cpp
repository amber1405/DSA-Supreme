/* Hollow Rectangle --> 3-Rows , 5-Cols
* * * * * 
*       *
* * * * *
*/

// For 1st and last rows, Print Stars for every col.
// For Remaining Middle Rows-> 1->"*" Col-2->"Spaces" 1->"*".

#include<iostream>
using namespace std;
int main(){
    int rowCount;cin>>rowCount;
    int colCount;cin>>colCount;
    for(int row=0;row<rowCount;row++){
        if(row==0 || row==rowCount-1){
            for (int col = 0; col < colCount; col++)
            {
                cout<<"* ";
            }
        }else{
            cout<<"* ";
            for (int col = 0; col < colCount-2; col++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }cout<<endl;
    }
return 0;
}
