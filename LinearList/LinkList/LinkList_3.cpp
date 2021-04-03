/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-04-03 12:54:50
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-04-03 14:58:21
 * @Github:: https://github.com/NameQuin
 */
//设L为带头结点的单链表，编写算法实现从尾到头反向输出每个结点的值
void Reverse(LinkList L)
{
    LNode *p;
    LinkList S;
    S->next = NULL;
    while (L->next != NULL)
    {
        p->data = L->next->data;
        p->next = S->next;
        S->next = p;
        L = L->next;
    }
    while (S->next != NULL)
    {
        printf(S->data);
    }
}

//标准答案  递归

void R_Print(LinkList L)
{
    if (L->next != NULL)
    {
        R_Print(L->next);
    }
    if (L != NULL)
    {
        printf(L->data);
    }
}