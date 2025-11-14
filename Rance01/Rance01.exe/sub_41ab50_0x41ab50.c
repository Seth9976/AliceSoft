// 函数: sub_41ab50
// 地址: 0x41ab50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const var_4 = arg1
uint32_t arg_4
uint32_t ebp = arg_4
char* eax = *ebp

if (&eax[4] u<= *(ebp + 4))
    *(arg1 + 0x10) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
    *ebp += 4
    eax = *ebp
    
    if (&eax[4] u<= *(ebp + 4))
        *(arg1 + 0x14) = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | zx.d(eax[1])) << 8 | zx.d(*eax)
        *ebp += 4
        int32_t* ecx_7 = ebp
        
        if (sub_5546f0(ecx_7, arg1 + 0x18).b != 0 && sub_5546f0(ecx_7, arg1 + 0x1c).b != 0
                && sub_5546f0(ecx_7, arg1 + 0x20).b != 0 && sub_40fea0(ebp, arg1 + 0x24).b != 0)
            sub_41a5b0(arg1)
            int32_t ebx = 0
            arg_4 = 0
            char eax_5 = sub_5546f0(ebp, &arg_4)
            
            if (eax_5 == 0)
                return eax_5
            
            if (arg_4 s> 0)
                do
                    var_4 = nullptr
                    
                    if (sub_5546f0(ebp, &var_4) == 0)
                        return 0
                    
                    void* const edx_16 = var_4
                    var_4 = edx_16
                    sub_41a610(ebp, edx_16, arg1)
                    sub_416780(&var_4, arg1 + 0x28)
                    ebx += 1
                    *(arg1 + 0x25) = 1
                while (ebx s< arg_4)
            
            *(arg1 + 0x25) = 1
            return 1

eax.b = 0
return eax
