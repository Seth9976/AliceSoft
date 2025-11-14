// 函数: sub_5e4050
// 地址: 0x5e4050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) == *(arg1 + 0x2c))
    int32_t eax
    eax.b = 1
    return eax

int32_t edi = *(arg1 + 0x18)

if (edi != 0xffffffff)
    sub_409390(edi)
    *(arg1 + 0x18) = 0xffffffff

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x5397829d, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_1 = edx s>> 6
void* i_2 = (edx_1 u>> 0x1f) + edx_1
char var_d = 1

if (i_2 s> 0)
    void* edi_1 = nullptr
    void* i_1 = i_2
    void* i
    
    do
        int32_t ecx_2 = *(arg1 + 0x28)
        i_2 = *(edi_1 + ecx_2 + 4)
        void* esi_1 = edi_1 + ecx_2
        
        if (i_2 u<= 0x10)
            switch (i_2)
                case nullptr
                    i_2, edx_1 = sub_5e41f0(arg1, esi_1)
                case 1
                    i_2, edx_1 = sub_5e4250(arg1, esi_1)
                case 2
                    i_2, edx_1 = sub_5e42b0(arg1, esi_1)
                case 3
                    i_2, edx_1 = sub_5e4300(arg1, esi_1)
                case 4
                    i_2, edx_1 = sub_5e4370(arg1, esi_1)
                case 5
                    i_2, edx_1 = sub_5e43f0(esi_1, arg1)
                case 6
                    i_2, edx_1 = sub_5e4490(arg1, esi_1)
                case 7
                    i_2, edx_1 = sub_5e45b0(arg1, esi_1)
                case 8
                    i_2, edx_1 = sub_5e4c80(arg1, esi_1)
                case 9
                    i_2, edx_1 = sub_5e53c0(arg1, esi_1)
                case 0xa
                    i_2, edx_1 = sub_5e54b0(arg1, esi_1)
                case 0xb
                    i_2, edx_1 = sub_5e55d0(arg1, esi_1)
                case 0xc
                    i_2, edx_1 = sub_5e5800(arg1, esi_1)
                case 0xd
                    i_2, edx_1 = sub_5e5ad0(esi_1, edx_1, arg1)
                case 0xe
                    i_2, edx_1 = sub_5e5b60(esi_1, edx_1, arg1)
                case 0xf
                    i_2, edx_1 = sub_5e5c30(esi_1, edx_1, arg1)
                case 0x10
                    i_2, edx_1 = sub_5e5d00(esi_1, edx_1, arg1)
            
            if (i_2.b == 0)
                var_d = i_2.b
        
        edi_1 += 0xc4
        i = i_1
        i_1 -= 1
    while (i != 1)

i_2.b = var_d
*(arg1 + 0x48) = 1
return i_2
