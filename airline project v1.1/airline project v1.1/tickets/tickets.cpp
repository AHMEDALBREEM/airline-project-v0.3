#include "tickets.h"

tickets::tickets(int _id,string _from,string _where,string _date_go,string _date_ret,int _price,int _t_visa_req,int _t_cov_req)
{
    id=_id;
    form=_from;
    where=_where;
    date_go=_date_go;
    date_ret=_date_ret;
    price=_price;
    t_visa_req=_t_visa_req;
    t_cov_req=_t_visa_req;
}

tickets::~tickets()
{
    //dtor
}

