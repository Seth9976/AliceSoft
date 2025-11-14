// 函数: sub_514af0
// 地址: 0x514af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_9 = arg1[3]

if (ecx_9 != 0)
    (*(*ecx_9 + 4))()
    arg1[3] = 0

int32_t* ecx = arg1[2]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[2] = 0

int32_t* result = (*(**arg1 + 0x28))()
arg1[2] = result

if (result != 0 && (*(*result + 8))(arg1[4], arg1[5], 1, 1, 0, 0).b != 0)
    result = (*(**arg1 + 0x1c))()
    arg1[3] = result
    
    if (result != 0)
        return (*(*result + 8))(arg1[4], arg1[5], 0) != 0

result.b = 0
return result
