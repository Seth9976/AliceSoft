// 函数: sub_54a920
// 地址: 0x54a920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax_1 = (***(arg1 + 0x1c))()

if (eax_1 == 0)
    *(arg1 + 0x29c) = 2
    return eax_1

int32_t eax_3

if ((**(arg1 + 4))().b != 0)
    eax_3 = data_797d44
    char ecx_2
    
    if (eax_3 != 0)
        eax_3 = sub_424db0(eax_3)
        
        if (eax_3.b != 0)
            eax_3.b = GetKeyState(0x91).b & 1
        
        ecx_2 = eax_3.b
    else
        ecx_2 = 0
    
    eax_3.b = *(arg1 + 0x1338)
    int32_t performanceCount
    int32_t var_8
    
    if (eax_3.b != 0)
    label_54a9bf:
        
        if (ecx_2 == 0)
            QueryPerformanceCounter(&performanceCount)
            *(arg1 + 0x1330) = performanceCount
            *(arg1 + 0x1334) = var_8
            sub_52c9c0(arg1 + 0x12f8)
            *(arg1 + 0x1338) = 0
    else
        if (ecx_2 != 0)
            *(arg1 + 0x1338) = 1
            sub_52c860(arg1 + 0x12f8)
            QueryPerformanceCounter(&performanceCount)
            *(arg1 + 0x1320) = performanceCount
            *(arg1 + 0x1324) = var_8
            BOOL eax_4
            eax_4.b = 1
            return eax_4
        
        if (eax_3.b != 0)
            goto label_54a9bf

eax_3.b = 1
return eax_3
