// 函数: sub_6c4ff0
// 地址: 0x6c4ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1
int32_t i = 0xffffffff

while (i != 0)
    bool cond:0_1 = 0 != *edi
    edi += 1
    i -= 1
    
    if (not(cond:0_1))
        break

int32_t i_1 = neg.d(i + 1)
void* edi_1 = edi - 1

while (i_1 != 0)
    bool cond:1_1 = arg2 != *edi_1
    edi_1 -= 1
    i_1 -= 1
    
    if (not(cond:1_1))
        break

if (*(edi_1 + 1) == arg2)
    return edi_1 + 1

return nullptr
