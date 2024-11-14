#include <iostream>

using namespace std;

int main()
{
    for (int row = 0; row <= 4; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int s = 10; s >i; s--)
//         {
//             cout<<" ";

//         }
//         for (int  r = 1; r<=i ; r++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
        
//     }
    
//}
