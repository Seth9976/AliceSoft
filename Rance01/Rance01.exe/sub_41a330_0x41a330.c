// 函数: sub_41a330
// 地址: 0x41a330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
sub_418d30(arg1)
int128_t* ecx = *(arg1 + 0x28)
int128_t* edi = *(arg1 + 0x24)

if (edi != ecx)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx, ebp_1)
    *(arg1 + 0x28) = ebp_1 + edi

uint32_t* result = *ebx

if (&result[1] u<= ebx[1])
    *(arg1 + 0x34) =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *ebx += 4
    result = *ebx
    
    if (&result[1] u<= ebx[1])
        uint32_t ebp_9 =
            ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        *ebx = &result[1]
        arg2 = nullptr
        
        if (ebp_9 s> 0)
            void* eax_8
            
            do
                result = *ebx
                
                if (&result[1] u> ebx[1])
                    goto label_41a4eb
                
                uint32_t var_4 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                    | zx.d(*(result + 1))) << 8 | zx.d(*result)
                *ebx = &result[1]
                sub_416780(&var_4, arg1 + 0x24)
                eax_8 = arg2 + 1
                arg2 = eax_8
            while (eax_8 s< ebp_9)
        
        result = *ebx
        
        if (&result[1] u<= ebx[1])
            int32_t ebp_16 =
                ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
                | zx.d(*result)
            *ebx = &result[1]
            
            if (ebp_16 s> 0)
                arg2 = nullptr
                
                while (true)
                    char* ecx_8 = *ebx
                    
                    if (&ecx_8[4] u> ebx[1])
                        break
                    
                    uint32_t var_1c_2 =
                        ((zx.d(ecx_8[3]) << 8 | zx.d(ecx_8[2])) << 8 | zx.d(ecx_8[1])) << 8
                        | zx.d(*ecx_8)
                    *ebx = &ecx_8[4]
                    sub_418a00(arg1)
                    
                    if (*(arg1 + 0x10) == *(arg1 + 0x14))
                        int32_t var_1c_4 = sub_418fd0(arg1)
                        sub_418a00(arg1)
                    
                    if (sub_418670(
                            *(*(arg1 + 0x10) + ((*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2 << 2) - 4), 
                            ebx).b == 0)
                        break
                    
                    result = arg2 + 1
                    arg2 = result
                    
                    if (result s>= ebp_16)
                        result.b = 1
                        return result

label_41a4eb:
result.b = 0
return result
