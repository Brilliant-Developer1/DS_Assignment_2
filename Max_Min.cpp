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
void print_max_min(Node *head)
{
    Node *temp = head;
    int maximum = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val > maximum)
        {
            maximum = temp->val;
        }
        temp = temp->next;
    }

    Node *temp1 = head;
    int minimum = INT_MAX;
    while (temp1 != NULL)
    {
        if (temp1->val < minimum)
        {
            minimum = temp1->val;
        }
        temp1 = temp1->next;
    }
    cout << maximum << " " << minimum << endl;
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
    print_max_min(head);
    return 0;
}