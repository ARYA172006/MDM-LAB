#include<iostream> 
using namespace std; 
int main()
{ 
    int u, s, m, c, x, y, z; 
 
    // input total no of students in university 
    cout << "Total Number of Students in University: "; 
    cin >> u; 
 
    // students in sports club 
    cout << "Number of Students members of Sports Club: "; 
    cin >> s; 
 
    // students in music club 
    cout << "Number of Students members of Music Club: "; 
    cin >> m; 
 
    // students common to both clubs 
    cout << "Number of Students common to both the Clubs: "; 
    cin >> c; 
 
    // only music club = total music - common 
    x = m - c; 
 
    // only sports club = total sports - common 
    y = s - c; 
 
    // students in at least one club 
    z = y + c + x; 
 
    // results 
    cout << "\nTotal Number of Students member of at least one Club: " << z << endl; 
    cout << "Number of Students member of only Sports Club: " << y << endl; 
    cout << "Number of Students member of only Music Club: " << x << endl; 
    cout << "Number of Students member of neither Clubs: " << u - z << endl; 
 
    return 0; 
}