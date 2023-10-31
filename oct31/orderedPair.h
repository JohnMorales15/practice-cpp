//class orderedPair.h

class orderedPair
{
    friend orderedPair operator * (const orderedPair& first, const orderedPair&
        second); // by default friend function is public
    friend orderedPair operator - (const orderedPair& first, const orderedPair&
        second);

    public:
        orderedPair();
        orderedPair(int, int);

        orderedPair(orderedPair&);

        void setx(int);
        void sety(int);

        int getx() const;
        int gety() const;
        orderedPair operator++(orderedPair);

    private:
        int xval{ 0 };
        int yval{ 0 };
};
