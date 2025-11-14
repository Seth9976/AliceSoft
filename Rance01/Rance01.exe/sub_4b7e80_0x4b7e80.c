// 函数: sub_4b7e80
// 地址: 0x4b7e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 8)

if (i == *(arg1 + 0xc))
    return 

int128_t* ebp_1 = &i[1]

do
    int32_t* esi_1 = *i
    
    if (((esi_1[8] - esi_1[7]) & 0xfffffffc) s> 4)
        sub_4b7410(esi_1)
        i = &i[1]
        ebp_1 += 4
    else
        if (esi_1 != 0)
            sub_4b7210(esi_1)
            int32_t* var_14_2 = esi_1
            sub_6b4d5b()
        
        sub_6b49d0(i, ebp_1, ((*(arg1 + 0xc) - ebp_1) s>> 2) * 4)
        *(arg1 + 0xc) -= 4
while (i != *(arg1 + 0xc))
