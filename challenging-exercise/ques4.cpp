/*
    * कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
    * मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

    ! Karmanye vadhikaraste Ma Phaleshu Kadachana,
    ! Ma Karmaphalaheturbhurma Te Sangostvakarmani,

    ? The meaning of the verse is :—
    ? You have the right to work only but never to its fruits.
    ? Let not the fruits of action be your motive, nor let your attachment be to
    ? inaction
*/
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '/' || c == '*')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return -1;
}

string inToPost(string infix)
{
    stack<char> s;
    string result;

    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            s.push(c);
        else if (c == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(c) <= prec(s.top()))
            {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }
    return result;
}


string inToPre(string infix)
{
    stack<char> s;
    string result;

    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == ')')
            s.push(c);
        else if (c == '(')
        {
            while (s.top() != ')')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(c) < prec(s.top()))
            {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }
    return result;
}

int main()
{
int ch=0;
    string infix;

    cout<<"1. Infix to Polish Notation "<<endl;
    cout<<"2. Infix to Reverse Polish Notation "<<endl;
    cout<<"3. Exit "<<endl;

    cout<<"Enter your choice : ";
    cin>>ch;
if (ch==1){
     cout<<"Enter the Infix Arithmetic expression : ";
    cin >> infix;
reverse(infix.begin(), infix.end());
    string result = inToPre(infix);
    reverse(result.begin(), result.end());
    cout << result << endl;
}
else{
    if (ch==2){
            cout<<"Enter the Infix Arithmetic expression : ";
    cin >> infix;
    cout << inToPost(infix) << endl;

    }
    else{
        return 0;
    }
}
    return 0;
}