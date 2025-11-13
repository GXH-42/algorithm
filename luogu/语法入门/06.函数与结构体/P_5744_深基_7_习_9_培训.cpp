#include <iostream>
 
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
student s[100005];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].name>>s[i].age>>s[i].score;
    s[i].age++;
    s[i].score*=1.2;
    if (s[i].score>600) {
        s[i].score=600;
    }   
    }
    for(int i=1;i<=n;i++)
    cout<<s[i].name<<' '<<s[i].age<<' '<<s[i].score<<endl;


    return 0;
}