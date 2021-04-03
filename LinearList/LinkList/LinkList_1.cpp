
//设计一个递归算法。删除不带头结点的单链表L中所有值为x的结点。

void deletex(LinkList &L, ELemType x)
{
    if (L != NULL)
    {
        if (L->data == x)
        {
            LNode *p = L;
            L = L.next;
            delete p;
        }
        else
            L = L.next;
        deletex(L, x);
    }
    return;
}

//标准答案
void Del_X_3(LinkList &L, ELemType x)
{
    LNode *p;
    if (L == NULL)
        return;
    if (L->data == x)
    {
        p = L;
        L = L->next;
        free(p);
        Del_X_3(L, x);
    }
    else
        Del_X_3(L->next, x);
}