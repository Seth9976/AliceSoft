// 函数: sub_4d31f0
// 地址: 0x4d31f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[1]
int32_t ecx_1

if (arg1 u< eax)
    ecx_1 = *arg2

int32_t* result

if (arg1 u>= eax || ecx_1 u> arg1)
    if (eax == arg2[2])
        sub_4d38b0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = &sealengine::CFrameMulColor::`vftable'
        result[3] = arg1[3]
        result[4] = arg1[4]
        result[5] = arg1[5]
        result[6] = arg1[6]
        int32_t edx_6
        edx_6.b = arg1[7].b
        result[7].b = edx_6.b
else
    if (eax == arg2[2])
        sub_4d38b0(arg2)
    
    result = arg2[1]
    int32_t* esi_3 = ((arg1 - ecx_1) & 0xffffffe0) + *arg2
    
    if (result != 0)
        *result = *esi_3
        result[1] = esi_3[1]
        result[2] = &sealengine::CFrameMulColor::`vftable'
        result[3] = esi_3[3]
        result[4] = esi_3[4]
        result[5] = esi_3[5]
        result[6] = esi_3[6]
        int32_t ecx_5
        ecx_5.b = esi_3[7].b
        result[7].b = ecx_5.b
        arg2[1] += 0x20
        return result

arg2[1] += 0x20
return result
