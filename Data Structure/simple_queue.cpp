#include<iostream>
using namespace std;

class Que
{
    int R,F;

    public:
    Que()
    {
        R=-1;
        F=-1;
    }
    int Q[5];
    void enque(); //insertion
    void deque(); //deletion
    void display(); //display
    void isEmpty(); //stack is underflow
};

void Que::display()
{
    for(int i=F; i<=R; i++)
    {
        cout<<Q[i];
    }
}

void Que::deque()
{
    if(R>0 || F>R)
    {
        cout<<"Q is Empty";
    }
    else 
    {
        cout<<"Deleted Element is: "<<Q[F];
        F++;
    }
}

void Que::enque()
{
    int x;
    if(R>=4)
    {
        cout<<"Q is Full";
    }
    else 
    {
        if(F==1)
        {
            F=0;
        }
        cout<<"Enter the element: ";
        cin>>x;
        R++;
        Q[R]=x;
    }
}
int main()
{
    Que q;
    int ch;

    do
    {
        cout<<endl;
        cout<<"Press 1. for insert"<<endl;
        cout<<"Press 2. for delete"<<endl;
        cout<<"Press 3. for display"<<endl;
        cout<<"Press 4. for exit"<<endl;
        cout<<"Enter yout choice";
        cin>>ch;

        switch(ch)
        {
            case 1:q.enque();
                break;
            case 2:q.deque();
                break;
            case 3:q.display();
                break;
            case 4:exit(0);
        }
    }
    while(ch!=4);
    return 0;
}