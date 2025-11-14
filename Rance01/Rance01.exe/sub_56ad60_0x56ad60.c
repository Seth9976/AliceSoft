// 函数: sub_56ad60
// 地址: 0x56ad60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_56e9f0(arg1 + 0x128)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_56c360(*(arg1 + 0x3b8) + 0x588)

if (*(arg1 + 0x3cc) != 0)
    result = *(arg1 + 0x1ec)
    
    if (result != 0)
        result = sub_425c30(result, arg1 + 0x3bc)

void* esi = *(arg1 + 0x1ec)

if (esi != 0)
    if (*(esi + 0x3a) != 0)
        if (*(esi + 0x38) == 0 && *(esi + 0x21) == 0 && *(esi + 0x3b) == 0)
            ShowCursor(1)
            *(esi + 0x3b) = 1
        
        result = sub_425ba0(esi)
        *(esi + 0x3a) = 0
    
    void* esi_1 = *(arg1 + 0x1ec)
    
    if (*(esi_1 + 0x3b) == 0)
        result = ShowCursor(1)
        *(esi_1 + 0x3b) = 1

bool cond:0 = data_797d88 == 0
*(arg1 + 0x1ec) = 0

if (not(cond:0))
    result = sub_5ce7d0()

if (data_797d90 == 0)
    return result

return sub_5d1a70()
