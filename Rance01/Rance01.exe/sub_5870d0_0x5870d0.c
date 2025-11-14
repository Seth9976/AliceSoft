// 函数: sub_5870d0
// 地址: 0x5870d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1[4]

if (edi == 0)
    return 

int32_t ecx_1 = 0
int32_t* edx_2

if (edi s> 0)
    int32_t esi_1 = arg1[5]
    
    do
        char* edx_1
        
        if (esi_1 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (edx_1[ecx_1] u>= 0x81)
            if (esi_1 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
        
        if (edx_1[ecx_1] u>= 0x81 && *(edx_2 + ecx_1) u<= 0x9f)
            ecx_1 += 2
            edx_2.b = 0
        else
            if (esi_1 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            if (*(edx_2 + ecx_1) u< 0xe0)
                if (esi_1 u< 0x10)
                    edx_2 = arg1
                else
                    edx_2 = *arg1
                
                edx_2.b = *(edx_2 + ecx_1) == 0x5c
                ecx_1 += 1
            else
                ecx_1 += 2
                edx_2.b = 0
    while (ecx_1 s< edi)

if (edi s<= 0 || edx_2.b == 0)
    sub_402cb0(arg1, 0x74b354, 1)
