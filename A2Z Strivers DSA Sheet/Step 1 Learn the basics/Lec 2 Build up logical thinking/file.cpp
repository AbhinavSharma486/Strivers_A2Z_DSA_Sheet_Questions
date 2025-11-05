// & Pattern 1 :-
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   string s = "* ";

//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = 0; j < 5; j++)
//     {
//       cout << s;
//     }
//     cout << endl;
//   }
// }

// & Pattern 2 :-
// *
// * *
// * * *
// * * * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 3 :-
// * 1
// * 1 2
// * 1 2 3
// * 1 2 3 4
// * 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 4 :-
// * 1
// * 2 2
// * 3 3 3
// * 4 4 4 4
// * 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 5 :-
// * * * * *
// * * * *
// * * *
// * *
// *

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = 0; j < 5 - i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 6 :-
// * 1 2 3 4 5
// * 1 2 3 4
// * 1 2 3
// * 1 2
// * 1

// #include <iostream>
// using namespace std;

// int printTriangle(int n)
// {
//   for (int i = n; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// int main()
// {
//   int n;
//   cout << "Enter value of n: ";
//   cin >> n; // input actually matters now
//   printTriangle(n);
//   return 0;
// }

// & Pattern 7 :-
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 1; j <= 5 - i; j++)
//     {
//       cout << "  ";
//     }
//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 8 :-
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = n; i >= 1; i--)
//   {
//     for (int j = n - i; j >= 1; j--)
//     {
//       cout << "  ";
//     }

//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 9 :-
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n - i; j++)
//     {
//       cout << "  ";
//     }

//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   for (int i = n; i >= 1; i--)
//   {
//     for (int j = n - i; j >= 1; j--)
//     {
//       cout << "  ";
//     }

//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 10 :-
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   for (int i = n - 1; i >= 1; i--)
//   {
//     for (int j = i; j >= 1; j--)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 11 :-
// * 1
// * 0 1
// * 1 0 1
// * 0 1 0 1
// * 1 0 1 0 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   int start = 0;

//   for (int i = 1; i <= n; i++)
//   {

//     if (i % 2 == 0)
//       start = 0;
//     else
//       start = 1;

//     for (int j = 1; j <= i; j++)
//     {
//       cout << start << " ";
//       start = 1 - start;
//     }
//     cout << endl;
//   }
// }

// & Pattern 12 :-
// * 1             1
// * 1 2         2 1
// * 1 2 3     3 2 1
// * 1 2 3 4 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }

//     for (int k = 1; k <= 2 * (n - i); k++)
//     {
//       cout << "  ";
//     }

//     for (int m = i; m >= 1; m--)
//     {
//       cout << m << " ";
//     }
//     cout << endl;
//   }
// }

// & Pattern 13 :-
// * 1
// * 2 3
// * 4 5 6
// * 7 8 9 10
// * 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   int count = 1;

//   for (int i = 1; i <= n; i++)
//   {

//     for (int j = 1; j <= i; j++)
//     {
//       cout << count << " ";
//       count++;
//     }

//     cout << endl;
//   }
// }

// & Pattern 14 :-
// * A
// * A B
// * A B C
// * A B C D
// * A B C D E

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     char ch = 'A';
//     for (int j = 1; j <= i; j++)
//     {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }
// }

// & Pattern 15 :-
// * A B C D E
// * A B C D
// * A B C
// * A B
// * A

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter value of n : ";
//   cin >> n;

//   for (int i = n; i >= 1; i--)
//   {
//     char ch = 'A';

//     for (int j = 1; j <= i; j++)
//     {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }
// }

// & Pattern 16 :-
// * A
// * B B
// * C C C
// * D D D D
// * E E E E E

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter value of n : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    char ch = 'A' + i - 1;

    for (int j = 1; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}