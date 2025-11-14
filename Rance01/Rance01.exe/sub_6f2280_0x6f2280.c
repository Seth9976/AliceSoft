// 函数: sub_6f2280
// 地址: 0x6f2280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
int32_t i = 0
void* esi_1 = *(arg1 + 0x4834)
void var_64

do
    void* ebx
    ebx.b = *(esi_1 + 0xc)
    *(&var_64 + (i << 3)) = *esi_1
    char var_63[0x3f]
    var_63[i << 3] = *(esi_1 + 2)
    var_62
    *(&var_62 + (i << 3)) = *(esi_1 + 4)
    var_61
    *(&var_61 + (i << 3)) = *(esi_1 + 6)
    var_60
    *(&var_60 + (i << 3)) = *(esi_1 + 8)
    var_5f
    *(&var_5f + (i << 3)) = *(esi_1 + 0xa)
    char edx = *(esi_1 + 0xe)
    esi_1 += 0x10
    var_5e
    *(&var_5e + (i << 3)) = ebx.b
    var_5d
    *(&var_5d + (i << 3)) = edx
    i += 1
while (i s< 8)

int32_t result
int32_t var_24
int32_t result_1
int32_t var_1c
int32_t var_18

if (*(arg1 + 0x3820) == 0)
    result = sub_6e0940(arg1 + 4, 8, 8, arg2, arg3, *(arg1 + 0x30), *(arg1 + 0x3c), *(arg1 + 0x20), 
        *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_24)
    
    if (result == 0)
        result = result_1
        int32_t ecx_6 = var_18
        
        if (result s< ecx_6)
            int32_t edx_10 = var_1c
            
            do
                int32_t esi_8 = var_24
                
                if (esi_8 s< edx_10)
                    int32_t ecx_7 = esi_8 + (result << 3)
                    int32_t esi_9 = esi_8
                    
                    do
                        edx_10.b = *(&var_64 + ecx_7)
                        ecx_7 += 1
                        *(result * *(arg1 + 0x3c) + *(arg1 + 0x3814) + (esi_9 << 1)) = edx_10.b
                        esi_9 += 1
                        edx_10 = var_1c
                    while (esi_9 s< edx_10)
                    
                    ecx_6 = var_18
                
                result += 1
            while (result s< ecx_6)
else
    result = sub_6e0940(arg1 + 4, 0x10, 8, arg2, arg3, 2, *(arg1 + 0x3c), *(arg1 + 0x20), 
        *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_24)
    
    if (result == 0)
        if (*(arg1 + 0x3820) == 2)
            result = result_1
            int32_t esi_4 = var_18
            
            if (result s< esi_4)
                int32_t edx_5 = var_1c
                
                do
                    int32_t ecx_4 = var_24
                    
                    if (ecx_4 s< edx_5)
                        do
                            int32_t edx_8
                            edx_8.b = *(&var_64 + (ecx_4 s>> 1) + result * 8)
                            *(result * *(arg1 + 0x3c) + *(arg1 + 0x3814) + (ecx_4 << 1) + 3) =
                                edx_8.b
                            ecx_4 += 2
                            edx_5 = var_1c
                        while (ecx_4 s< edx_5)
                        
                        esi_4 = var_18
                    
                    result += 1
                while (result s< esi_4)
        else
            result = result_1
            int32_t ecx_2 = var_18
            
            if (result s< ecx_2)
                int32_t edx_3 = var_1c
                
                do
                    int32_t esi_3 = var_24
                    
                    if (esi_3 s< edx_3)
                        do
                            int32_t edx_4
                            edx_4.b = *(&var_64 + (esi_3 s>> 1) + result * 8)
                            *(result * *(arg1 + 0x3c) + *(arg1 + 0x3814) + (esi_3 << 1) + 1) =
                                edx_4.b
                            esi_3 += 2
                            edx_3 = var_1c
                        while (esi_3 s< edx_3)
                        
                        ecx_2 = var_18
                    
                    result += 1
                while (result s< ecx_2)
return result
