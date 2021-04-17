#include<bits/stdc++.h>
using namespace std;
int main()
{


    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
       int m_t1=0;
       int check=0;
       bool test2=false;
       int m_m1=0;
       string m_string;
       cin>>m_string;
       int c_t=0;
       int c_m=0;
       int z=0;
       for(int i=0;i<n;i++)
       {
           if(m_string[i]=='T')
           {
               c_t++;
               m_t1++;
           }

          else if(m_string[i]=='M')
           {
               c_m++;
               m_m1++;
           }

           if(m_t1<m_m1)
           {
               z=1;
           }
       }

      ;

       if(z==1 || (2*m_m1)!=m_t1)
       {
           cout<<"NO"<<endl;
           continue;
       }

       int m_t2=0,m_m2=0,z2=0;
       for(int i=m_string.size()-1;i>=0;i--)
       {
           if(m_string[i]=='T')
            m_t2++;
          else if(m_string[i]=='M')
            m_m2++;
          if(m_t2<m_m2)
          {
              z2=1;
          }

       }

       if(z2==1)
       {
           cout<<"NO"<<endl;
           continue;
       }

       cout<<"YES"<<endl;




    }
}