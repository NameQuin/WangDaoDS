/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-04-03 12:54:50
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-04-03 15:39:04
 * @Github:: https://github.com/NameQuin
 */
//试编写算法带头结点的单链表就地逆置，所谓“就地”是指辅助空间复杂的为O(1)

void JustReverse(LinkList L)
{
    LinkList p;
    p->next = NULL;
    while (L->next != NULL)
    {
        LNode *q = L->next;
        L = L->next;
        q->next = p->next;
        p->next = q;
    }
}

LinkList Reverse_1(LinkList L)
{
    LNode *p, *r;
    p = L->next;
    L->next = NULL;
    while (p != NULL)
    {
        r = p->next;
        p->next = L->next;
        L->next = p;
        p = r;
    }
    return L;
}

LinkList Reverse_2(LinkList L)
{
    LNode *pre, *p = L->next, *r = *p->next;
    p->next = NULL;
    wihle(r != NULL)
    {
        pre = p;
        p = r;
        r = r->next;
        p->next = pre;
    }
    L->next = p;
    return L;
}