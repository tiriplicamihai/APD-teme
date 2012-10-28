#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cerr << "Usage error:\n";
        cerr << argv[0] << " T file_in file_out\n";
        return 1;
    }
    int iteratii = atoi(argv[1]);
    cout << "Nr iteratii: " << iteratii << "\n";

    return 0;
}