// 函数: sub_415530
// 地址: 0x415530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1
int32_t arg_4
int32_t ebx = arg_4

if (ebx s<= 0)
    return 0

int32_t edx = sub_42e070(&arg2[2], &result, &arg_4)
int32_t* result_1 = result

if (result_1 != arg2[3])
    return result_1[4]

struct IInterface::guiengine::CGUIComponent::VTable** result_2 = sub_415490(ebx, edx, arg2)
result = result_2
*sub_4ccf80(&arg2[2], &arg_4) = result_2
sub_61b5a0(&result, &arg2[6])
return result
