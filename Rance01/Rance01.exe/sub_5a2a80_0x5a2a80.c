// 函数: sub_5a2a80
// 地址: 0x5a2a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg2
int32_t* eax_1 = arg2[2]
int32_t ecx = eax_1[3]
int32_t edx = *eax_1
int32_t ebp = 0xffffffff
int32_t eax_2 = 0
int32_t var_8 = 0xffffffff
*(arg1 + 0x1450) = 0
*(arg1 + 0x1454) = 0x23d

if (ecx s> 0)
    do
        if (*(edi + (eax_2 << 2)) == 0)
            *(edi + (eax_2 << 2) + 2) = 0
        else
            *(arg1 + 0x1450) += 1
            *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = eax_2
            var_8 = eax_2
            *(eax_2 + arg1 + 0x1458) = 0
            ebp = eax_2
        
        eax_2 += 1
    while (eax_2 s< ecx)

if (*(arg1 + 0x1450) s< 2)
    do
        int32_t eax_3
        
        if (ebp s>= 2)
            eax_3 = 0
        else
            ebp += 1
            eax_3 = ebp
        
        *(arg1 + 0x1450) += 1
        *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = eax_3
        *(edi + (eax_3 << 2)) = 1
        *(arg1 + eax_3 + 0x1458) = 0
        *(arg1 + 0x16a8) -= 1
        
        if (edx != 0)
            *(arg1 + 0x16ac) -= zx.d(*(edx + (eax_3 << 2) + 2))
    while (*(arg1 + 0x1450) s< 2)
    
    var_8 = ebp

arg2[1] = ebp
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(*(arg1 + 0x1450))

for (int32_t i = (eax_6 - edx_1) s>> 1; i s>= 1; i -= 1)
    int32_t i_1 = i
    edx_1 = sub_5a2700(arg1, edi, edx_1)

int32_t ebx = ecx

do
    int32_t eax_9 = *(arg1 + 0x1450)
    int32_t edx_2 = *(arg1 + (eax_9 << 2) + 0xb5c)
    int32_t ebp_2 = *(arg1 + 0xb60)
    *(arg1 + 0x1450) = eax_9 - 1
    int32_t var_18_1 = 1
    *(arg1 + 0xb60) = edx_2
    sub_5a2700(arg1, edi, edx_2)
    int32_t eax_12 = *(arg1 + 0xb60)
    *(arg1 + 0x1454) -= 1
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = ebp_2
    *(arg1 + 0x1454) -= 1
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = eax_12
    int32_t ecx_5
    ecx_5.w = *(edi + (eax_12 << 2))
    ecx_5.w += *(edi + (ebp_2 << 2))
    *(edi + (ebx << 2)) = ecx_5.w
    ecx_5.b = *(arg1 + eax_12 + 0x1458)
    int32_t edx_3
    edx_3.b = *(arg1 + ebp_2 + 0x1458)
    char ecx_6
    
    if (edx_3.b u< ecx_5.b)
        ecx_6 = ecx_5.b
    else
        ecx_6 = edx_3.b
    
    *(arg1 + ebx + 0x1458) = ecx_6 + 1
    int16_t ecx_7 = ebx.w
    *(edi + (eax_12 << 2) + 2) = ecx_7
    *(edi + (ebp_2 << 2) + 2) = ecx_7
    *(arg1 + 0xb60) = ebx
    int32_t var_18_2 = 1
    ebx += 1
    sub_5a2700(arg1, edi, edx_3)
while (*(arg1 + 0x1450) s>= 2)

*(arg1 + 0x1454) -= 1
int32_t edx_4 = *(arg1 + 0xb60)
*(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = edx_4
int32_t var_18_3 = var_8
return sub_5a29f0(var_8, arg1 + 0xb3c, edi, sub_5a27d0(arg1, edx_4, arg2))
