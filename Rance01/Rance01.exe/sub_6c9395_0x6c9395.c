// 函数: sub_6c9395
// 地址: 0x6c9395
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esp_1 = arg1[-6]
arg1[-0x14] = 0xffffffff
arg1[-1] = 0xffffffff

if (arg1[-0x14] s< 0 && *(arg1[2] + 0x387c) != 0)
    int32_t edx_3 = *(arg1[2] + 0x387c)
    *(esp_1 - 4) = esp_1
    *(esp_1 - 8) = edx_3
    sub_6ca7c0()
    *(arg1[2] + 0x387c) = 0

int32_t edx_1 = *(arg1[2] + 0x3848)
arg1[-0xe] = edx_1
(*(edx_1 + 0x18))()
arg1[-0xc]
arg1[-0xb]
arg1[-0xd]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
return arg1[-0x14]
