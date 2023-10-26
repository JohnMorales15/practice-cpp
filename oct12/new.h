

class OrderedPair {
    public:
        OrderedPair();
        OrderedPair(int x, int y);
        OrderedPair add(const OrderedPair& other);
        OrderedPair sub(const OrderedPair& other);
        int multiply(int x, int y);
        int exp(int x, int y);
        void print() const;
        void add(const OrderedPair& other);
        void sub(const OrderedPair& other);

    private:
        int x;
        int y;
};