/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-03-31 15:37:23
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-03-31 15:37:23
 * @Github:: https://github.com/NameQuin
 */

//对长度为n的顺序表L，编写一个时间复杂度为O(n)，空间复杂度为O(1)的算法，该算法删除线性表中所有值为x的数据元素。
//
bool delete_x(SeqList &L)
{
    int k =0;//记录值为x的元素个数；
    int i =0;
    while(i<L.length){
        if(L.data[i]==x){
            k++
        }
        else{
            L.data[i-k] = L.data[i];
        }
        i++;
    }
    L.length -= k;
}