#include<iostream>
#include<iomanip>
using namespace std;
class vector                                                              ///Declaring class.
{
    float *p;
    int size;
public:
    void creat_vector(int a);
    void set_element(int i,float value);
    void modify(void);
    void multiply(float b);
    void display(void);
};
void vector::creat_vector(int a)
{
    size=a;
    p=new float[size];
}
void vector::set_element(int i,float value)
{
    p[i]=value;
}
void vector :: multiply(float b)
{
    for(int i=0; i<size; i++)
        p[i]=b*p[i];
}
void vector:: display(void)
{
    cout<<"p["<<size<<"] = ( ";
    for(int i=0; i<size; i++)
    {
        if(i==size-1)
            cout<<p[i];
        else
            cout<<p[i]<<" , ";
    }
    cout<<")"<<endl;
}
void vector::modify(void)
{
    int i;
    //cout<<"to edit a given element enter position of the element : ";
    cin>>i;
    i--;
    cout<<"Now enter new value of  "<<i+1<<"th element : ";
    float v;
    cin>>v;
    p[i]=v;
    cout<<"Now new contents : "<<endl;
    display();
    cout<<"to delete an element enter position of the element :";
    cin>>i;
    i--;
    for(int j=i; j<size; j++)
    {
        p[j]=p[j+1];
    }
    size--;
    cout<<"New contents : "<<endl;
    display();
}
int main()
{
    vector santo;                                             ///Declaring object.
    int s;
    cout<<"enter size of vector : ";
    cin>>s;
    \\sudhgysgfdguagvkhgbvaghxvjk iabnx vscuiasbjxc asxtag x
    cout<<"enter "<<s<<" elements one by one :"<<endl;
    for(int i=0; i<s; i++)
    {
        float v;
        cin>>v;
        santo.set_element(i,v);
    }
    cout<<"Now contents :"<<endl;
    santo.display();
    cout<<"to multiply this vector by a scalar quantity enter this scalar quantity : ";
    float m;
    cin>>m;
    santo.multiply(m);
    cout<<"Now contents : "<<endl;
    santo.display();
    santo.modify();
    return 0;
}


