#ifndef ADMIN_H
#define ADMIN_H
#pragma once

// Header file contents
// Declarations, definitions, etc.


class admin:public user,public tickets
{
public:
    admin();
    virtual ~admin();
    void admin_dashboard();
    void block_user();
    void track_op_user();
    void view_info_user();
    void add_ticket();
    void edit_ticket();
    void add_ticket();
    void delete_ticket();
    void view_info_ticket();
    void block_user();
    void track_op_user();
    void gui_1()
    void view_info_user();
};

#endif // ADMIN_H
