// 函数: ___vcrt_initialize_locks
// 地址: 0x10004bbe
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* edi = &data_10016c00
int32_t esi = 0
BOOL result

while (true)
    if (sub_10004e52(edi, 0xfa0, 0) == 0)
        ___vcrt_uninitialize_locks()
        result.b = 0
        break
    
    data_10016c18 += 1
    esi += 0x18
    edi += 0x18
    
    if (esi u>= 0x18)
        result.b = 1
        break

return result
