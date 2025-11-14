// 函数: sub_651030
// 地址: 0x651030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
char* result = arg1

if (arg2 s> 0)
    void* ebp_1 = data_797ddc
    int32_t* var_14_1 = arg2
    char eax_1
    int32_t edx
    int32_t edx_1
    eax_1, arg1, edx_1 = sub_418b70(ebp_1 + 0xa8, edx, arg1)
    
    if (eax_1 != 0)
        int32_t* var_14_2 = arg2
        char eax_6
        int32_t* ecx_1
        eax_6, ecx_1 = sub_418b70(ebp_1 + 0xa8, edx_1, arg1)
        
        if (eax_6 != 0)
            int32_t eax_7
            eax_7.b = sub_6841d0(arg2, arg3) == 0xa
            
            if (eax_7.b != 0)
                sub_6a28b0(arg3, result)
                return result
        
        char* eax_8 = nullptr
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        
        do
            ecx_1.b = *eax_8
            eax_8 = &eax_8[1]
        while (ecx_1.b != 0)
        
        sub_401270(result, eax_8 - 1, nullptr)
        return result

char* eax_2 = nullptr
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0

do
    arg1.b = *eax_2
    eax_2 = &eax_2[1]
while (arg1.b != 0)

sub_401270(result, eax_2 - 1, nullptr)
return result
