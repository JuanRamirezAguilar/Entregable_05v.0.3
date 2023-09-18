#ifndef INDEXDUPLE_H
#define INDEXDUPLE_H

template <class DATA>
class indexDuple {
    private:
        int index;
        DATA data;

    public:
        indexDuple();
        indexDuple(const indexDuple&);
        indexDuple(const int&, const DATA&);
        indexDuple(const DATA&);
        ~indexDuple();

        int getIndex()const;
        DATA getData() const;
        
        void setIndex(const int&);
        void setData(const DATA&);

        indexDuple &operator = (const indexDuple&);

};

#endif