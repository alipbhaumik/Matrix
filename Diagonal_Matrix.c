#include <stdio.h>
struct Matrix
{
    int A[10];
    int n;//dimension of a array
};
void Set(struct Matrix *m,int i,int j,int x)//x is the element to be inserted //i and j are respective row and column indices
{
//we will take the matrix by call by address as elements are gonna get altered
if(i==j)
    m->A[i-1]=x;
//will only set the value if i==j else nothing
}
int Get(struct Matrix m,int i,int j)
{
//call by value as no changes gonna occur
if(i==j)
    return m.A[i-1];
else
    return 0;
}
void Display(struct Matrix m)//for displaying the matrix
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.A[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    m.n=4;
    Set(&m,1,1,5);Set(&m,2,2,8);Set(&m,3,3,9);Set(&m,4,4,12);//call by address thus sending &m
    printf("%d \n",Get(m,2,2));
    Display(m);
    return 0;
}
