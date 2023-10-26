#ifndef ENGINE_H
#define ENGINE_H
#include <string>
    using std::string;


class Engine
{
    public:
        Engine(); // default constructor
        explicit Engine(string ); // overloaded function

        ~Engine(); // deconstructor

        // setters
        void setModel(string);
        void setBigBlock(bool);

        // getters
        string getModel() const;
        bool getBigBlock() const;

    private:
        string model;
        bool bigBlock;
        string engineCyl;

};

#endif