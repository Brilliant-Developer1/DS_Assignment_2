// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void find_same(Node *head, Node *head1, int size, int size1)
{
    bool flag = false;
    if (size == size1)
    {
        Node *temp = head;
        Node *temp1 = head1;
        while (temp != NULL)
        {
            if (temp->val == temp1->val)
            {
                temp = temp->next;
                temp1 = temp1->next;
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    int value;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }

    int value1;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> value1;
        if (value1 == -1)
            break;
        insert_at_tail(head1, tail1, value1);
    }
    find_same(head, head1, size(head), size(head1));
    return 0;
}