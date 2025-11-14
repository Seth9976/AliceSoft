// 函数: sub_4cccb0
// 地址: 0x4cccb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4ccdc0(arg1)
int32_t* ecx = *(arg2 + 0x30)
int32_t** i = *ecx
int32_t** i_1 = i

if (i != ecx)
    do
        int32_t* ecx_1 = i[4]
        
        if (ecx_1 == 0)
            i.b = 0
            return i
        
        int32_t* var_10_1 = &i[3]
        int32_t* var_c
        sub_42e070(arg1, &var_c, &i[3])
        
        if (var_c != arg1[1])
            i.b = 0
            return i
        
        char* eax_2 = operator new(0x5c)
        char* esi_1
        
        if (eax_2 == 0)
            esi_1 = nullptr
        else
            long double x87_r7_1 = float.t(1)
            *eax_2 = 0
            *(eax_2 + 4) = fconvert.s(x87_r7_1)
            esi_1 = eax_2
            *(eax_2 + 8) = fconvert.s(x87_r7_1)
            __builtin_memset(&eax_2[0xc], 0, 0x18)
            __builtin_memset(&eax_2[0x28], 0, 0x14)
            *(eax_2 + 0x54) = 0xf
            *(eax_2 + 0x50) = 0
            eax_2[0x40] = 0
        
        if (sub_4cc700(esi_1, ecx_1, arg3).b == 0)
            if (esi_1 != 0)
                sub_4cc4c0(esi_1)
                char* var_24_4 = esi_1
                sub_6b4d5b()
            
            i.b = 0
            return i
        
        *sub_4ccf80(arg1, var_10_1) = esi_1
        sub_5cc250(&i_1)
        i = i_1
    while (i != *(arg2 + 0x30))

i.b = 1
return i
