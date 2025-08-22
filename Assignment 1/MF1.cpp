#include <iostream>
using namespace std;

int main() {

    int i, j, u, a, b, temp;
    //input no of elements in universal set
    cout << "Enter No of elements in universal set: ";
    cin >> u;
    cout << "Enter number of students in Drama club: ";   //input no of elements in Set A
    cin >> a;
    cout << "Enter number of students in Science club: ";   //input no of elements in Set B
    cin >> b;

    int U[u], A[a], B[b];
    cout << "Enter Universal set elements:\n";   //input universal set 
    for (i = 0; i < u; i++) 
    {
        cin >> U[i];
    }

    cout << "Enter elements in Drama club:\n";   //input set A
    for (i = 0; i < a; i++) 
    {
        cin >> A[i];
    }

    cout << "Enter elements in Science club:\n";  //input set B
    for (i = 0; i < b; i++) 
    {
        cin >> B[i];
    }

    cout << "Universal set: { ";
    for (i = 0; i < u; i++)
    { 
        cout << U[i] << " ";
    }
    cout << "}\n";

    cout << "Drama club: { ";
    for (i = 0; i < a; i++)
    {
         cout << A[i] << " ";
    }
    cout << "}\n";

    cout << "Science club: { ";
    for (i = 0; i < b; i++) 
    {
        cout << B[i] << " ";
    }
    cout << "}\n";

    // Sort set A
    for (i = 0; i < a - 1; i++)
     {
        for (j = 0; j < a - i - 1; j++) 
        {
            if (A[j] > A[j + 1])
             {
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
    // Sort set B
    for (i = 0; i < b - 1; i++) 
    {
        for (j = 0; j < b - i - 1; j++) 
        {
            if (B[j] > B[j + 1]) 
            {
                temp = B[j + 1];
                B[j + 1] = B[j];
                B[j] = temp;
            }
        }
    }

    cout << "Sorted Drama club: ";
    for (i = 0; i < a; i++)
    {
     cout << A[i] << " ";
    }
    cout << endl;

    cout << "Sorted Science club: ";
    for (i = 0; i < b; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // Intersection (both clubs)
    int p = 0, q = 0, k = 0;
    int C[50];

    while (p < a && q < b) {
        if (A[p] == B[q]) {
            C[k++] = A[p];
            p++;
            q++;
        } else if (A[p] < B[q]) {
            p++;
        } else {
            q++;
        }
    }

    cout << "Students in both clubs: { ";
    for (i = 0; i < k; i++)
    {

     cout << C[i] << " ";
    }
    cout << "}\n";

    // Union (at least one club)
    p = 0; q = 0;
    int US[100], count = 0;
    while (p < a && q < b) 
    {
        if (A[p] < B[q]) 
        {
            US[count++] = A[p++];
        } else if (B[q] < A[p]) {
            US[count++] = B[q++];
        } else {
            US[count++] = A[p];
            p++;
            q++;
        }
    }
    while (p < a) US[count++] = A[p++];
    while (q < b) US[count++] = B[q++];

    cout << "Students in at least one club: { ";
    for (i = 0; i < count; i++) cout << US[i] << " ";
    cout << "}\n";

    // Difference A - B (Drama but not Science)
    p = 0; q = 0;
    int D[50], dcount = 0;
    while (p < a && q < b) {
        if (A[p] == B[q]) {
            p++; q++;
        } else if (A[p] < B[q]) {
            D[dcount++] = A[p++];
        } else {
            q++;
        }
    }
    while (p < a) D[dcount++] = A[p++];

    cout << "Students in Drama but not Science: { ";
    for (i = 0; i < dcount; i++) cout << D[i] << " ";
    cout << "}\n";

    // Difference B - A (Science but not Drama)  <-- ADDED
    p = 0; q = 0;
    int E[50], ecount = 0;
    while (p < a && q < b) {
        if (A[p] == B[q]) 
        {
            p++; q++;
        }
         else if (B[q] < A[p])
         {
            E[ecount++] = B[q++];
        } 
        else 
        {
            p++;
        }
    }
    while (q < b) E[ecount++] = B[q++];

    cout << "Students in Science but not Drama: { ";
    for (i = 0; i < ecount; i++)
    {
         cout << E[i] << " ";
    }
    cout << "}\n";

    // Students not in any club = Universal - Union
    p = 0; q = 0;
    int I[50], icount = 0;
    while (p < u && q < count)
     {
        if (U[p] == US[q])
         {
            p++; q++;
        }
         else if (U[p] < US[q])
         {
            I[icount++] = U[p++];
        } 
        else
         {
            q++;
        }
    }
    while (p < u) I[icount++] = U[p++];

    cout << "Students not in any club: { ";
    for (i = 0; i < icount; i++)
    { 
        cout << I[i] << " ";}
    cout << "}\n";

    return 0;
}
