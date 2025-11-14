// 函数: $$000000
// 地址: 0x70c1a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi
char* var_4 = esi
arg2:1.b ^= *arg1
char* eax = var_4
*eax ^= arg2:1.b
char* ebp
var_4 = ebp
char** ebp_1 = &var_4
int32_t entry_ebx
int32_t var_10 = entry_ebx + 2
char* var_14 = esi
char** var_1c = &var_4
void* const ebx_2 = arg4
int32_t result

if ((*(arg3 + 4) & 6) != 0)
    char** var_20_4 = &var_4
    __local_unwind2(ebx_2, 0xffffffff)
    result = 1
else
    void* var_c = arg3
    int32_t var_8_1 = arg5
    *(ebx_2 - 4) = &var_c
    int32_t esi_1 = *(ebx_2 + 0xc)
    int32_t edi_1 = *(ebx_2 + 8)
    
    if (sub_70c3c0(ebx_2) s<= 0)
        *(arg3 + 4) |= 8
    label_70c282:
        result = 1
    else
        while (true)
            if (esi_1 == 0xffffffff)
                goto label_70c282
            
            int32_t eax_5 = *(edi_1 + esi_1 * 0xc + 4)
            
            if (eax_5 != 0)
                int32_t eax_7 = eax_5(ebp_1, esi_1, var_1c)
                ebx_2 = ebp_1[3]
                
                if (eax_7 != 0)
                    if (eax_7 s< 0)
                        result = 0
                        break
                    
                    sub_70c2c1(ebp_1[2], 1)
                    int32_t edi_3 = *(ebx_2 + 8)
                    sub_6bfea0(ebx_2)
                    ebp_1 = ebx_2 + 0x10
                    __local_unwind2(ebx_2, esi_1)
                    int32_t ecx_3 = esi_1 * 3
                    __NLG_Notify(*(edi_3 + (ecx_3 << 2) + 8), ebp_1, 1)
                    *(ebx_2 + 0xc) = *(edi_3 + (ecx_3 << 2))
                    ebx_2 = nullptr
                    esi_1 = 0
                    (*(edi_3 + (ecx_3 << 2) + 8))()
            
            edi_1 = *(ebx_2 + 8)
            esi_1 = *(edi_1 + esi_1 * 0xc)

*var_1c
return result
