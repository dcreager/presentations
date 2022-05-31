#include <fstream>

using namespace std;

void
save_file(const char* filename)
{
    ofstream fp(filename);
    fp << "lots of interesting data";
}

int
main(void)
{
    save_file("out.dat");
}
