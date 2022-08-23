#include <iostream>

using namespace std;

int t;
string StringMerge(string S1,string S2)
{
int n=min(S1.length(),S2.length());
string napis;
int j=0;
while(n>0)
{
napis=napis+S1.substr(j,1)+S2.substr(j,1);
n--;
j++;
}
//napis+='\0';
return napis;
}

int main()
{
cin >> t;
string S1,S2;
do
{
cin>> S1>>S2;
cout << StringMerge(S1,S2)<<endl;
t--;
}while (t>0);
return 0;
}
