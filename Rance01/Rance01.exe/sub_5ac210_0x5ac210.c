// 函数: sub_5ac210
// 地址: 0x5ac210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg3
char eax = (*(arg3 + 0x6c)).b
var_4 = nullptr

if ((eax & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before sBIT")
    noreturn

char* ecx

if ((eax & 4) == 0)
    if ((eax & 2) != 0)
        arg2 = sub_5a5de0("Out of place sBIT chunk", arg3)
    
    if (arg1 == 0 || (*(arg1 + 8) & 2) == 0)
        uint32_t eax_2 = 3
        
        if (*(arg3 + 0x13b) != 3)
            eax_2 = zx.d(*(arg3 + 0x13f))
        
        if (arg4 == eax_2 && arg4 u<= 4)
            int32_t* var_18 = &var_4
            sub_5ab610(eax_2, arg3, arg2)
            uint32_t result = sub_5ab650(arg3, 0)
            
            if (result == 0)
                char edx
                
                if ((*(arg3 + 0x13b) & 2) == 0)
                    result.b = var_4.b
                    *(arg3 + 0x19b) = result.b
                    *(arg3 + 0x198) = result.b
                    *(arg3 + 0x199) = result.b
                    *(arg3 + 0x19a) = result.b
                    result = zx.d(var_4:1.b)
                    *(arg3 + 0x19c) = result.b
                else
                    result.b = var_4:1.b
                    char ecx_1 = var_4:2.b
                    *(arg3 + 0x198) = var_4.b
                    edx = var_4:3.b
                    *(arg3 + 0x199) = result.b
                    *(arg3 + 0x19a) = ecx_1
                    *(arg3 + 0x19c) = edx
                
                if (arg1 != 0)
                    *(arg1 + 0x44) = *(arg3 + 0x198)
                    edx = *(arg3 + 0x19c)
                    *(arg1 + 8) |= 2
                    *(arg1 + 0x48) = edx
            
            return result
        
        ecx = "Incorrect sBIT chunk length"
    else
        ecx = "Duplicate sBIT chunk"
else
    ecx = "Invalid sBIT after IDAT"

sub_5a5de0(ecx, arg3)
return sub_5ab650(arg3, arg4)
