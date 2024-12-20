#include <iostream>
#include <string>

class Parser
{
public:
    Parser(const std::string& input)
        : input_(input), index_(0)
    {}

    double parse()
    {
        return parseExpression();
    }

private:
    double parseExpression()
    {
        double left = parseTerm();

        while (true)
        {
            if (match('+'))
            {
                left += parseTerm();
            }
            else if (match('-'))
            {
                left -= parseTerm();
            }
            else
            {
                return left;
            }
        }
    }

    double parseTerm()
    {
        double left = parseFactor();

        while (true)
        {
            if (match('*'))
            {
                left *= parseFactor();
            }
            else if (match('/'))
            {
                left /= parseFactor();
            }
            else
            {
                return left;
            }
        }
    }

    double parseFactor()
    {
        if (match('('))
        {
            double expr = parseExpression();
            match(')');
            return expr;
        }
        else
        {
            std::string numStr;

            while (index_ < input_.size() && isdigit(input_[index_]))
            {
                numStr += input_[index_];
                index_++;
            }

            return stod(numStr);
        }
    }

    bool match(char c)
    {
        if (index_ < input_.size() && input_[index_] == c)
        {
            index_++;
            return true;
        }
        else
        {
            return false;
        }
    }

    std::string input_;
    size_t index_;
};

int main()
{
    std::string input = "3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3";
    Parser parser(input);
    std::cout << parser.parse() << std::endl;
    return 0;
}

