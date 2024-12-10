#include <iostream>
using namespace std;

int main (){

    int i, temp;
    int counter = 1;
    string statement;
    string str;


    cout << "Enter the statement:";
    getline (cin, statement);

    cout << "The entered statement was:" << statement << endl;

    if (statement[0]>='0' && statement[0]<='9'){

        cout<<"Lexical  Error at position 0 and the character is:"<<statement[0]<<endl;
        return 0;

    }else{

        if(statement[0]>='a' && statement[0]<='z'){
            cout<<"<"<<"id"<<","<<counter<<">"<<endl;
            counter++;
        }

    }

    for (i = 1; i < statement.length (); i++){
        if (statement[i] == '='){
            str = statement[i];
            break;
        }


    }

    cout<<"<"<<str<<">"<<endl;

    temp = i;

    if (statement[temp + 1]>='0' && statement[temp + 1]<='9'){

        cout<<"Lexical  Error at position 3 and the character is:"<<statement[temp+1]<<endl;
        return 0;

    }else{

        if(statement[temp+1]>='a' && statement[temp+1]<='z'){
            cout<<"<"<<"id"<<","<<counter<<">"<<endl;
            counter++;
        }

    }


    for (i = temp + 2; i < statement.length (); i++){
        if (statement[i] == '+' || statement[i] == '-' || statement[i] == '*' || statement[i] == '/'){
            str = statement[i];
            break;
        }
    }

    cout<<"<"<<str<<">"<<endl;


    temp = i;

    if (statement[temp + 1]>='0' && statement[temp + 1]<='9'){

        cout<<"Lexical  Error at position 5 and the character is:"<<statement[temp+1]<<endl;
        return 0;

    }else{
        if(statement[temp+1]>='a' && statement[temp+1]<='z'){
            cout<<"<"<<"id"<<","<<counter<<">"<<endl;
            counter++;
        }
    }


    for (i = temp + 2; i < statement.length (); i++){
        if (statement[i] == ';'){
            str=statement[i];
            break;
          }


    }

    cout<<"<"<<str<<">"<<endl;

  return 0;
}

