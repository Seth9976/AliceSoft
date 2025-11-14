// 函数: sub_5a8540
// 地址: 0x5a8540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x108)

if (ecx == 0)
    sub_5a5c60(arg1, "NULL row buffer")
    noreturn

int32_t eax_1 = *(arg1 + 0x70)

if ((eax_1 & 0x4000) != 0 && (eax_1.b & 0x40) == 0)
    sub_5a5c60(arg1, "Uninitialized row")
    noreturn

void* eax_3 = *(arg1 + 0x74)
uint32_t* edx

if ((eax_3 & 0x1000) != 0)
    if (arg2[2].b != 3)
        if (*(arg1 + 0x134) == 0 || (eax_3 & 0x2000000) == 0)
            int32_t __saved_esi_3 = 0
        else
            void* __saved_esi_2 = arg1 + 0x1a8
        
        ecx, edx = sub_5aad60(eax_3, ecx + 1, ecx, arg2)
    else
        ecx, edx =
            sub_5aab50(arg2, ecx + 1, *(arg1 + 0x128), *(arg1 + 0x1a4), zx.d(*(arg1 + 0x134)))

int32_t eax_6 = *(arg1 + 0x74)

if ((eax_6 & 0x40000) != 0 && eax_6.b s>= 0)
    eax_6.b = arg2[2].b
    
    if (eax_6.b == 6 || eax_6.b == 4)
        ecx, edx = sub_5b0d00(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x600000) != 0)
    int32_t eax_9
    eax_9, ecx, edx = sub_5a9290(*(arg1 + 0x108) + 1, edx, arg1, arg2)
    
    if (eax_9 != 0)
        int32_t eax_11 = *(arg1 + 0x74) & 0x600000
        *(arg1 + 0x251) = 1
        
        if (eax_11 == &__dos_header)
            edx = sub_5a5de0("png_do_rgb_to_gray found nongray pixel", arg1)
        
        ecx = *(arg1 + 0x74) & 0x600000
        
        if (ecx == 0x200000)
            sub_5a5c60(arg1, "png_do_rgb_to_gray found nongray pixel")
            noreturn

if ((*(arg1 + 0x74) & 0x4000) != 0 && (*(arg1 + 0x6c) & 0x800) == 0)
    ecx, edx = sub_5a9130(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x80) != 0)
    int32_t* var_14_4 = arg2
    ecx, edx = sub_5a9690(*(arg1 + 0x108) + 1, arg1, edx)

int32_t eax_17 = *(arg1 + 0x74)

if ((eax_17 & 0x2000) != 0 && (eax_17 & 0x600000) == 0)
    if (eax_17.b s>= 0)
    label_5a86be:
        
        if (*(arg1 + 0x13b) != 3)
            void* edx_5 = *(arg1 + 0x108) + 1
            ecx, edx = sub_5aa650(eax_17, edx_5, arg1, arg2, edx_5)
    else if (*(arg1 + 0x134) == 0 && (*(arg1 + 0x13b) & 4) == 0)
        goto label_5a86be

void* eax_18 = *(arg1 + 0x74)

if ((eax_18 & 0x40000) != 0 && eax_18.b s< 0)
    eax_18.b = arg2[2].b
    
    if (eax_18.b == 6 || eax_18.b == 4)
        eax_18, ecx, edx = sub_5b0d00(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x800000) != 0 && (arg2[2].b & 4) != 0)
    eax_18, ecx, edx = sub_5aaa70(arg1, edx, arg2, *(arg1 + 0x108) + 1)

if ((*(arg1 + 0x74) & 0x4000000) != 0)
    eax_18, ecx, edx = sub_5a8c30(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x400) != 0)
    eax_18, ecx, edx = sub_5a8c90(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x40) != 0)
    eax_18, ecx, edx =
        sub_5ab1a0(eax_18, *(arg1 + 0x1fc), *(arg1 + 0x108) + 1, arg2, *(arg1 + 0x1f8))
    
    if (arg2[1] == 0)
        sub_5a5c60(arg1, "png_do_quantize returned rowbytes=0")
        noreturn

if ((*(arg1 + 0x74) & 0x200) != 0)
    eax_18, ecx, edx = sub_5ab160(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x4000) != 0 && (*(arg1 + 0x6c) & 0x800) != 0)
    eax_18, ecx, edx = sub_5a9130(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x20) != 0)
    eax_18, ecx, edx = sub_5b0c10(*(arg1 + 0x108) + 1, edx.b, arg2)

if ((*(arg1 + 0x74) & 8) != 0)
    eax_18, ecx, edx = sub_5a8a40(*(arg1 + 0x108) + 1, arg2, arg1 + 0x19d)

if ((*(arg1 + 0x74) & 4) != 0)
    int32_t* var_14_10 = arg2
    eax_18, ecx, edx = sub_5a8920(*(arg1 + 0x108) + 1, edx)

if (arg2[2].b == 3 && *(arg1 + 0x130) s>= 0)
    eax_18, ecx, edx = sub_5b0ef0(arg2, arg1)

if ((*(arg1 + 0x74) & 1) != 0)
    eax_18, ecx, edx = sub_5b0e20(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x10000) != 0)
    eax_18, ecx, edx = sub_5b0cb0(*(arg1 + 0x108) + 1, edx.b, arg2)

if ((*(arg1 + 0x74) & 0x8000) != 0)
    int32_t var_14_11 = *(arg1 + 0x70)
    eax_18, edx = sub_5a8eb0(*(arg1 + 0x108) + 1, zx.d(*(arg1 + 0x14a)), ecx, arg2.b)

if ((*(arg1 + 0x74) & 0x80000) != 0)
    eax_18, edx = sub_5a8e00(arg2, edx, *(arg1 + 0x108) + 1)

if ((*(arg1 + 0x74) & 0x20000) != 0)
    eax_18 = sub_5a8cd0(arg2, edx, *(arg1 + 0x108) + 1)

if ((*(arg1 + 0x74) & 0x10) != 0)
    eax_18 = sub_5b0c80(*(arg1 + 0x108) + 1, arg2)

if ((*(arg1 + 0x74) & 0x100000) != 0)
    int32_t eax_45 = *(arg1 + 0x5c)
    
    if (eax_45 != 0)
        eax_45(arg1, arg2, *(arg1 + 0x108) + 1)
    
    eax_45.b = *(arg1 + 0x68)
    
    if (eax_45.b != 0)
        *(arg2 + 9) = eax_45.b
    
    eax_45.b = *(arg1 + 0x69)
    
    if (eax_45.b != 0)
        *(arg2 + 0xa) = eax_45.b
    
    eax_45.b = *(arg2 + 0xa)
    eax_45.w = muls.dp.b(eax_45.b, *(arg2 + 9))
    *(arg2 + 0xb) = eax_45.b
    uint32_t eax_46 = zx.d(eax_45.b)
    
    if (eax_45.b u>= 8)
        int32_t eax_48 = (eax_46 u>> 3) * *arg2
        arg2[1] = eax_48
        return eax_48
    
    eax_18 = (eax_46 * *arg2 + 7) u>> 3
    arg2[1] = eax_18

return eax_18
