#include<bits/stdc++.h>
using namespace std;

int main(){
    string attnd ;
    cin>>attnd;

    int absent = 0;
    int late = 0;

    for(int i=0;i<attnd.size();i++)
    {
        if(attnd[i] == 'A') ++absent;
        if(attnd[i] == 'L'  ) 
            {
                 if( i > 0 && attnd[ i - 1 ] == 'L' )
                    {
                    ++late;
                     }
                  else 
                    {
                        late = 1;
                    }
             }
    }
    if( absent > 2 || late >= 3 )
        cout<<"False";
        
    else cout<<"True";
}
