#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=a;j>a-i;j--){
            cout<<j;
        }
        for(int j=1;j<=a-i;j++){
            cout<<(a-i+1);
        }
        cout<<endl;
    }
} // namespace std;

