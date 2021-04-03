/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-03-31 15:56:16
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-03-31 15:59:10
 * @Github:: https://github.com/NameQuin
 */
Bool *ListInsert(SeqList &L, int i, Elemtype e)
{
    if (i < １ || ｉ > L.length + 1)
        return false;
    if (L.length >= L.MaxSize)
        return false;
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

Bool *ListDelete(SeqList &L, int i, Elemtype e)
{
    if(i<1||i>L.length)
        return false;
    e = L.data[i-1];
    for(int j =i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}