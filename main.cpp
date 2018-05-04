#include <iostream>
#include <fstream>

using namespace std;
ifstream in("speciale.in");
ofstream out("speciale.out");

int s1[9]={1,12,123,1234,12345,123456,1234567,12345678,123456789};
int s2[9]={9,98,987,9876,98765,987654,9876543,98765432,987654321};

int main()
{int p,k,n,a,b;
    cin>>p>>k>>n>>a>>b;
    if(p==1)
        out<<s2[k-1];
    else if(p==2)
    {
        int cif=0,cn=n;
        while(cn)
        {
            cif++;
            cn=cn/10;
        }
        int v[cif],ccif=cif;
        while(ccif)
        {
            v[cif-1]=n%10;
            n=n/10;
            ccif--;
        }
        for(int i=0;i<cif;i++)
        {
            for(int )
        }
    }
    return 0;
}
