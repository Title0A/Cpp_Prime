#include <iostream>
using std::cout ; using std::endl;

#include <vector>
using std::vector;

#include <memory>
using std::shared_ptr; using std::make_shared;

#include "Quote.h"

int main()
{
   Quote base("0-201-82470-1",50) ;
   Bulk_quote bulk("0-201-54848-8", 50, 10, .25);

   vector<Quote> basket;
   basket.push_back(Quote("0-201-82470-1",50));

    basket.push_back(Bulk_quote("0-201-82470-1", 50, 10, .25));

    cout << basket.back().net_price(15) << endl;

    vector<shared_ptr<Quote>> basket2;

    basket2.push_back(make_shared<Quote>("0-201-82470-1",50));

    basket2.push_back( make_shared<Bulk_quote>("0-201-54848-8",50,10,.25));

    cout << basket2.back()->net_price(15) << endl;

    return 0;

}



