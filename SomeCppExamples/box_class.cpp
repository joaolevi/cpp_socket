#include<bits/stdc++.h>

using namespace std;

class Box{
    public:
        int l;
        int b;
        int h;
        
        int getLenght();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
    
        Box(int l = 0, int b = 0, int h = 0){
            this->l = l; this->b = b; this->h = h;
        }
        
        bool operator<(const Box A);
        friend ostream& operator<<(ostream& os, const Box B);
};

int Box::getLenght()
{
    return (l);
}

int Box::getBreadth()
{
    return(b);
}

int Box::getHeight()
{
    return(h);
}

long long Box::CalculateVolume()
{
    return(h*l*b);
}

bool Box::operator<(const Box A)
{
    if ((A.l < this->l) || ((A.b < this->b) && (A.l == this->l)) || 
        ((A.h < this->h) and (A.b == this->b) and (A.l == this->l)))
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

ostream& operator<<(ostream& os, const Box B)
{
    os << B.l << " " << B.b << " " << B.h;
    return (os);
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}