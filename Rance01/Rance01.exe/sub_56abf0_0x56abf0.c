// 函数: sub_56abf0
// 地址: 0x56abf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t arg_4
int32_t arg_8

if ((**(arg1 + 0xc0))().b != 0 && sub_56e8d0(arg1 + 0x128, arg_4, arg_8, &arg_8, &arg_4).b != 0)
    POINT point
    point.x = arg_8
    point.y = arg_4
    
    if (ClientToScreen(*(arg1 + 8), &point) != 0)
        return sub_56ac70(arg1, point.x, point.y) != 0

int32_t* result
result.b = 0
return result
