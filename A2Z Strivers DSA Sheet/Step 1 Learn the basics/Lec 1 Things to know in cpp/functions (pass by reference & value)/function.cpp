// #include <iostream>
// using namespace std;

// void printName(string name)
// {
//   cout << "Hey " << name;
// }

// int main()
// {
//   string name;
//   cin >> name;
//   printName(name);

//   string name2;
//   cin >> name2;
//   printName(name2);
//   return 0;
// }

// * Take two numbers and print their sum

// #include <iostream>
// using namespace std;

// int sum(int num1, int num2)
// {
//   int num3 = num1 + num2;
//   return num3;
// }

// int main()
// {
//   int num1, num2;
//   cin >> num1 >> num2;
//   int res = sum(num1, num2);
//   cout << res;
//   return 0;
// }

// * pass by value

// #include <iostream>
// using namespace std;

// void doSomething(string s)
// {
//   s[0] = 't';
//   cout << s << endl;
// }

// int main()
// {
//   string s = "abhinav";
//   doSomething(s);
//   cout << s << endl;
//   return 0;
// }

// * pass by reference

#include <iostream>
using namespace std;

void doSomething(string &s)
{
  s[0] = 't';
  cout << s << endl;
}

int main()
{
  string s = "abhinav";
  doSomething(s);
  cout << s << endl;
  return 0;
}