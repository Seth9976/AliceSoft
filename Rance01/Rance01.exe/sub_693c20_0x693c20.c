// 函数: sub_693c20
// 地址: 0x693c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i_1 = *(arg1 + 0x74)

if (i_1 != *(arg1 + 0x78))
    int32_t* i = i_1
    
    do
        (*(**i + 0x44))(*(arg1 + 0x84))
        i = &i[1]
    while (i != *(arg1 + 0x78))

int32_t* result = sub_5d1530()
int32_t** ebp = data_797d8c

if (*ebp != 0)
    (*ebp)[0xc].b = 0
else
    result = sub_597300(0x737314)
    
    if (result != 0)
        result = (**result)(0x737324)
        *ebp = result
        
        if (result != 0)
            (*ebp)[0xc].b = 0

*(arg1 + 0x21) = 0
*(arg1 + 0x24) = 0xffffffff
return result
