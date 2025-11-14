// 函数: sub_62dd50
// 地址: 0x62dd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x9c)
int32_t ebp = arg3
int32_t edi = *(arg1 + 0x1bc)
uint32_t esi_2 = (arg4[4] * ebx) u>> 1
char eax_1

if (edi s>= ebp || *(arg1 + 0x1c4) s<= ebx + ebp)
    eax_1 = 0
else
    eax_1 = 1

void* ecx_1 = *(arg1 + 0x1c4)
int32_t edx
edx.b = eax_1
char eax_3

if (ecx_1 s>= ebp || edi s<= ebx + ebp)
    eax_3 = 0
else
    eax_3 = 1

edx.b |= eax_3
arg3.b = edx.b
void* edx_2 = arg2 - sub_70c710(float.t(esi_2) * fconvert.t(-0.80000000000000004))
int32_t eax_6

if (*(arg1 + 0x1b8) s<= edx_2 && edi s>= ebp)
    eax_6 = ebx + ebp

char eax_7

if (*(arg1 + 0x1b8) s> edx_2 || edi s< ebp || edi s> eax_6 || *(arg1 + 0x1c0) s< arg2 + esi_2
        || ecx_1 s< ebp || ecx_1 s> eax_6)
    eax_7 = 0
else
    eax_7 = 1

int32_t ecx_5 = *(arg1 + 0x1b8)
arg3.b |= eax_7
int32_t eax_8

if (ecx_5 s<= edx_2 && edi s>= ebp)
    eax_8 = ebx + ebp

char eax_9

if (ecx_5 s> edx_2 || edi s< ebp || edi s> eax_8 || ecx_1 s<= eax_8)
    eax_9 = 0
else
    eax_9 = 1

void* edx_3
edx_3.b = arg3.b
int32_t esi_3 = esi_2 + arg2
edx_3.b |= eax_9
arg3.b = edx_3.b
char eax_11

if (ecx_5 s< esi_3 || edi s< ebp)
    eax_11 = 0
else
    int32_t eax_10 = ebx + ebp
    
    if (edi s> eax_10)
        eax_11 = 0
    else if (*(arg1 + 0x1c0) s> edx_2 || ecx_1 s< ebp || ecx_1 s> eax_10)
        edx_3.b = arg3.b
        eax_11 = 0
    else
        edx_3.b = arg3.b
        eax_11 = 1

edx_3.b |= eax_11
char eax_13
void* ecx_6

if (ecx_5 s< esi_3 || edi s< ebp || edi s> ebx + ebp)
    ecx_6 = ecx_1
    eax_13 = 0
else
    ecx_6 = ecx_1
    
    eax_13 = ecx_6 s>= ebp ? 0 : 1

edx_3.b |= eax_13
char eax_16

if (edi s>= ebp || *(arg1 + 0x1c0) s< esi_3 || ecx_6 s< ebp || ecx_6 s> ebx + ebp)
    eax_16 = 0
else
    eax_16 = 1

edx_3.b |= eax_16
int32_t eax_17 = ebx + ebp
char result

if (edi s<= eax_17 || *(arg1 + 0x1c0) s> edx_2 || ecx_6 s< ebp || ecx_6 s> eax_17)
    result = 0
else
    result = 1

result |= edx_3.b

if (result == 0)
    return result

if (sub_402680(0x733cc4, arg4) == 0)
    return sub_402000(arg5, arg4, 0, 0xffffffff)

return sub_402cb0(arg5, 0x733cc8, 2)
