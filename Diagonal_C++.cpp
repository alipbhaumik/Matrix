#include <iostream>
using namespace std;
//creating class Diagonal
class Diagonal
{
    private:
        int *A;//pointer for dynamic allocation
        int n;//dimension of array
    public:
        Diagonal()//non parameterized constructor for times when dimensions are not given
        {
            n=2;//minimum dimension 2 by 2 matrix
            A=new int[2];//pointing to a location of size 2 bytes of integers
        }
        Diagonal(int n)//parameterized version of the matrix
        {
            this->n=n;//we use the "this" pointer which points to "this n"
            A=new int[n];
        }
        ~Diagonal()//destructor
        {
            delete []A;//deletes the memory from heap
        }
        void Set(int i,int j,int x);
        int Get(int i,int j);
        void Display();
};
void Diagonal::Set(int i,int j,int x)
{
    if(i==j)
        A[i-1]=x;
}
int Diagonal::Get(int i,int j)
{
    if(i==j)
        return A[i-1];
    else return 0;
}
void Diagonal::Display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<"\n";
    }
}
int main()
{
    Diagonal d(4);//creating an object of diagonal matrix
    d.Set(1,1,5);
    d.Set(2,2,8);
    d.Set(3,3,9);
    d.Set(4,4,12);
    d.Display();
    return 0;
}
