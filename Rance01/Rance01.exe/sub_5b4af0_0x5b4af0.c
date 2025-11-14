// 函数: sub_5b4af0
// 地址: 0x5b4af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u> 0x20)
label_5b4bee:
    int32_t eax_12 = arg1[2]
    
    if (eax_12 != 0)
        __free_base(eax_12)
    
    __builtin_memset(arg1, 0, 0x14)
    return 0

int32_t eax_1 = arg1[4]

if (*arg1 s< eax_1 - 4)
    goto label_5b4b51

if (arg1[3] == 0)
    return eax_1

if (eax_1 s> 0x7ffffeff)
    goto label_5b4bee

int32_t eax_3 = _realloc(arg1[2], eax_1 + 0x100)

if (eax_3 == 0)
    goto label_5b4bee

int32_t ecx_2 = *arg1
arg1[4] += 0x100
arg1[2] = eax_3
arg1[3] = ecx_2 + eax_3
label_5b4b51:
int32_t eax_5 = arg2 & *((arg3 << 2) + &data_745e00)
char* edx_2 = arg1[3]
int32_t ebp = arg1[1]
int32_t ebx
ebx.b = eax_5.b
ebx.b <<= ebp.b
int32_t edi_1 = arg3 + ebp
*edx_2 |= ebx.b

if (edi_1 s>= 8)
    *(arg1[3] + 1) = (eax_5 u>> (8 - (arg1[1]).b)).b
    
    if (edi_1 s>= 0x10)
        *(arg1[3] + 2) = (eax_5 u>> (0x10 - (arg1[1]).b)).b
        
        if (edi_1 s>= 0x18)
            *(arg1[3] + 3) = (eax_5 u>> (0x18 - (arg1[1]).b)).b
            
            if (edi_1 s>= 0x20)
                int32_t edx_9 = arg1[1]
                
                if (edx_9 == 0)
                    *(arg1[3] + 4) = 0
                else
                    *(arg1[3] + 4) = (eax_5 u>> (0x20 - edx_9.b)).b

int32_t eax_9
int32_t edx_11
edx_11:eax_9 = sx.q(edi_1)
int32_t eax_11 = (eax_9 + (edx_11 & 7)) s>> 3
*arg1 += eax_11
arg1[3] += eax_11
arg1[1] = edi_1 & 7
return eax_11
