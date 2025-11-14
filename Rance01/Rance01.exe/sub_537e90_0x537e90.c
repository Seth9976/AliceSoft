// 函数: sub_537e90
// 地址: 0x537e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void** arg_4
int32_t* ebx = arg_4
void** eax_1 = sub_429b30(arg2 + 0x11c, ebx)
arg_4 = eax_1
char eax_3

if (eax_1 != *(arg2 + 0x120))
    eax_3 = sub_405dd0(&eax_1[3], ebx)

void*** eax_4

if (eax_1 == *(arg2 + 0x120) || eax_3 != 0)
    var_4 = *(arg2 + 0x120)
    eax_4 = &var_4
else
    eax_4 = &arg_4

void** eax_6 = *eax_4

if (eax_6 != *(arg2 + 0x120))
    int32_t edi_1 = eax_6[0xa]
    
    if (edi_1 s>= 0)
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = muls.dp.d(0x78787879, *(arg2 + 0xa0) - *(arg2 + 0x9c))
        int32_t edx_3 = edx_2 s>> 5
        
        if (edi_1 s< (edx_3 u>> 0x1f) + edx_3)
            return *(arg2 + 0x9c) + edi_1 * 0x44

return 0
