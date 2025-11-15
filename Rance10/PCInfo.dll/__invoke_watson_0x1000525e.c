// 函数: __invoke_watson
// 地址: 0x1000525e
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (IsProcessorFeaturePresent(0x17) != 0)
    trap(0xd)

sub_10005067(2, 0xc0000417, 1)
TerminateProcess(GetCurrentProcess(), 0xc0000417)
noreturn
