// 函数: sub_5a63d0
// 地址: 0x5a63d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t var_10 = 0
int32_t var_38 = 0x2c4
int128_t* result = sub_6b5c43(0x2c4)
int128_t* result_2 = result

if (result != 0)
    sub_6bc670(result, 0, 0x2c4)

int128_t* result_1 = result

if (result != 0)
    result[0x28].d = 0x7fffffff
    *(result + 0x284) = 0x7fffffff
    *(result + 0x288) = 0
    int32_t* result_4 = result
    *(result + 0x28c) = 0
    int128_t* result_3 = result
    
    if (result_4 == 0)
        result_4 = nullptr
    else
        result_4[0x10] = sub_6b6200
    
    int32_t* result_6 = result_4
    struct _EXCEPTION_REGISTRATION_RECORD* edi
    __setjmp3(&__saved_ebp, result, edi, result_4, 0, edi, arg1)
    
    if (result != 0)
        result[0x26].d = 0
        *(result + 0x264) = 0
        *(result + 0x268) = 0
    
    if (result != 0)
        *(result + 0x4c) = 0
        *(result + 0x44) = sub_5b2820
        *(result + 0x48) = 0
    
    if (sub_5a4050(result, "1.5.13") == 0)
        var_10 = 1
    
    if (var_10 == 0)
        *(result + 0xb4) = 0x2000
        result[0xb].d = sub_5a6370(*(result + 0xb4), result)
        
        if (result[0xb].d == 0)
            var_10 = 1
    
    *(result + 0x98) = sub_5a3f60
    *(result + 0x9c) = sub_5a3fb0
    result[0xa].d = result
    
    if (var_10 == 0)
        switch (sub_5a0a50("1.2.7", result, result + 0x78) + 6)
            case 0
                sub_5a5de0("zlib version error", result)
                var_10 = 1
            case 2
                sub_5a5de0("zlib memory error", result)
                var_10 = 1
            case 4
                sub_5a5de0("zlib stream error", result)
                var_10 = 1
            case 6
                nop
            default
                sub_5a5de0("Unknown zlib error", result)
                var_10 = 1
    
    if (var_10 == 0)
        *(result + 0x84) = result[0xb].d
        *(result + 0x88) = *(result + 0xb4)
        
        if (result != 0)
            *(result + 0x58) = 0
            *(result + 0x54) = sub_5a75b0
            
            if (result[5].d != 0)
                result[5].d = 0
                sub_5a5de0("Can't set both read_data_fn and write_data_fn in the same structure", 
                    result)
            
            *(result + 0x168) = 0
        
        sub_6b4885(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t edx_7 = result[0xb].d
    int128_t* result_5 = result
    
    if (result_5 != 0 && edx_7 != 0)
        int32_t ecx_12 = *(result_5 + 0x268)
        
        if (ecx_12 == 0)
            result_5 = __free_base(edx_7)
        else
            result_5 = ecx_12(result_5, edx_7)
    
    result[0xb].d = 0
    sub_5a6220(result_5, 0, 0, result)

sub_6b4885(eax_1 ^ &__saved_ebp)
return 0
