/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-04-03 12:54:50
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-04-03 15:21:40
 * @Github:: https://github.com/NameQuin
 */
//试编写在带头结点的单链表L中删除一个最小值结点的高效算法（假设最小值是唯一的)

void Del_MIN(LinkList &L)
{
    if (L->next == NULL)
        return;
    LNode *pre = L;
    LNode *preMin = pre;
    LNode *p = pre->next;
    LNode *pMin = p;
    while (p != NULL)
    {
        if (p->data < pMin->data)
        {
            pMin = p;
            preMin = pre;
        }
        pre = p;
        p = p->next;
    }
    preMin->next = pMin->next;
    free(pMin);
}