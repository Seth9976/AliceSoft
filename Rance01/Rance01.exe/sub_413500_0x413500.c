// 函数: sub_413500
// 地址: 0x413500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t* ecx = *(esi + 0x28)

if (ecx != 0)
    struct guiengine::CGUIView::guiengine::CGUIMultiTextBoxView::VTable** ecx_1
    arg1, ecx_1 = (*(*ecx + 8))()
    
    switch (arg1)
        case nullptr
            sub_413e60(ecx_1, esi)
            return 
        case 1
            sub_413f00(ecx_1, esi)
            return 
        case 2
            sub_413fa0(ecx_1, esi)
            return 
        case 3
            sub_414040(ecx_1, esi)
            return 
        case 4
            sub_4140e0(ecx_1, esi)
            return 
        case 5
            sub_414190(ecx_1, esi)
            return 
        case 6
            sub_414240(ecx_1, esi)
            return 
        case 7
            sub_4142f0(ecx_1, esi)
            return 
        case 8
            sub_4143a0(ecx_1, esi)
            return 
        case 9
            sub_414440(ecx_1, esi)
            return 
        case 0xa
            sub_4144f0(esi)
            return 
        case 0xb
            sub_414580(esi)
            return 

int32_t* ecx_2 = *(esi + 0x2c)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(esi + 0x2c) = 0
