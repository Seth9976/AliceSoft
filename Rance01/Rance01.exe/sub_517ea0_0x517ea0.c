// 函数: sub_517ea0
// 地址: 0x517ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 5
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1

if ((ebx[1] - *ebx) s>> 6 != eax_3)
    sub_4c8660(eax_3, ebx)

void* edi_2 = arg1 + 4
void* var_68 = edi_2
int32_t result = sub_4b5b80(edi_2)
int32_t edx_3 = ebx[1] - *ebx
int32_t ebp = 0

if ((edx_3 & 0xffffffc0) s> 0)
    arg2 = nullptr
    
    while (true)
        struct sealengine::CDualQuaternion::VTable* var_64
        struct sealengine::CDualQuaternion::VTable** eax_5
        eax_5, edx_3 = sub_4b5c50(ebp, edx_3, &var_64, edi_2)
        float var_40[0x10]
        sub_4b9aa0(&var_40, edx_3, eax_5)
        void* edi_4 = *ebx + arg2
        arg2 = &arg2[0x10]
        __builtin_memcpy(edi_4, &var_40, 0x40)
        ebp += 1
        result = (ebx[1] - *ebx) s>> 6
        
        if (ebp s>= result)
            break
        
        edi_2 = var_68

return result
