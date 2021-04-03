/*
 * @Descripttion: Powered By Name1e3s
 * @Author: Name1e3s
 * @Date: 2021-03-31 15:37:03
 * @LastEditors: Name1e3s
 * @LastEditTime: 2021-03-31 15:54:51
 * @Github:: https://github.com/NameQuin
 */

//从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值，空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行
ElemType SeqlList2_1(SeqlList &L){
    if(L.length == 0)
    {
        printf("顺序表为空\n");
        return 0;
    }
    ElemType Min = L.data[0];
    int index = 0;
    for(int i=0;i<L.length;i++)
    {
        if(L.data[i]<Min)
        {
            Min = L.data[i];
            index =i;
        }
    }
    L.data[index] = L.data[L.length-1];
    L.length--;
    return Min;
}