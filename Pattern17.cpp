/*Numaric Full Pyramid
    1
   232
  34543
 4567654
*/

#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<row+col+1;
        }
        int start=2*row;
        for(int col=row;col>0;col--){
            // cout<<row+col;
            cout<<start;
            start--;
        }
        cout<<endl;
    }
return 0;
}