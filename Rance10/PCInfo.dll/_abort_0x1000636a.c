// 函数: _abort
// 地址: 0x1000636a
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx

if (___acrt_get_sigabrt_handler(ecx) != 0)
    _raise(0x16)

if ((data_10016040 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    sub_10005067(3, 0x40000015, 1)

sub_100057e9(3)
breakpoint
