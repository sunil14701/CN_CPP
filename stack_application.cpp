#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}

Node *insert_at_tail(Node *head, int data)
{
    Node *node = newNode(data);
    if (head == NULL)
        return node;
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = node;
    return head;
}

void print_list(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

string reverse_str(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
        st.push(str[i]);
    string ans = "";
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

Node *reverse_list(Node *head)
{
    stack<Node *> st;
    while (head)
    {
        st.push(head);
        head = head->next;
    }

    head = st.top();
    Node *mov = head;
    st.pop();
    while (!st.empty())
    {
        mov->next = st.top();
        mov = mov->next;
        st.pop();
    }
    mov->next = NULL;

    return head;
}

bool is_bal(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' or s[i] == ')' or s[i] == '{' or s[i] == '}' or s[i] == '[' or s[i] == ']')
        {
            if (st.empty())
                st.push(s[i]);
            else
            {
                bool soch = (st.top() == '(' and s[i] == ')') or (st.top() == '[' and s[i] == ']') or (st.top() == '{' and s[i] == '}');
                if (soch)
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
    }
    return st.empty();
}

int str_to_int(string num)
{
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans = ans * 10 + num[i] - '0';
    }
    return ans;
}

int postfix_eval(string postfix)
{
    stack<int> st;
    string num = "";
    double ans = 0;
    for (int i = 0; i < postfix.size(); i++)
    {
        if (postfix[i] == '+' or postfix[i] == '-' or postfix[i] == '*' or postfix[i] == '/')
        {
            if (st.empty())
                return -1;
            int data1 = st.top();
            st.pop();
            if (st.empty())
                return -1;
            int data2 = st.top();
            st.pop();
            ans = 0;
            if (postfix[i] == '*')
            {
                ans = data2 * data1;
            }
            else if (postfix[i] == '-')
            {
                ans = data2 - data1;
            }
            else if (postfix[i] == '+')
            {
                ans = data2 + data1;
            }
            else if (postfix[i] == '/')
            {
                ans = data2 * 1.0 / data1;
            }
            st.push(ans);
        }
        else if (postfix[i] >= '0' and postfix[i] <= '9')
            num += postfix[i];
        else if (postfix[i] == ' ')
        {
            if (num != "")
                st.push(str_to_int(num));
            num = "";
        }
    }
    return ans;
}

int prefix_eval(string prefix)
{
    // +9*26
    // - + * 2 3 * 5 4 9
    stack<int> st;
    string num = "";
    for (int i = prefix.size() - 1; i >= 0; i--)
    {
        if (prefix[i] == '+' or prefix[i] == '-' or prefix[i] == '*' or prefix[i] == '/')
        {
            if (st.empty())
                return -1;
            int data1 = st.top();
            st.pop();

            if (st.empty())
                return -1;
            int data2 = st.top();
            st.pop();
            int ans = 0;
            if (prefix[i] == '+')
            {
                ans = data1 + data2;
            }
            else if (prefix[i] == '-')
            {
                ans = data1 - data2;
            }
            else if (prefix[i] == '*')
            {
                ans = data1 * data2;
            }
            else if (prefix[i] == '/')
            {
                ans = data1 / data2;
            }
            st.push(ans);
        }
        else if (prefix[i] == ' ')
        {
            if (num != "")
            {
                reverse(num.begin(), num.end());
                st.push(stoi(num));
                num = "";
            }
        }
        else if (prefix[i] >= '0' and prefix[i] <= '9')
            num += prefix[i];
    }
    return st.top();
}



string infix_to_postfix(string prefix)
{
    // numbers and + - / *
    // i/p -> A+B*C+D
    // o/p -> ABC*+D+

    // "3+2*7-9"
    stack<char> st;
    string postfix = "";
    bool bracket = 0;
    for (int i = 0; i < prefix.size(); i++)
    {
        char curr = prefix[i];
        // if(curr == ' ') continue;
        if ((curr >= '0' and curr <= '9') or (curr >= 'A' and curr <= 'Z') or (curr >= 'a' and curr <= 'z')  )
            postfix += curr;
        else
        {
            while (true)
            {
                if (!st.empty())
                {
                    int top_data = st.top();
                    
                    if (curr == '-')
                    {

                        if (top_data == '-' or top_data == '+' or top_data == '*' or top_data == '/')
                        {
                            postfix += top_data;
                            st.pop();
                        }
                        else
                            break;
                    }
                    else if (curr == '+')
                    {
                        if (top_data == '+' or top_data == '*' or top_data == '/' or top_data == '-')
                        {
                            postfix += top_data;
                            st.pop();
                        }
                        else
                            break;
                    }
                    else if (curr == '*')
                    {
                        if (top_data == '*')
                        {
                            postfix += top_data;
                            st.pop();
                        }
                        else
                            break;
                    }
                    else if (curr == '/')
                    {
                        if (top_data == '/' or top_data == '*')
                        {
                            postfix += top_data;
                            st.pop();
                        }
                        else
                            break;
                    }
                }
                else
                {
                    break;
                }
            }
            st.push(curr);
        }
    }
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main()
{
    // reversing a string
    // string name ;
    // cin >> name;
    // cout << " your string is : " << name << endl << "your reverse string is : " <<reverse_str(name);

    // reversing a linked list
    // Node *head = NULL;
    // head = insert_at_tail(head,1);
    // head = insert_at_tail(head,2);
    // head = insert_at_tail(head,3);
    // head = insert_at_tail(head,4);
    // head = insert_at_tail(head,5);
    // head = insert_at_tail(head,2);
    // print_list(head);
    // head = reverse_list(head);
    // print_list(head);

    // check for balanced parentheses
    // string temp = "{(4+5)+(4+1)}";
    // string temp = "(A+B)";
    // string temp = "{(x+y) + (z)";
    // string temp = "[2*3]+(a)]";
    // string temp = "{a+z)";
    // cout <<" Is curly braces balanced : "<< is_bal(temp) << endl;

    // string postfix = "100 200 + 2 / 5 * 7 +";
    // string postfix = "2 3 1 * + 9 -";
    // string postfix = "2 3 4 * +";
    // string postfix = "3 4 * 2 5 * +";
    // string postfix = "2 3 * 4 5 + *";
    // string postfix = "5 2 3 * *";
    // int ans = postfix_eval(postfix);
    // cout <<"postfix ans is : "<< ans << endl;

    // string prefix = "+ 9 * 2 6";
    // string prefix = "/ * + 5 6 3 11";
    // string prefix = "- + * 2 3 * 5 4 9";
    // int ans = prefix_eval(prefix);

    // cout << "prefix ans is : " << ans << endl;
    // i/p -> A+B*C+D, A+B*C/E-F, A+B*C, A+B*C-D*E
    // o/p -> ABC*+D+, 452*3/+9-, ABC*+
    string infix = "A+B*C-D*E";
    cout << infix << endl;
    cout << infix_to_postfix(infix) << endl;


    return 0;
}
