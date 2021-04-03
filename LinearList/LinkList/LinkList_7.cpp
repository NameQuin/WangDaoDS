/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-04-03 12:55:25
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-04-03 16:07:38
 * @Github:: https://github.com/NameQuin
 */
//设在一个带头结点的单链表中,所有元素结点的数据值无序,试编写一个函数,删除表中所有介于给定的两个值(作为函数参数给出)之间的元素的元素(若存在)

void Del_BetWeem(LinkList &L, ElemType bot, ElemType top)
{
    if (L->next == NULL)
        return;
    LNode *p = L->next, *pre = L;
    while (p != NULL)
    {
        if (p.data >= bot && p.data <= top)
        {
            LNode *tmp = p;
            pre->next = p->next;
            delete tmp;
        }
        pre = pre->next;
        p = p->next;
    }
}
