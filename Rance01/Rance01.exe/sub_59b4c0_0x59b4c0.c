// 函数: sub_59b4c0
// 地址: 0x59b4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* eax = operator new(0x64)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    *eax = 0
    eax[6] = 0xf
    eax[5] = 0
    eax[1].b = 0
    eax[8] = 0
    eax[9] = 0
    eax[0xa] = 0
    __builtin_memset(&eax[0xc], 0, 0x20)
    eax[0x15] = 0
    eax[0x16] = 0
    eax[0x17] = 0
    esi = eax

var_4 = esi

if (sub_59a2b0(esi, arg3) == 0)
    if (esi != 0)
        sub_59a220(esi)
        int32_t* var_10_1 = esi
        sub_6b4d5b()
    
    return 0

void* esi_1 = *arg2
int32_t* result = sub_576850(esi_1, *(esi_1 + 4), &var_4)
int32_t ecx_1 = arg2[1]

if (0x3ffffffe - ecx_1 u< 1)
    sub_6b47bf("list<T> too long")
    noreturn

arg2[1] = ecx_1 + 1
*(esi_1 + 4) = result
*result[1] = result

while (arg2[1] s>= arg2[3])
    void* esi_2 = *(**arg2 + 8)
    
    if (esi_2 != 0)
        sub_59a220(esi_2)
        void* var_10_3 = esi_2
        sub_6b4d5b()
    
    int32_t** ecx_6 = *arg2
    result = *ecx_6
    
    if (result != ecx_6)
        *result[1] = *result
        int32_t* result_1 = result
        *(*result + 4) = result[1]
        sub_6b4d5b()
        arg2[1] -= 1

result.b = 1
return result
