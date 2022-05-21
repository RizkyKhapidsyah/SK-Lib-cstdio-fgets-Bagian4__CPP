#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::FILE* tmpf = std::tmpfile();
    std::fputs("Alan Turing\n", tmpf);
    std::fputs("John von Neumann\n", tmpf);
    std::fputs("Alonzo Church\n", tmpf);

    std::rewind(tmpf);
    char buf[8];

    while (std::fgets(buf, sizeof buf, tmpf) != nullptr) {
        std::cout << '"' << buf << '"' << '\n';
    }

    _getch();
    return 0;
}