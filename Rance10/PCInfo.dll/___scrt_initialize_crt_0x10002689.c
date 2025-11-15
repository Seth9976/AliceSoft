// 函数: ___scrt_initialize_crt
// 地址: 0x10002689
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 == 0)
    data_10016ba8 = 1

int64_t xcr0
sub_10002b3b(xcr0)

if (___vcrt_initialize() != 0)
    if (___acrt_initialize() != 0)
        return 1
    
    ___vcrt_uninitialize(0)

return 0
