// 函数: sub_54f330
// 地址: 0x54f330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hObject_2 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0

if (sub_601f00(&hObject_2, arg1) != 0)
    arg2[1] = 0
    
    if (sub_427ad0(arg2, var_4).b != 0)
        if (var_4 == 0)
        label_54f3b1:
            BOOL hObject_1 = hObject_2
            
            if (hObject_1 != 0xffffffff && CloseHandle(hObject_1) == 0)
                CloseHandle(hObject_1)
                BOOL eax_2
                eax_2.b = 0
                return eax_2
            
            BOOL eax_1
            eax_1.b = 1
            return eax_1
        
        uint32_t edi_2 = arg2[1]
        uint32_t ebx_1
        
        if (edi_2 != 0)
            ebx_1 = *arg2
        else
            ebx_1 = 0
        
        if (sub_6021f0(&hObject_2, edi_2, ebx_1).b != 0)
            goto label_54f3b1

BOOL hObject = hObject_2

if (hObject != 0xffffffff)
    CloseHandle(hObject)

hObject.b = 0
return hObject
