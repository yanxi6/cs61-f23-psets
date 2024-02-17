#include <cstdio>
#include <cctype>

int main() {
    unsigned long nc = 0, nw = 0, nl = 0;
    bool space = true;
    while (true) {
        int c = fgetc(stdin);
        if (c == EOF) {
            break;
        }
        ++nc;
        bool this_space = isspace((unsigned char) c);   
        if (space && !this_space) {
            ++nw;
        }
        space = this_space;

        if (c == '\n') {
            ++nl;
        }
    }
    fprintf(stdout, "%8lu %7lu %7lu\n", nl, nw, nc);
}