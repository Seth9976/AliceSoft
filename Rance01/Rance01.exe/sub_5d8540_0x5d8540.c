// 函数: sub_5d8540
// 地址: 0x5d8540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* arg_4
int32_t* ebx = arg_4
bool cond:0 = ebx[1] == 0
int32_t* arg_8
int32_t* ebp = arg_8
arg_4 = ebp
int32_t* eax

if (not(cond:0))
    sub_42e070(&ebx[6], &var_4, &arg_4)
    eax = var_4
    
    if (eax != ebx[7])
        int32_t* edi_1 = eax[4]
        
        if (edi_1 != 0 && (*(**edi_1 + 0x10))().b != 0)
            (*(*ebx[1] + 0x14))(ebp)
            sub_42e070(&ebx[6], &arg_4, &arg_8)
            sub_436320(&ebx[6], &arg_8, arg_4)
            int32_t* var_18_5 = edi_1
            sub_6b4d5b()
            int32_t eax_6
            eax_6.b = 1
            return eax_6

eax.b = 0
return eax
