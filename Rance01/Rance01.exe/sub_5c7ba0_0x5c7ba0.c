// 函数: sub_5c7ba0
// 地址: 0x5c7ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg2[2] = (*(*arg1 + 0x10))()
arg2[3] = (*(*arg1 + 0x14))()
int32_t eax_4 = (*(*arg1 + 0x18))()
arg2[4] = eax_4
int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_4)
arg2[8] = (eax_5 + (edx_3 & 7)) s>> 3
arg2[5] = (*(*arg1 + 0x1c))()
arg2[6] = (*(*arg1 + 0x20))()
arg2[7].b = (*(*arg1 + 0x24))()
int32_t eax_15 = (*(*arg1 + 0x28))()
bool cond:0 = arg2[7].b == 0
*(arg2 + 0x1d) = eax_15.b

if (cond:0)
    *arg2 = 0
else
    *arg2 = (*(*arg1 + 8))(0, 0)

if (*(arg2 + 0x1d) == 0)
    arg2[1] = 0
    eax_15.b = 1
    return eax_15

arg2[1] = (*(*arg1 + 0xc))(0, 0)
int32_t eax_18
eax_18.b = 1
return eax_18
