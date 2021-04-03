/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-03-31 15:37:15
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-03-31 15:37:15
 * @Github:: https://github.com/NameQuin
 */

//设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度位O(1).

void Reverse(SeqList &L){
    for(int i=0;i<(L.length/2);i++)
    {
        Elemtype temp = L.data[i];
        L.data[i] = L.data[L.length-1-i];
        L.data[L.length-1-i] = temp;
    }
    return;
}