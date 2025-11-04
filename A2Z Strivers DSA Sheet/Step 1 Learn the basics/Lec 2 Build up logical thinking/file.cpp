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

