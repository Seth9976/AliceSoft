// 函数: sub_53a950
// 地址: 0x53a950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg2 + 0x24) = arg1
int32_t eax_1 = (**arg1)(0x74cb4c)
*(arg2 + 0x1c) = eax_1
enum MESSAGEBOX_RESULT eax_2

if (eax_1 != 0)
    eax_2 = (**arg1)(0x74caac)
    *(arg2 + 0x20) = eax_2
    
    if (eax_2 != 0)
        *(arg2 + 0x28) = (**arg1)(0x74caec)
        *(arg2 + 0x2c) = (**arg1)(0x74cafc)
        *(arg2 + 0x30) = (**arg1)("|.Pd")
        int32_t eax_11 = (**arg1)(0x74cb1c)
        *(arg2 + 0x34) = eax_11
        
        if (eax_11 == 0)
            sub_604c90("ISys4xPath")
            enum MESSAGEBOX_RESULT eax_12
            eax_12.b = 0
            return eax_12
        
        *(arg2 + 0x38) = (***(arg2 + 0x24))(0x74cb3c)
        int32_t eax_16 = (**arg1)(0x74cabc)
        *(arg2 + 0x3c) = eax_16
        eax_16.b = eax_16 != 0
        return eax_16
else
    sub_604c90("IWinMsg2")

eax_2.b = 0
return eax_2
