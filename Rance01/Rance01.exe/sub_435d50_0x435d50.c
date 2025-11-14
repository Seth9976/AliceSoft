// 函数: sub_435d50
// 地址: 0x435d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
void* arg_4
sub_42e070(arg1, &arg3, &arg_4)
int32_t* eax_1 = arg3
enum MESSAGEBOX_RESULT eax_5

if (eax_1 != arg1[1])
    eax_5 = eax_1[4]
    
    if (eax_5 != 0)
        if (sub_4349d0(eax_5, arg2, ebx) != 0)
            return 1
        
        sub_604c90("Direct3D")
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        return eax_8
else
    int32_t* eax_2 = operator new(0xdc)
    int32_t* edi_1
    
    if (eax_2 == 0)
        edi_1 = nullptr
    else
        sub_4348c0(eax_2, arg1[0xd])
        edi_1 = eax_2
    
    if (sub_4349d0(edi_1, arg2, ebx) != 0)
        int32_t* var_4_1 = edi_1
        void* var_8 = arg_4
        sub_5d7ff0(&var_8, arg1, sub_40d430(arg1, &var_8))
        return 1
    
    sub_604c90("Direct3D")
    
    if (edi_1 != 0)
        sub_434bc0(edi_1)
        int32_t* var_1c_3 = edi_1
        sub_6b4d5b()

eax_5.b = 0
return eax_5
