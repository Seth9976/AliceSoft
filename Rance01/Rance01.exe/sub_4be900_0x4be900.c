// 函数: sub_4be900
// 地址: 0x4be900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi
int32_t* var_10 = edi
sub_4be9f0(arg1)
sub_4beeb0(arg1, arg2)
sub_4bea50(arg1, arg4)

if (arg3 != 0)
    sub_4beae0(arg1)
    void* var_14_2 = arg5
    char eax_1 = sub_4bec20(arg1)
    
    if (eax_1 == 0)
        return eax_1

arg1[0xc] = arg6
void* eax_2

if (*(arg5 + 0xa4) != *(arg5 + 0xa8))
    int32_t* i = *arg1
    
    if (i != arg1[1])
        eax_2 = &i[0x2e]
        
        do
            int32_t* ecx_3 = *(arg5 + 0xa4) + *i * 0xc
            *(eax_2 - 0xb0) = *ecx_3
            *(eax_2 - 0xac) = ecx_3[1]
            *(eax_2 - 0xa8) = ecx_3[2]
            int32_t* ecx_7 = *(arg5 + 0xa4) + *(eax_2 - 0x60) * 0xc
            *(eax_2 - 0x58) = *ecx_7
            *(eax_2 - 0x54) = ecx_7[1]
            *(eax_2 - 0x50) = ecx_7[2]
            int32_t* ecx_11 = *(arg5 + 0xa4) + *(eax_2 - 8) * 0xc
            *eax_2 = *ecx_11
            *(eax_2 + 4) = ecx_11[1]
            *(eax_2 + 8) = ecx_11[2]
            i = &i[0x45]
            eax_2 += 0x114
        while (i != arg1[1])

eax_2.b = 1
return eax_2
