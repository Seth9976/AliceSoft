// 函数: sub_56a810
// 地址: 0x56a810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_56afe0(arg1)
void* esi_1 = *(arg1 + 0x3b8)
sub_56c1d0(esi_1 + 0x630)
sub_56c360(esi_1 + 0x588)

if (*(arg1 + 0x3cc) != 0)
    sub_56f200(arg1 + 0xe4, arg1 + 0x3bc)
    
    if (*(arg1 + 0x3cc) != 0)
        void* eax_2 = *(arg1 + 0x1ec)
        
        if (eax_2 != 0)
            sub_425c30(eax_2, arg1 + 0x3bc)

if (data_797d88 != 0)
    sub_5ce7d0()

if (data_797d90 != 0)
    sub_5d1a70()

void* esi_3 = *(arg1 + 0x1ec)

if (esi_3 != 0 && *(esi_3 + 0x3b) == 0)
    ShowCursor(1)
    *(esi_3 + 0x3b) = 1

*(arg1 + 0x1ec) = 0

if (*(arg1 + 0x364) != 0)
    int32_t eax_3 = *(arg1 + 0x368)
    
    if (eax_3 == 0)
        if (sub_6b2dd0(arg1 + 0x36c) != 0)
            *(arg1 + 0x364) = 0
    else if (eax_3 == 1)
        ChangeDisplaySettingsA(nullptr, 0)
        *(arg1 + 0x364) = 0
    else if (eax_3 == 2)
        *(arg1 + 0x364) = 0

if (*(arg1 + 0x380) != 0)
    int32_t* eax_8 = *(arg1 + 0x36c)
    int32_t eax_9
    
    if (eax_8 != 0)
        eax_9 = (*(*eax_8 + 0x4c))(eax_8)
    
    if (eax_8 == 0 || eax_9 s>= 0)
        *(arg1 + 0x380) = 0
    else
        sub_604c90("DirectDraw")

int32_t* eax_10 = *(arg1 + 0x36c)

if (eax_10 != 0)
    (*(*eax_10 + 8))(eax_10)
    *(arg1 + 0x36c) = 0

ShowWindow(*(arg1 + 8), SW_HIDE)
DestroyWindow(arg2)
return 0
