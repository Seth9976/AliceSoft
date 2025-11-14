// 函数: sub_6c0010
// 地址: 0x6c0010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[-1] = 0xfffffffe
int32_t result = arg1[-7]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = &data_6c001f
*arg1
return result
