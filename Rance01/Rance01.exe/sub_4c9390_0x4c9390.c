// 函数: sub_4c9390
// 地址: 0x4c9390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg5
int32_t* edi = arg1
arg1.b = arg2[0x2d].b
edi[1].b = arg1.b
int32_t* ecx = arg2[2]
arg5 = ecx

if (*edi != ecx)
    sub_4c9210(edi)
    ecx = arg5

BOOL result

if (ecx - 1 u<= 7)
    switch (ecx)
        case 1
            if (edi[3].b == 0)
                result = sub_4c9680(edi, arg2, ebx)
                
                if (result.b == 0)
                    return result
                
                ecx = arg5
        case 2
            BOOL* eax = *arg4
            
            if (((arg4[1] - eax) & 0xfffffffc) s> 0)
                result = *eax
            else
                result = 0
            
            void* edx_3
            edx_3.b = edi[6].b
            
            if (edx_3.b == 0)
                result.b = result != 0
                result = sub_4c9c30(edi, arg2, arg3, result.b, ebx)
                
                if (result.b == 0)
                    return result
                
                ecx = arg5
        case 3
            result = sub_4ca3d0(arg2, edi, ebx)
            
            if (result.b == 0)
                return result
            
            ecx = arg5
        case 8
            if (edi[0x15].b == 0)
                result = sub_4ca870(edi, arg2, arg3, ebx)
                
                if (result.b == 0)
                    return result
                
                ecx = arg5

*edi = ecx
result.b = 1
return result
