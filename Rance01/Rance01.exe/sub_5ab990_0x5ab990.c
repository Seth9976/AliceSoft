// 函数: sub_5ab990
// 地址: 0x5ab990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* var_114
int32_t eax_1 = data_78c474 ^ &var_114
int128_t* ebx = arg6
int128_t* result

if (ebx u<= arg5)
    if (arg2 != 0)
        void var_104
        sub_5a5eb0(arg5, arg2, 1, &var_104, 1)
        sub_5a5f20(arg4, &var_104, "Unknown compression type @1")
        goto label_5abafb
    
    uint32_t var_128_1 = arg2
    void* eax_3 = arg5 - ebx
    void* eax_4 = sub_5ab830(eax_3, *(arg4 + 0x2a8) + ebx, arg4, arg3, eax_3, arg2)
    int32_t eax_5
    
    if (ebx u< 0xfffffffe && eax_4 u< 0xfffffffe - ebx)
        eax_5 = *(arg4 + 0x28c)
    
    if (ebx u>= 0xfffffffe || eax_4 u>= 0xfffffffe - ebx
            || (eax_5 != 0 && ebx + eax_4 u>= eax_5 - 1))
        sub_5a5de0("Exceeded size limit while expanding chunk", arg4)
        goto label_5abafb
    
    if (eax_4 == 0)
        goto label_5abafb
    
    int128_t* result_1 = ebx + eax_4
    int128_t* eax_7 = sub_5a6370(result_1 + 1, arg4)
    var_114 = eax_7
    
    if (eax_7 == 0)
        sub_5a5de0("Not enough memory to decompress chunk", arg4)
        goto label_5abafb
    
    int32_t ecx_2 = sub_6c02a0(eax_7, *(arg4 + 0x2a8), ebx)
    void* var_134_1 = eax_4
    void* eax_10 = sub_5ab830(eax_3, *(arg4 + 0x2a8) + ebx, arg4, ecx_2, eax_3, ebx + eax_7)
    *(var_114 + ebx + eax_4) = 0
    
    if (eax_10 != eax_4)
        sub_5a5de0("png_inflate logic error", arg4)
        sub_5a6340(arg4, var_114)
        goto label_5abafb
    
    sub_5a6340(arg4, *(arg4 + 0x2a8))
    result = result_1
    *(arg4 + 0x2a8) = var_114
    *arg3 = result
else
    sub_5a5de0("invalid chunklength", arg4)
    ebx = nullptr
label_5abafb:
    result = sub_5a6370(ebx + 1, arg4)
    int128_t* result_2 = result
    
    if (result_2 != 0)
        if (ebx != 0)
            result = sub_6c02a0(result_2, *(arg4 + 0x2a8), ebx)
        
        int32_t ecx_9 = *(arg4 + 0x2a8)
        
        if (ecx_9 != 0)
            int32_t eax_12 = *(arg4 + 0x268)
            
            if (eax_12 == 0)
                result = __free_base(ecx_9)
            else
                result = eax_12(arg4, ecx_9)
        
        *(arg4 + 0x2a8) = result_2
        *(ebx + result_2) = 0
    
    *arg3 = ebx

sub_6b4885(eax_1 ^ &var_114)
return result
