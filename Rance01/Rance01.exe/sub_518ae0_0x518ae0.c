// 函数: sub_518ae0
// 地址: 0x518ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = arg1[1]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    arg1[1] = 0

int32_t* ecx = *arg1

if (ecx != 0)
    ecx = (*(*ecx + 4))()
    *arg1 = 0

int32_t* result

if (*(arg2 + 0x20) != 0)
    result, ecx = (*(**(arg2 + 0x20) + 0xc))(0x100, 0x100, 0x20)
else
    result = nullptr

*arg1 = result

if (result != 0)
    int32_t* var_8_1 = ecx
    float var_8_2 = fconvert.s(fconvert.t(arg3))
    int32_t* ebx_1
    result, ebx_1 = sub_518b80(result)
    
    if (result.b != 0)
        result = (*(*ebx_1 + 0x2c))()
        *4 = result
        
        if (result != 0)
            return (*(*result + 8))(*0, 0) != 0

result.b = 0
return result
