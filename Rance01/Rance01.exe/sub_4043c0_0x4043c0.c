// 函数: sub_4043c0
// 地址: 0x4043c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_401180(arg2, 0xffffffff, arg1, 0)
int32_t edi = arg2[4]
int32_t result = 0

if (edi != 0)
    do
        int32_t edx_1 = arg2[5]
        char* ecx_1
        
        if (edx_1 u< 0x10)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        char* ecx_2
        
        if (ecx_1[result] u>= 0x81)
            if (edx_1 u< 0x10)
                ecx_2 = arg2
            else
                ecx_2 = *arg2
        
        char* ecx_3
        
        if (ecx_1[result] u< 0x81 || ecx_2[result] u> 0x9f)
            if (edx_1 u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
        
        if ((ecx_1[result] u< 0x81 || ecx_2[result] u> 0x9f) && ecx_3[result] u< 0xe0)
            int32_t* ecx_4
            
            if (edx_1 u< 0x10)
                ecx_4 = arg2
            else
                ecx_4 = *arg2
            
            if (*(ecx_4 + result) == 0x2f)
                int32_t* ecx_5
                
                if (edx_1 u< 0x10)
                    ecx_5 = arg2
                else
                    ecx_5 = *arg2
                
                *(ecx_5 + result) = 0x5c
        else
            result += 1
        
        result += 1
    while (result u< edi)

return result
