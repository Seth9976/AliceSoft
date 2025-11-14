// 函数: sub_629c10
// 地址: 0x629c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1[0x33]
int32_t eax_2 = GetScrollPos(arg1[0x22], SB_VERT) * edi + arg2
int32_t ebx = arg1[0x3f]
BOOL result = divs.dp.d(sx.q(eax_2), edi)
BOOL result_1 = result

if (result_1 s>= 0)
    result = (*(*arg1 + 0x88))()

if (result_1 s< 0 || result_1 s>= result)
    arg1[0x3f] = 0xffffffff
else
    arg1[0x3f] = result_1

if (ebx == arg1[0x3f])
    return result

return sub_629b60(arg1)
