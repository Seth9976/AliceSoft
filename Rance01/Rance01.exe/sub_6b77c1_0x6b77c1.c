// 函数: sub_6b77c1
// 地址: 0x6b77c1
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[-1] = 0xfffffffe
int32_t result = arg1[-8]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = &data_6b77d0
*arg1
return result
