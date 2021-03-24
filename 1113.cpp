#include<iostream>
#include<stack>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

    int t;

    while(1==scanf("%d",&t))
    {

        ///getchar();
        getchar();
        int k=0;
        while(t--)
        {
            stack < string > forward_;
            stack < string > backward_ ;
            string str,present("http://www.lightoj.com/");
            cout<<"Case "<<++k<<":\n";
            while(getline(cin,str))
            {

                //getchar();

               // getline(cin,dummy);
                //cout<<"str: "<<str<<endl;
                if(str=="QUIT")break;
                else if(str=="BACK")
                {

                    if(backward_.empty())cout<<"Ignored\n";
                    else
                    {


                        forward_.push(present);
                        present = backward_.top();
                        backward_.pop();
                        cout<<present<<endl;
                    }
                }
                else if(str=="FORWARD")
                {

                    if(forward_.empty())cout<<"Ignored\n";
                    else
                    {

                        backward_.push(present);
                        present = forward_.top();
                        forward_.pop();
                        cout<<present<<endl;
                    }

                }
                else
                {

                       str.replace(0,6,"");
                        backward_.push(present);
                        while(!forward_.empty())forward_.pop();
                        present=str;
                        cout<<present<<endl;



                }
            }
        }
    }
}
