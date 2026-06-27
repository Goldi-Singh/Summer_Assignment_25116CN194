#include<bits/stdc++.h>
using namespace std;
//student record managemnt system
class student{
    private:
    int rollno;
    string name;
    int dues;
    float marks;
    string branch;
    public:
    student(string n="", int d=0,float m=0,int r=0,string b=""){
        rollno=r;
        dues =d;
        name=n;
        branch=b;
        marks=m;
    }
    void display()
    {
        cout << "roll Number : " << rollno;
        cout << "name:" << name;
        cout << "dues:" << dues;
        cout << "marks:" << marks ;
    }
    int getrollno()
    {
        return rollno;
    }
};
int main(){
    student s[100];     
    int count = 0;
    int choice;

    while(choice!=4)
    {
        cout << "\n### student record management ###\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"adding details of the student:\n";
                int rollNo, dues;
                float marks;
                string name,branch;
                cout<<"enter roll no :\n";
                cin>>rollNo;
                cout<<"enter name:\n";
                cin>>name;
                cout<<"enter dues:\n";
                cin>>dues;
                cout<<"enter branch:\n";
                cin>>branch;
                cout<<"enter marks:\n";
                cin>>marks;
                s[count] = student(name, dues,marks,rollNo,branch);

                count++;
                cout << "Student Added Successfully!\n";
                break;
            }
            case 2:
            {
                cout<<"display student:";
                for(int i=0;i<count;i++){
                    s[i].display();
                }
                break;
            }
            case 3:
            {
                int rn;
                cout<<"searching student:";
                cout<<"enter roll no to search:";
                cin>>rn;
                for(int i=0;i<count;i++){
                    if(s[i].getrollno()==rn){
                        cout<<"there's your info:";
                        s[i].display();
                        break;
                    }
                }
            break;
            }
            case 4:
            {
                cout<<" got all the info";
                break;
            }
            default:{
                cout<<"typo fault";
            }
}
}
}
