// 函数: sub_410560
// 地址: 0x410560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &graph::CGraph::`vftable'{for `IGraph'}
int32_t eax = arg1[4]

if (eax != 0)
    int32_t var_c_1 = eax
    sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t* result = arg1[1]

if (result != 0)
    if (*result != 0)
        int32_t var_c_2 = *result
        sub_6b53b2()
    
    int32_t var_c_3 = arg1[1]
    result = sub_6b53b2()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
return result
