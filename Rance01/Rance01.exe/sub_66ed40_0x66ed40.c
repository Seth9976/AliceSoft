// 函数: sub_66ed40
// 地址: 0x66ed40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1[5]
int32_t ecx = 0
int32_t result = 0
int32_t edi = arg1[4]
char* edx

if (esi u< 0x10)
    edx = arg1
else
    edx = *arg1

char* edx_1

if (*edx != 0x2b)
    if (esi u< 0x10)
        edx_1 = arg1
    else
        edx_1 = *arg1

if (*edx == 0x2b || *edx_1 == 0x2d)
    ecx = 1

bool cond:0 = edi != ecx

if (edi s> ecx)
    do
        char* edx_2
        
        if (esi u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        char* edx_3
        
        if (edx_2[ecx] s>= 0x30)
            if (esi u< 0x10)
                edx_3 = arg1
            else
                edx_3 = *arg1
        
        if (edx_2[ecx] s< 0x30 || edx_3[ecx] s> 0x39)
            char* edx_4
            
            if (esi u< 0x10)
                edx_4 = arg1
            else
                edx_4 = *arg1
            
            if (edx_4[ecx] != 0x2e)
                break
        
        int32_t* edx_5
        
        if (esi u< 0x10)
            edx_5 = arg1
        else
            edx_5 = *arg1
        
        if (*(edx_5 + ecx) == 0x2e)
            result += 1
        
        ecx += 1
    while (ecx s< edi)
    
    cond:0 = edi != ecx

if (not(cond:0) && result == 1)
    return result

return 0
