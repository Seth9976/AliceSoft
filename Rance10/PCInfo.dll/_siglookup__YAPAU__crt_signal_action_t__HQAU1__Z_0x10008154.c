// 函数: ?siglookup@@YAPAU__crt_signal_action_t@@HQAU1@@Z
// 地址: 0x10008154
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* i = arg2

for (void* ecx = 0x90 + i; i != ecx; i += 0xc)
    if (*(i + 4) == arg1)
        return i

return nullptr
