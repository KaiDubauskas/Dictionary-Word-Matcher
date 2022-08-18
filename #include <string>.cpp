#include <string>
#include <vector>
#ifndef REPAIRER_H
#define REPAIRER_H

class Repair
{
private:
    Trie dictionary;
    std::vector<std::string> validWords;
    bool senHelp(const std::string &input, const size_t &index);
    bool makeValidInput(const std::string &input);
    void print();

public:
    Repair();

    void checkSen(const std::string &input);
};

#endif
