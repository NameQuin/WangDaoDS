/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-04-03 12:54:50
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-04-03 14:16:51
 * @Github:: https://github.com/NameQuin
 */
//在带头结点的单链表L中，删除所有值为x的结点，并释放其空间，假设值为x的结点不唯一，试编写算法以实现上述操作。

void delete_X_withHead(LinkList &L, ElemType x)
{
    LNode *pre = L;
    LNode *p = L->next;
    while (p != NULL)
    {
        if (p->data == x)
        {
            pre->next = p->next;
            LNode *q = p;
            p = p->next;
            pre = pre->next;
            free(q);
        }
        else
        {
            pre = pre->next;
            p = p->next;
        }
    }
}
