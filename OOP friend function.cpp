///write a program to find maximum number out of two numbers using friend function.
///(Note: Here,one number is a member of one class and the other number is a member of other class).


#include<bits/stdc++.h>
using namespace std;
class student2;
class student1{
private:
    int a=10;
    public:
 friend void operation(student1 zayed,student2 khaled);

};
class student2{
private:
    int b=80;
public:
 friend void operation(student1 zayed,student2 khaled);


};
void operation(student1 zayed,student2 khaled){
 if(zayed.a>khaled.b)cout<<"Max number is: "<<zayed.a<<endl;
else cout<<"Max number is: "<<khaled.b<<endl;
}


int main()
{
 student1 zayed;
 student2 khaled;
 operation(zayed,khaled);

}
