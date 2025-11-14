// 函数: sub_5945d0
// 地址: 0x5945d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebx = arg1[3]
int32_t* ecx_1 = data_797d98
int32_t edi = arg1[9]
int32_t edi_1 = edi - ebx
int32_t ebp

if (ecx_1 != 0)
    ebp = (**ecx_1)()
    goto label_5945f6

ebp = 0

while (true)
    HANDLE hHandle = arg1[0x11]
    
    if (hHandle == 0)
        goto label_59461c
    
    if (WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0)
    label_59465b:
        bool cond:0 = arg1[0xa].b == 0
        arg1[3] = edi
        
        if (not(cond:0))
            (*(*arg1 + 0x18))(edi)
        
        int32_t result
        result.b = 1
        return result
    
    ecx_1 = data_797d98
label_59461c:
    int32_t eax_4
    
    if (ecx_1 != 0)
        eax_4 = (**ecx_1)()
    else
        eax_4 = 0
    
    int32_t ecx_2 = arg1[8]
    int32_t eax_6 = eax_4 - ebp
    
    if (eax_6 u>= ecx_2)
        goto label_59465b
    
    if (edi_1 == 0 || ecx_2 == 0)
        arg1[3] = ebx
        Sleep(0x1e)
    else
        arg1[3] = divs.dp.d(sx.q(eax_6 * edi_1), ecx_2) + ebx
        Sleep(0x1e)
    
label_5945f6:
    ecx_1 = data_797d98
