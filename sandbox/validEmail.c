#include "math.h"
#include "idris_rts.h"
#include "idris_bitstring.h"
#include "idris_stdfgn.h"
void* _idris_Prelude_46_Bool_46__38__38_(VM*, VAL*);
void* _idris_Prelude_46_Basics_46__46_(VM*, VAL*);
void* _idris_Force(VM*, VAL*);
void* _idris_PE_95_isInfixOf_95_22f242c8(VM*, VAL*);
void* _idris_assert_95_unreachable(VM*, VAL*);
void* _idris_call_95__95_IO(VM*, VAL*);
void* _idris_Data_46_So_46_choose(VM*, VAL*);
void* _idris_Prelude_46_Interactive_46_getLine_39_(VM*, VAL*);
void* _idris_Prelude_46_Basics_46_id(VM*, VAL*);
void* _idris_idris_95_crash(VM*, VAL*);
void* _idris_Prelude_46_Bool_46_ifThenElse(VM*, VAL*);
void* _idris_Prelude_46_Interfaces_46_intToBool(VM*, VAL*);
void* _idris_io_95_bind(VM*, VAL*);
void* _idris_io_95_pure(VM*, VAL*);
void* _idris_Prelude_46_Chars_46_isDigit(VM*, VAL*);
void* _idris_Main_46_isEmail(VM*, VAL*);
void* _idris_Prelude_46_Strings_46_isInfixOf(VM*, VAL*);
void* _idris_Prelude_46_Strings_46_isPrefixOf(VM*, VAL*);
void* _idris_Prelude_46_List_46_isPrefixOfBy(VM*, VAL*);
void* _idris_Prelude_46_Strings_46_isSuffixOf(VM*, VAL*);
void* _idris_Prelude_46_List_46_length(VM*, VAL*);
void* _idris_Main_46_main(VM*, VAL*);
void* _idris_mkForeignPrim(VM*, VAL*);
void* _idris_Prelude_46_Bool_46_not(VM*, VAL*);
void* _idris_Prelude_46_Show_46_precCon(VM*, VAL*);
void* _idris_Prelude_46_Show_46_primNumShow(VM*, VAL*);
void* _idris_prim_95__95_addBigInt(VM*, VAL*);
void* _idris_prim_95__95_asPtr(VM*, VAL*);
void* _idris_prim_95__95_charToInt(VM*, VAL*);
void* _idris_prim_95__95_concat(VM*, VAL*);
void* _idris_prim_95__95_eqBigInt(VM*, VAL*);
void* _idris_prim_95__95_eqChar(VM*, VAL*);
void* _idris_prim_95__95_eqManagedPtr(VM*, VAL*);
void* _idris_prim_95__95_eqPtr(VM*, VAL*);
void* _idris_prim_95__95_eqString(VM*, VAL*);
void* _idris_prim_95__95_managedNull(VM*, VAL*);
void* _idris_prim_95__95_null(VM*, VAL*);
void* _idris_prim_95__95_peek16(VM*, VAL*);
void* _idris_prim_95__95_peek32(VM*, VAL*);
void* _idris_prim_95__95_peek64(VM*, VAL*);
void* _idris_prim_95__95_peek8(VM*, VAL*);
void* _idris_prim_95__95_peekDouble(VM*, VAL*);
void* _idris_prim_95__95_peekPtr(VM*, VAL*);
void* _idris_prim_95__95_peekSingle(VM*, VAL*);
void* _idris_prim_95__95_poke16(VM*, VAL*);
void* _idris_prim_95__95_poke32(VM*, VAL*);
void* _idris_prim_95__95_poke64(VM*, VAL*);
void* _idris_prim_95__95_poke8(VM*, VAL*);
void* _idris_prim_95__95_pokeDouble(VM*, VAL*);
void* _idris_prim_95__95_pokePtr(VM*, VAL*);
void* _idris_prim_95__95_pokeSingle(VM*, VAL*);
void* _idris_prim_95__95_ptrOffset(VM*, VAL*);
void* _idris_prim_95__95_readChars(VM*, VAL*);
void* _idris_prim_95__95_readFile(VM*, VAL*);
void* _idris_prim_95__95_readString(VM*, VAL*);
void* _idris_prim_95__95_registerPtr(VM*, VAL*);
void* _idris_prim_95__95_sextInt_95_BigInt(VM*, VAL*);
void* _idris_prim_95__95_sizeofPtr(VM*, VAL*);
void* _idris_prim_95__95_sltBigInt(VM*, VAL*);
void* _idris_prim_95__95_sltChar(VM*, VAL*);
void* _idris_prim_95__95_stderr(VM*, VAL*);
void* _idris_prim_95__95_stdin(VM*, VAL*);
void* _idris_prim_95__95_stdout(VM*, VAL*);
void* _idris_prim_95__95_strCons(VM*, VAL*);
void* _idris_prim_95__95_strHead(VM*, VAL*);
void* _idris_prim_95__95_strRev(VM*, VAL*);
void* _idris_prim_95__95_strTail(VM*, VAL*);
void* _idris_prim_95__95_toStrInt(VM*, VAL*);
void* _idris_prim_95__95_vm(VM*, VAL*);
void* _idris_prim_95__95_writeFile(VM*, VAL*);
void* _idris_prim_95__95_writeString(VM*, VAL*);
void* _idris_prim_95_io_95_bind(VM*, VAL*);
void* _idris_Prelude_46_Interactive_46_printLn_39_(VM*, VAL*);
void* _idris_Prelude_46_Show_46_protectEsc(VM*, VAL*);
void* _idris_Prelude_46_List_46_reverseOnto(VM*, VAL*);
void* _idris_run_95__95_IO(VM*, VAL*);
void* _idris_Prelude_46_Show_46_show(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showLitChar(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showLitString(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showParens(VM*, VAL*);
void* _idris_Prelude_46_List_46_tails(VM*, VAL*);
void* _idris_Prelude_46_Strings_46_unpack(VM*, VAL*);
void* _idris_unsafePerformPrimIO(VM*, VAL*);
void* _idris_world(VM*, VAL*);
void* _idris_Prelude_46_Bool_46__124__124_(VM*, VAL*);
void* _idris__123_APPLY_95_0_125_(VM*, VAL*);
void* _idris__123_APPLY2_95_0_125_(VM*, VAL*);
void* _idris__123_EVAL_95_0_125_(VM*, VAL*);
void* _idris__123_PE_95_isInfixOf_95_22f242c8_95_0_125_(VM*, VAL*);
void* _idris__123_runMain_95_0_125_(VM*, VAL*);
void* _idris__123_PE_95_isInfixOf_95_22f242c8_95_1_125_(VM*, VAL*);
void* _idris_Main_46__123_isEmail_95_2_125_(VM*, VAL*);
void* _idris_Main_46__123_isEmail_95_3_125_(VM*, VAL*);
void* _idris_Main_46__123_main_95_6_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_8_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_9_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_10_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_11_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_12_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_13_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_14_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_15_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_16_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_17_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_18_125_(VM*, VAL*);
void* _idris_Prelude_46_Show_46__123_showLitChar_95_19_125_(VM*, VAL*);
void* _idris_Prelude_46_List_46_findIndices_58_findIndices_39__58_0(VM*, VAL*);
void* _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0(VM*, VAL*);
void* _idris_Prelude_46_Interfaces_46_Prelude_46_Nat_46__64_Prelude_46_Interfaces_46_Eq_36_Nat_58__33__61__61__58_0(VM*, VAL*);
void* _idris_Prelude_46_Foldable_46_Prelude_46_List_46__64_Prelude_46_Foldable_46_Foldable_36_List_58__33_foldl_58_0(VM*, VAL*);
void* _idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0(VM*, VAL*);
void* _idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Integer_58__33_compare_58_0(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showLitChar_58_asciiTab_58_10(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showLitChar_58_getAt_58_10(VM*, VAL*);
void* _idris__95_Prelude_46_Interactive_46_getLine_39__58_trimNL_58_0_95_with_95_18(VM*, VAL*);
void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Show_46__64_Prelude_46_Interfaces_46_Ord_36_Prec_58__33__62__58_0_95_with_95_27(VM*, VAL*);
void* _idris__95_Prelude_46_Strings_46_strM_95_with_95_33(VM*, VAL*);
void* _idris__95_Prelude_46_Strings_46_unpack_95_with_95_36(VM*, VAL*);
void* _idris__95_Prelude_46_Show_46_firstCharIs_95_with_95_45(VM*, VAL*);
void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33__60__58_0_95_with_95_140(VM*, VAL*);
void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33__62__58_0_95_with_95_143(VM*, VAL*);
void* _idris_Prelude_46_List_46_tails_95__95__95__95__95_Prelude_95__95_List_95__95_idr_95_725_95_23_95_725_95_24_95_case(VM*, VAL*);
void* _idris_Prelude_46_Show_46_showLitChar_95__95__95__95__95_Prelude_95__95_Show_95__95_idr_95_128_95_27_95_128_95_65_95_case(VM*, VAL*);
void* _idris_Main_46_main_95_C_95__95__95__95_Users_95__95_zente_95__95_Documents_95__95_Idris_95__95_Idris_95__95_Presentation_95__95_sandbox_95__95_validEmail_95__95_idr_95_57_95_16_95_57_95_41_95_case(VM*, VAL*);
void* _idris_io_95_bind_95_IO_95__95_idr_95_108_95_34_95_108_95_36_95_case(VM*, VAL*);
void* _idris_Prelude_46_Bool_46__38__38_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 2, 0);
        RVAL = LOC(0);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL_95_0_125_);
    }
}

void* _idris_Prelude_46_Basics_46__46_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY_95_0_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(6);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

void* _idris_Force(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RESERVE(1);
    TOP(0) = LOC(2);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris__123_EVAL_95_0_125_);
}

void* _idris_PE_95_isInfixOf_95_22f242c8(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(7);
    ADDTOP(7);
    LOC(2) = NULL;
    LOC(3) = NULL;
    allocCon(REG1, vm, 65680, 1, 0);
    SETARG(REG1, 0, LOC(0)); 
    LOC(4) = REG1;
    LOC(5) = NULL_CON(0);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 6, 2);
        LOC(8) = NULL;
        RESERVE(2);
        TOP(0) = LOC(8);
        TOP(1) = LOC(7);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_List_46_tails);
        LOC(6) = RVAL;
    }
    else
    {
        PROJECT(vm, LOC(1), 6, 0);
        LOC(6) = LOC(1);
    }
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(6)); 
    LOC(6) = REG1;
    RESERVE(5);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    TOP(4) = LOC(6);
    SLIDE(vm, 5);
    TOPBASE(5);
    TAILCALL(_idris_Prelude_46_Foldable_46_Prelude_46_List_46__64_Prelude_46_Foldable_46_Foldable_36_List_58__33_foldl_58_0);
}

void* _idris_assert_95_unreachable(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void* _idris_call_95__95_IO(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(3) = NULL;
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

void* _idris_Data_46_So_46_choose(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 1, 0);
        LOC(1) = NULL_CON(0);
        allocCon(REG1, vm, 1, 1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(0), 1, 0);
        LOC(1) = NULL_CON(0);
        allocCon(REG1, vm, 0, 1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Interactive_46_getLine_39_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(5);
    ADDTOP(5);
    LOC(2) = idris_readStr(vm, stdin);
    LOC(3) = idris_strRev(vm, LOC(2));
    LOC(4) = MKSTR(vm, "");
    LOC(3) = idris_streq(vm, LOC(3), LOC(4));
    if (GETINT(LOC(3)) == 0) {
        LOC(3) = NULL_CON(1);
    } else
    {
        LOC(3) = NULL_CON(0);
    }
    LOC(4) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(3) = RVAL;
    if (CTAG(LOC(3)) == 1) {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(3) = MKSTR(vm, "");
    }
    else
    {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(4) = idris_strRev(vm, LOC(2));
        LOC(4) = idris_strHead(vm, LOC(4));
        if (GETINT(LOC(4)) == 10) {
            LOC(5) = idris_strRev(vm, LOC(2));
            LOC(3) = idris_strTail(vm, LOC(5));
        } else
        {
            LOC(5) = idris_strRev(vm, LOC(2));
            LOC(5) = idris_strHead(vm, LOC(5));
            LOC(6) = idris_strRev(vm, LOC(2));
            LOC(6) = idris_strTail(vm, LOC(6));
            LOC(3) = idris_strCons(vm, LOC(5),LOC(6));
        }
    }
    RVAL = idris_strRev(vm, LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Basics_46_id(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(1);
    TOPBASE(0);
    REBASE;
}

void* _idris_idris_95_crash(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Bool_46_ifThenElse(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 4, 0);
        RESERVE(1);
        TOP(0) = LOC(3);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL_95_0_125_);
    }
    else
    {
        PROJECT(vm, LOC(1), 4, 0);
        RESERVE(1);
        TOP(0) = LOC(2);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL_95_0_125_);
    }
}

void* _idris_Prelude_46_Interfaces_46_intToBool(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (GETINT(LOC(0)) == 0) {
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_io_95_bind(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY_95_0_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY_95_0_125_);
    LOC(6) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(5);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

void* _idris_io_95_pure(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(2);
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Chars_46_isDigit(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(3);
    ADDTOP(3);
    LOC(1) = MKINT(48);
    RESERVE(2);
    TOP(0) = LOC(0);
    TOP(1) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0);
    LOC(1) = RVAL;
    switch(CTAG(LOC(1))) {
    case 2:
        PROJECT(vm, LOC(1), 2, 0);
        LOC(1) = NULL_CON(1);
        break;
    default:
        LOC(2) = MKINT(48);
        LOC(2) = INTOP(==,LOC(0), LOC(2));
        if (GETINT(LOC(2)) == 0) {
            LOC(1) = NULL_CON(0);
        } else
        {
            LOC(1) = NULL_CON(1);
        }
        break;
    }
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = MKINT(57);
        RESERVE(2);
        TOP(0) = LOC(0);
        TOP(1) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0);
        LOC(2) = RVAL;
        switch(CTAG(LOC(2))) {
        case 0:
            PROJECT(vm, LOC(2), 3, 0);
            RVAL = NULL_CON(1);
            TOPBASE(0);
            REBASE;
            break;
        default:
            LOC(3) = MKINT(57);
            LOC(3) = INTOP(==,LOC(0), LOC(3));
            if (GETINT(LOC(3)) == 0) {
                RVAL = NULL_CON(0);
                TOPBASE(0);
                REBASE;
            } else
            {
                RVAL = NULL_CON(1);
                TOPBASE(0);
                REBASE;
            }
            break;
        }
    }
}

void* _idris_Main_46_isEmail(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(12);
    ADDTOP(12);
    LOC(1) = NULL;
    LOC(2) = NULL;
    LOC(3) = MKINT(0);
    allocCon(REG1, vm, 65655, 0, 0);
    
    LOC(4) = REG1;
    LOC(5) = MKSTR(vm, "");
    LOC(5) = idris_streq(vm, LOC(0), LOC(5));
    if (GETINT(LOC(5)) == 0) {
        LOC(5) = NULL_CON(1);
    } else
    {
        LOC(5) = NULL_CON(0);
    }
    LOC(6) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(5) = RVAL;
    if (CTAG(LOC(5)) == 1) {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(5) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(6) = idris_strHead(vm, LOC(0));
        LOC(7) = idris_strTail(vm, LOC(0));
        LOC(8) = MKSTR(vm, "");
        LOC(7) = idris_streq(vm, LOC(7), LOC(8));
        if (GETINT(LOC(7)) == 0) {
            LOC(7) = NULL_CON(1);
        } else
        {
            LOC(7) = NULL_CON(0);
        }
        LOC(8) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(7);
        TOP(1) = LOC(8);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(7) = RVAL;
        if (CTAG(LOC(7)) == 1) {
            PROJECT(vm, LOC(7), 8, 0);
            LOC(7) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(7), 8, 0);
            LOC(8) = idris_strTail(vm, LOC(0));
            LOC(8) = idris_strHead(vm, LOC(8));
            LOC(9) = NULL;
            LOC(10) = idris_strTail(vm, LOC(0));
            LOC(10) = idris_strTail(vm, LOC(10));
            LOC(11) = MKSTR(vm, "");
            LOC(10) = idris_streq(vm, LOC(10), LOC(11));
            if (GETINT(LOC(10)) == 0) {
                LOC(10) = NULL_CON(1);
            } else
            {
                LOC(10) = NULL_CON(0);
            }
            LOC(11) = NULL_CON(1);
            RESERVE(2);
            TOP(0) = LOC(10);
            TOP(1) = LOC(11);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
            LOC(10) = RVAL;
            if (CTAG(LOC(10)) == 1) {
                PROJECT(vm, LOC(10), 11, 0);
                LOC(10) = NULL_CON(0);
            }
            else
            {
                PROJECT(vm, LOC(10), 11, 0);
                LOC(11) = idris_strTail(vm, LOC(0));
                LOC(11) = idris_strTail(vm, LOC(11));
                LOC(11) = idris_strHead(vm, LOC(11));
                LOC(12) = idris_strTail(vm, LOC(0));
                LOC(12) = idris_strTail(vm, LOC(12));
                LOC(12) = idris_strTail(vm, LOC(12));
                allocCon(REG1, vm, 1, 2, 0);
                SETARG(REG1, 0, LOC(11)); SETARG(REG1, 1, LOC(12)); 
                LOC(10) = REG1;
            }
            RESERVE(2);
            TOP(0) = LOC(9);
            TOP(1) = LOC(10);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
            LOC(9) = RVAL;
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); 
            LOC(7) = REG1;
        }
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
        LOC(5) = REG1;
    }
    RESERVE(4);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(4);
    CALL(_idris_Prelude_46_List_46_findIndices_58_findIndices_39__58_0);
    LOC(2) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_List_46_length);
    LOC(1) = RVAL;
    LOC(2) = MKINT(1);
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Nat_46__64_Prelude_46_Interfaces_46_Eq_36_Nat_58__33__61__61__58_0);
    LOC(1) = RVAL;
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = MKSTR(vm, "@");
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(0);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_Strings_46_isSuffixOf);
        LOC(2) = RVAL;
        if (CTAG(LOC(2)) == 0) {
            PROJECT(vm, LOC(2), 3, 0);
            LOC(3) = MKSTR(vm, "@");
            RESERVE(2);
            TOP(0) = LOC(3);
            TOP(1) = LOC(0);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Prelude_46_Strings_46_isPrefixOf);
            LOC(3) = RVAL;
            if (CTAG(LOC(3)) == 0) {
                PROJECT(vm, LOC(3), 4, 0);
                LOC(4) = NULL;
                LOC(5) = NULL;
                allocCon(REG1, vm, 65676, 1, 0);
                SETARG(REG1, 0, LOC(0)); 
                LOC(6) = REG1;
                LOC(7) = NULL_CON(0);
                LOC(8) = MKSTR(vm, " ");
                LOC(9) = MKSTR(vm, ";");
                LOC(10) = MKSTR(vm, ":");
                LOC(11) = NULL_CON(0);
                allocCon(REG1, vm, 1, 2, 0);
                SETARG(REG1, 0, LOC(10)); SETARG(REG1, 1, LOC(11)); 
                LOC(10) = REG1;
                allocCon(REG1, vm, 1, 2, 0);
                SETARG(REG1, 0, LOC(9)); SETARG(REG1, 1, LOC(10)); 
                LOC(9) = REG1;
                allocCon(REG1, vm, 1, 2, 0);
                SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); 
                LOC(8) = REG1;
                RESERVE(5);
                TOP(0) = LOC(4);
                TOP(1) = LOC(5);
                TOP(2) = LOC(6);
                TOP(3) = LOC(7);
                TOP(4) = LOC(8);
                STOREOLD;
                BASETOP(0);
                ADDTOP(5);
                CALL(_idris_Prelude_46_Foldable_46_Prelude_46_List_46__64_Prelude_46_Foldable_46_Foldable_36_List_58__33_foldl_58_0);
                LOC(4) = RVAL;
                if (CTAG(LOC(4)) == 0) {
                    PROJECT(vm, LOC(4), 5, 0);
                    RVAL = NULL_CON(1);
                    TOPBASE(0);
                    REBASE;
                }
                else
                {
                    PROJECT(vm, LOC(4), 5, 0);
                    RVAL = NULL_CON(0);
                    TOPBASE(0);
                    REBASE;
                }
            }
            else
            {
                PROJECT(vm, LOC(3), 4, 0);
                RVAL = NULL_CON(0);
                TOPBASE(0);
                REBASE;
            }
        }
        else
        {
            PROJECT(vm, LOC(2), 3, 0);
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
    }
}

void* _idris_Prelude_46_Strings_46_isInfixOf(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(7);
    ADDTOP(7);
    LOC(2) = MKSTR(vm, "");
    LOC(2) = idris_streq(vm, LOC(0), LOC(2));
    if (GETINT(LOC(2)) == 0) {
        LOC(2) = NULL_CON(1);
    } else
    {
        LOC(2) = NULL_CON(0);
    }
    LOC(3) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(2) = RVAL;
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(2) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(3) = idris_strHead(vm, LOC(0));
        LOC(4) = NULL;
        LOC(5) = idris_strTail(vm, LOC(0));
        LOC(6) = MKSTR(vm, "");
        LOC(5) = idris_streq(vm, LOC(5), LOC(6));
        if (GETINT(LOC(5)) == 0) {
            LOC(5) = NULL_CON(1);
        } else
        {
            LOC(5) = NULL_CON(0);
        }
        LOC(6) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(5) = RVAL;
        if (CTAG(LOC(5)) == 1) {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(5) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = idris_strTail(vm, LOC(0));
            LOC(6) = idris_strHead(vm, LOC(6));
            LOC(7) = idris_strTail(vm, LOC(0));
            LOC(7) = idris_strTail(vm, LOC(7));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
            LOC(5) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(5);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(4) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(4)); 
        LOC(2) = REG1;
    }
    LOC(3) = MKSTR(vm, "");
    LOC(3) = idris_streq(vm, LOC(1), LOC(3));
    if (GETINT(LOC(3)) == 0) {
        LOC(3) = NULL_CON(1);
    } else
    {
        LOC(3) = NULL_CON(0);
    }
    LOC(4) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(3) = RVAL;
    if (CTAG(LOC(3)) == 1) {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(3) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(4) = idris_strHead(vm, LOC(1));
        LOC(5) = NULL;
        LOC(6) = idris_strTail(vm, LOC(1));
        LOC(7) = MKSTR(vm, "");
        LOC(6) = idris_streq(vm, LOC(6), LOC(7));
        if (GETINT(LOC(6)) == 0) {
            LOC(6) = NULL_CON(1);
        } else
        {
            LOC(6) = NULL_CON(0);
        }
        LOC(7) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(6);
        TOP(1) = LOC(7);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(6) = RVAL;
        if (CTAG(LOC(6)) == 1) {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(6) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(7) = idris_strTail(vm, LOC(1));
            LOC(7) = idris_strHead(vm, LOC(7));
            LOC(8) = idris_strTail(vm, LOC(1));
            LOC(8) = idris_strTail(vm, LOC(8));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(7)); SETARG(REG1, 1, LOC(8)); 
            LOC(6) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(5) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); 
        LOC(3) = REG1;
    }
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris_PE_95_isInfixOf_95_22f242c8);
}

void* _idris_Prelude_46_Strings_46_isPrefixOf(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(9);
    ADDTOP(9);
    LOC(2) = NULL;
    allocCon(REG1, vm, 65678, 0, 0);
    
    LOC(3) = REG1;
    LOC(4) = MKSTR(vm, "");
    LOC(4) = idris_streq(vm, LOC(0), LOC(4));
    if (GETINT(LOC(4)) == 0) {
        LOC(4) = NULL_CON(1);
    } else
    {
        LOC(4) = NULL_CON(0);
    }
    LOC(5) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(4) = RVAL;
    if (CTAG(LOC(4)) == 1) {
        PROJECT(vm, LOC(4), 5, 0);
        LOC(4) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(4), 5, 0);
        LOC(5) = idris_strHead(vm, LOC(0));
        LOC(6) = NULL;
        LOC(7) = idris_strTail(vm, LOC(0));
        LOC(8) = MKSTR(vm, "");
        LOC(7) = idris_streq(vm, LOC(7), LOC(8));
        if (GETINT(LOC(7)) == 0) {
            LOC(7) = NULL_CON(1);
        } else
        {
            LOC(7) = NULL_CON(0);
        }
        LOC(8) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(7);
        TOP(1) = LOC(8);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(7) = RVAL;
        if (CTAG(LOC(7)) == 1) {
            PROJECT(vm, LOC(7), 8, 0);
            LOC(7) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(7), 8, 0);
            LOC(8) = idris_strTail(vm, LOC(0));
            LOC(8) = idris_strHead(vm, LOC(8));
            LOC(9) = idris_strTail(vm, LOC(0));
            LOC(9) = idris_strTail(vm, LOC(9));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); 
            LOC(7) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(6);
        TOP(1) = LOC(7);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(6) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(5)); SETARG(REG1, 1, LOC(6)); 
        LOC(4) = REG1;
    }
    LOC(5) = MKSTR(vm, "");
    LOC(5) = idris_streq(vm, LOC(1), LOC(5));
    if (GETINT(LOC(5)) == 0) {
        LOC(5) = NULL_CON(1);
    } else
    {
        LOC(5) = NULL_CON(0);
    }
    LOC(6) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(5) = RVAL;
    if (CTAG(LOC(5)) == 1) {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(5) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(6) = idris_strHead(vm, LOC(1));
        LOC(7) = NULL;
        LOC(8) = idris_strTail(vm, LOC(1));
        LOC(9) = MKSTR(vm, "");
        LOC(8) = idris_streq(vm, LOC(8), LOC(9));
        if (GETINT(LOC(8)) == 0) {
            LOC(8) = NULL_CON(1);
        } else
        {
            LOC(8) = NULL_CON(0);
        }
        LOC(9) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(8) = RVAL;
        if (CTAG(LOC(8)) == 1) {
            PROJECT(vm, LOC(8), 9, 0);
            LOC(8) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(8), 9, 0);
            LOC(9) = idris_strTail(vm, LOC(1));
            LOC(9) = idris_strHead(vm, LOC(9));
            LOC(10) = idris_strTail(vm, LOC(1));
            LOC(10) = idris_strTail(vm, LOC(10));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(9)); SETARG(REG1, 1, LOC(10)); 
            LOC(8) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(7);
        TOP(1) = LOC(8);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(7) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
        LOC(5) = REG1;
    }
    RESERVE(4);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
}

void* _idris_Prelude_46_List_46_isPrefixOfBy(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(6);
    ADDTOP(6);
    switch(CTAG(LOC(2))) {
    case 0:
        PROJECT(vm, LOC(2), 4, 0);
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
        break;
    default:
        if (CTAG(LOC(3)) == 1) {
            PROJECT(vm, LOC(3), 4, 2);
            {
                PROJECT(vm, LOC(2), 6, 2);
                RESERVE(2);
                TOP(0) = LOC(1);
                TOP(1) = LOC(6);
                STOREOLD;
                BASETOP(0);
                ADDTOP(2);
                CALL(_idris__123_APPLY_95_0_125_);
                LOC(8) = RVAL;
                RESERVE(2);
                TOP(0) = LOC(8);
                TOP(1) = LOC(4);
                STOREOLD;
                BASETOP(0);
                ADDTOP(2);
                CALL(_idris__123_APPLY_95_0_125_);
                LOC(8) = RVAL;
                if (CTAG(LOC(8)) == 0) {
                    PROJECT(vm, LOC(8), 9, 0);
                    RVAL = NULL_CON(0);
                    TOPBASE(0);
                    REBASE;
                }
                else
                {
                    PROJECT(vm, LOC(8), 9, 0);
                    LOC(9) = NULL;
                    RESERVE(4);
                    TOP(0) = LOC(9);
                    TOP(1) = LOC(1);
                    TOP(2) = LOC(7);
                    TOP(3) = LOC(5);
                    SLIDE(vm, 4);
                    TOPBASE(4);
                    goto loop;
                }
            }
        }
        else
        {
            PROJECT(vm, LOC(3), 4, 0);
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
        break;
    }
}

void* _idris_Prelude_46_Strings_46_isSuffixOf(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(11);
    ADDTOP(11);
    LOC(2) = NULL;
    allocCon(REG1, vm, 65678, 0, 0);
    
    LOC(3) = REG1;
    LOC(4) = NULL;
    LOC(5) = NULL_CON(0);
    LOC(6) = MKSTR(vm, "");
    LOC(6) = idris_streq(vm, LOC(0), LOC(6));
    if (GETINT(LOC(6)) == 0) {
        LOC(6) = NULL_CON(1);
    } else
    {
        LOC(6) = NULL_CON(0);
    }
    LOC(7) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(6);
    TOP(1) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(6) = RVAL;
    if (CTAG(LOC(6)) == 1) {
        PROJECT(vm, LOC(6), 7, 0);
        LOC(6) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(6), 7, 0);
        LOC(7) = idris_strHead(vm, LOC(0));
        LOC(8) = NULL;
        LOC(9) = idris_strTail(vm, LOC(0));
        LOC(10) = MKSTR(vm, "");
        LOC(9) = idris_streq(vm, LOC(9), LOC(10));
        if (GETINT(LOC(9)) == 0) {
            LOC(9) = NULL_CON(1);
        } else
        {
            LOC(9) = NULL_CON(0);
        }
        LOC(10) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(9);
        TOP(1) = LOC(10);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(9) = RVAL;
        if (CTAG(LOC(9)) == 1) {
            PROJECT(vm, LOC(9), 10, 0);
            LOC(9) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(9), 10, 0);
            LOC(10) = idris_strTail(vm, LOC(0));
            LOC(10) = idris_strHead(vm, LOC(10));
            LOC(11) = idris_strTail(vm, LOC(0));
            LOC(11) = idris_strTail(vm, LOC(11));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(10)); SETARG(REG1, 1, LOC(11)); 
            LOC(9) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(8);
        TOP(1) = LOC(9);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(8) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(7)); SETARG(REG1, 1, LOC(8)); 
        LOC(6) = REG1;
    }
    RESERVE(3);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverseOnto);
    LOC(4) = RVAL;
    LOC(5) = NULL;
    LOC(6) = NULL_CON(0);
    LOC(7) = MKSTR(vm, "");
    LOC(7) = idris_streq(vm, LOC(1), LOC(7));
    if (GETINT(LOC(7)) == 0) {
        LOC(7) = NULL_CON(1);
    } else
    {
        LOC(7) = NULL_CON(0);
    }
    LOC(8) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(8);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(7) = RVAL;
    if (CTAG(LOC(7)) == 1) {
        PROJECT(vm, LOC(7), 8, 0);
        LOC(7) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(7), 8, 0);
        LOC(8) = idris_strHead(vm, LOC(1));
        LOC(9) = NULL;
        LOC(10) = idris_strTail(vm, LOC(1));
        LOC(11) = MKSTR(vm, "");
        LOC(10) = idris_streq(vm, LOC(10), LOC(11));
        if (GETINT(LOC(10)) == 0) {
            LOC(10) = NULL_CON(1);
        } else
        {
            LOC(10) = NULL_CON(0);
        }
        LOC(11) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(10);
        TOP(1) = LOC(11);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(10) = RVAL;
        if (CTAG(LOC(10)) == 1) {
            PROJECT(vm, LOC(10), 11, 0);
            LOC(10) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(10), 11, 0);
            LOC(11) = idris_strTail(vm, LOC(1));
            LOC(11) = idris_strHead(vm, LOC(11));
            LOC(12) = idris_strTail(vm, LOC(1));
            LOC(12) = idris_strTail(vm, LOC(12));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(11)); SETARG(REG1, 1, LOC(12)); 
            LOC(10) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(9);
        TOP(1) = LOC(10);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(9) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); 
        LOC(7) = REG1;
    }
    RESERVE(3);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    TOP(2) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_List_46_reverseOnto);
    LOC(5) = RVAL;
    RESERVE(4);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    TOP(2) = LOC(4);
    TOP(3) = LOC(5);
    SLIDE(vm, 4);
    TOPBASE(4);
    TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
}

void* _idris_Prelude_46_List_46_length(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        LOC(4) = NULL;
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_List_46_length);
        LOC(4) = RVAL;
        LOC(5) = MKINT(1);
        idris_requireAlloc(vm, 65536); RVAL = idris_bigPlus(vm, LOC(4), LOC(5)); idris_doneAlloc(vm);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = MKINT(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Main_46_main(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(6);
    ADDTOP(6);
    LOC(1) = NULL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(0);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Interactive_46_getLine_39_);
    LOC(1) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Main_46_isEmail);
    LOC(2) = RVAL;
    if (CTAG(LOC(2)) == 0) {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(3) = NULL;
        LOC(4) = NULL;
        allocCon(REG1, vm, 65656, 0, 0);
        
        LOC(5) = REG1;
        LOC(6) = MKSTR(vm, " is not a valid email address.");
        LOC(6) = idris_concat(vm, LOC(1), LOC(6));
        RESERVE(5);
        TOP(0) = LOC(3);
        TOP(1) = LOC(4);
        TOP(2) = LOC(5);
        TOP(3) = LOC(6);
        TOP(4) = LOC(0);
        SLIDE(vm, 5);
        TOPBASE(5);
        TAILCALL(_idris_Prelude_46_Interactive_46_printLn_39_);
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(3) = NULL;
        LOC(4) = NULL;
        allocCon(REG1, vm, 65656, 0, 0);
        
        LOC(5) = REG1;
        LOC(6) = MKSTR(vm, "Email address is: ");
        LOC(6) = idris_concat(vm, LOC(6), LOC(1));
        RESERVE(5);
        TOP(0) = LOC(3);
        TOP(1) = LOC(4);
        TOP(2) = LOC(5);
        TOP(3) = LOC(6);
        TOP(4) = LOC(0);
        SLIDE(vm, 5);
        TOPBASE(5);
        TAILCALL(_idris_Prelude_46_Interactive_46_printLn_39_);
    }
}

void* _idris_mkForeignPrim(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Bool_46_not(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Show_46_precCon(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(CTAG(LOC(0))) {
    case 6:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(6);
        TOPBASE(0);
        REBASE;
        break;
    case 3:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(3);
        TOPBASE(0);
        REBASE;
        break;
    case 2:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(2);
        TOPBASE(0);
        REBASE;
        break;
    case 1:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(1);
        TOPBASE(0);
        REBASE;
        break;
    case 0:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(0);
        TOPBASE(0);
        REBASE;
        break;
    case 5:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(5);
        TOPBASE(0);
        REBASE;
        break;
    case 4:
        PROJECT(vm, LOC(0), 1, 0);
        RVAL = MKINT(4);
        TOPBASE(0);
        REBASE;
        break;
    default:
        return NULL;
    }
}

void* _idris_Prelude_46_Show_46_primNumShow(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(5);
    ADDTOP(5);
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY_95_0_125_);
    LOC(4) = RVAL;
    switch(CTAG(LOC(2))) {
    case 6:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(6);
        break;
    case 3:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(3);
        break;
    case 2:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(2);
        break;
    case 1:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(1);
        break;
    case 0:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(0);
        break;
    case 5:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(5);
        break;
    case 4:
        PROJECT(vm, LOC(2), 5, 0);
        LOC(5) = MKINT(4);
        break;
    default:
        return NULL;
    }
    LOC(6) = MKINT(5);
    RESERVE(2);
    TOP(0) = LOC(5);
    TOP(1) = LOC(6);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Integer_58__33_compare_58_0);
    LOC(5) = RVAL;
    switch(CTAG(LOC(5))) {
    case 2:
        PROJECT(vm, LOC(5), 6, 0);
        LOC(5) = NULL_CON(1);
        break;
    default:
        switch(CTAG(LOC(2))) {
        case 6:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(6);
            break;
        case 3:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(3);
            break;
        case 2:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(2);
            break;
        case 1:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(1);
            break;
        case 0:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(0);
            break;
        case 5:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(5);
            break;
        case 4:
            PROJECT(vm, LOC(2), 6, 0);
            LOC(6) = MKINT(4);
            break;
        default:
            return NULL;
        }
        LOC(7) = MKINT(5);
        idris_requireAlloc(vm, 65536); LOC(6) = idris_bigEq(vm, LOC(6), LOC(7)); idris_doneAlloc(vm);
        if (GETINT(LOC(6)) == 0) {
            LOC(5) = NULL_CON(0);
        } else
        {
            LOC(5) = NULL_CON(1);
        }
        break;
    }
    if (CTAG(LOC(5)) == 0) {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(5) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(6) = MKSTR(vm, "");
        LOC(6) = idris_streq(vm, LOC(4), LOC(6));
        if (GETINT(LOC(6)) == 0) {
            LOC(6) = NULL_CON(1);
        } else
        {
            LOC(6) = NULL_CON(0);
        }
        LOC(7) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(6);
        TOP(1) = LOC(7);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(6) = RVAL;
        if (CTAG(LOC(6)) == 1) {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(5) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(7) = idris_strHead(vm, LOC(4));
            LOC(8) = MKINT(45);
            LOC(7) = INTOP(==,LOC(7), LOC(8));
            if (GETINT(LOC(7)) == 0) {
                LOC(5) = NULL_CON(0);
            } else
            {
                LOC(5) = NULL_CON(1);
            }
        }
    }
    if (CTAG(LOC(5)) == 0) {
        PROJECT(vm, LOC(5), 6, 0);
        RVAL = LOC(4);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(5), 6, 0);
        LOC(6) = MKSTR(vm, "(");
        LOC(7) = MKSTR(vm, ")");
        LOC(7) = idris_concat(vm, LOC(4), LOC(7));
        RVAL = idris_concat(vm, LOC(6), LOC(7));
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_prim_95__95_addBigInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    idris_requireAlloc(vm, 65536); RVAL = idris_bigPlus(vm, LOC(0), LOC(1)); idris_doneAlloc(vm);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_asPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, GETMPTR(LOC(0)));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_charToInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(0);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_concat(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_concat(vm, LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_eqBigInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    idris_requireAlloc(vm, 65536); RVAL = idris_bigEq(vm, LOC(0), LOC(1)); idris_doneAlloc(vm);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_eqChar(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = INTOP(==,LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_eqManagedPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(GETMPTR(LOC(0)) == GETMPTR(LOC(1))));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_eqPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(GETPTR(LOC(0)) == GETPTR(LOC(1))));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_eqString(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_streq(vm, LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_managedNull(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, NULL);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_null(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, NULL);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peek16(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB16(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peek32(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB32(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peek64(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB64(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peek8(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekB8(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peekDouble(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekDouble(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peekPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekPtr(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_peekSingle(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_peekSingle(vm,LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_poke16(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB16(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_poke32(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB32(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_poke64(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB64(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_poke8(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeB8(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_pokeDouble(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeDouble(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_pokePtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokePtr(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_pokeSingle(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_pokeSingle(LOC(1),LOC(2),LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_ptrOffset(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, (void *)((char *)GETPTR(LOC(0)) + GETINT(LOC(1))));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_readChars(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_readChars(vm, GETINT(LOC(1)), GETPTR(LOC(2)));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_readFile(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_readStr(vm, GETPTR(LOC(1)));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_readString(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_readStr(vm, stdin);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_registerPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKMPTR(vm, GETPTR(LOC(0)), GETINT(LOC(1)));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_sextInt_95_BigInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_castIntBig(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_sizeofPtr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT(sizeof(void*));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_sltBigInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    idris_requireAlloc(vm, 65536); RVAL = idris_bigLt(vm, LOC(0), LOC(1)); idris_doneAlloc(vm);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_sltChar(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = INTOP(<,LOC(0), LOC(1));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_stderr(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stderr);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_stdin(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stdin);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_stdout(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, stdout);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_strCons(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strCons(vm, LOC(0),LOC(1));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_strHead(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strHead(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_strRev(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strRev(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_strTail(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_strTail(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_toStrInt(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = idris_castIntStr(vm, LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_vm(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKPTR(vm, vm);
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_writeFile(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(idris_writeStr(GETPTR(LOC(1)),GETSTR(LOC(2)))));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95__95_writeString(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = MKINT((i_int)(idris_writeStr(stdout,GETSTR(LOC(1)))));
    TOPBASE(0);
    REBASE;
}

void* _idris_prim_95_io_95_bind(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

void* _idris_Prelude_46_Interactive_46_printLn_39_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris__123_APPLY_95_0_125_);
    LOC(5) = RVAL;
    LOC(6) = MKSTR(vm, """\x0a""");
    LOC(5) = idris_concat(vm, LOC(5), LOC(6));
    LOC(5) = MKINT((i_int)(idris_writeStr(stdout,GETSTR(LOC(5)))));
    RVAL = NULL_CON(0);
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46_protectEsc(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    LOC(3) = MKSTR(vm, "");
    LOC(3) = idris_streq(vm, LOC(2), LOC(3));
    if (GETINT(LOC(3)) == 0) {
        LOC(3) = NULL_CON(1);
    } else
    {
        LOC(3) = NULL_CON(0);
    }
    LOC(4) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(3) = RVAL;
    if (CTAG(LOC(3)) == 1) {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(3) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(4) = idris_strHead(vm, LOC(2));
        RESERVE(2);
        TOP(0) = LOC(0);
        TOP(1) = LOC(4);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY_95_0_125_);
        LOC(3) = RVAL;
    }
    if (CTAG(LOC(3)) == 0) {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(3) = MKSTR(vm, "");
    }
    else
    {
        PROJECT(vm, LOC(3), 4, 0);
        LOC(3) = MKSTR(vm, "\\&");
    }
    LOC(3) = idris_concat(vm, LOC(3), LOC(2));
    RVAL = idris_concat(vm, LOC(1), LOC(3));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_List_46_reverseOnto(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        LOC(5) = NULL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(1)); 
        LOC(6) = REG1;
        RESERVE(3);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        TOP(2) = LOC(4);
        SLIDE(vm, 3);
        TOPBASE(3);
        goto loop;
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_run_95__95_IO(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(2) = NULL;
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

void* _idris_Prelude_46_Show_46_show(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(1);
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46_showLitChar(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(3);
    ADDTOP(3);
    if (GETINT(LOC(0)) == 7) {
        allocCon(REG1, vm, 65670, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 8) {
        allocCon(REG1, vm, 65671, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 9) {
        allocCon(REG1, vm, 65660, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 10) {
        allocCon(REG1, vm, 65661, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 11) {
        allocCon(REG1, vm, 65662, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 12) {
        allocCon(REG1, vm, 65663, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 13) {
        allocCon(REG1, vm, 65664, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 14) {
        allocCon(REG1, vm, 65665, 0, 0);
        
        LOC(1) = REG1;
        LOC(2) = MKSTR(vm, "\\SO");
        allocCon(REG1, vm, 65659, 2, 0);
        SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(2)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 92) {
        allocCon(REG1, vm, 65666, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    if (GETINT(LOC(0)) == 127) {
        allocCon(REG1, vm, 65667, 0, 0);
        
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    } else
    {
        LOC(1) = NULL;
        LOC(2) = LOC(0);
        LOC(2) = idris_castIntBig(vm, LOC(2));
        LOC(3) = NULL;
        RESERVE(1);
        TOP(0) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Show_46_showLitChar_58_asciiTab_58_10);
        LOC(3) = RVAL;
        RESERVE(3);
        TOP(0) = LOC(1);
        TOP(1) = LOC(2);
        TOP(2) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(3);
        CALL(_idris_Prelude_46_Show_46_showLitChar_58_getAt_58_10);
        LOC(1) = RVAL;
        if (CTAG(LOC(1)) == 1) {
            PROJECT(vm, LOC(1), 2, 1);
            allocCon(REG1, vm, 65668, 1, 0);
            SETARG(REG1, 0, LOC(2)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
        else
        {
            PROJECT(vm, LOC(1), 2, 0);
            LOC(2) = MKINT(127);
            RESERVE(2);
            TOP(0) = LOC(0);
            TOP(1) = LOC(2);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0);
            LOC(2) = RVAL;
            switch(CTAG(LOC(2))) {
            case 2:
                PROJECT(vm, LOC(2), 3, 0);
                allocCon(REG1, vm, 65669, 1, 0);
                SETARG(REG1, 0, LOC(0)); 
                RVAL = REG1;
                TOPBASE(0);
                REBASE;
                break;
            default:
                allocCon(REG1, vm, 65672, 1, 0);
                SETARG(REG1, 0, LOC(0)); 
                RVAL = REG1;
                TOPBASE(0);
                REBASE;
                break;
            }
        }
    }
}

void* _idris_Prelude_46_Show_46_showLitString(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(0)) == 1) {
        PROJECT(vm, LOC(0), 2, 2);
        if (GETINT(LOC(2)) == 34) {
            LOC(4) = MKSTR(vm, "\\\"");
            RESERVE(2);
            TOP(0) = LOC(3);
            TOP(1) = LOC(1);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Prelude_46_Show_46_showLitString);
            LOC(5) = RVAL;
            RVAL = idris_concat(vm, LOC(4), LOC(5));
            TOPBASE(0);
            REBASE;
        } else
        {
            RESERVE(1);
            TOP(0) = LOC(2);
            STOREOLD;
            BASETOP(0);
            ADDTOP(1);
            CALL(_idris_Prelude_46_Show_46_showLitChar);
            LOC(4) = RVAL;
            RESERVE(2);
            TOP(0) = LOC(3);
            TOP(1) = LOC(1);
            STOREOLD;
            BASETOP(0);
            ADDTOP(2);
            CALL(_idris_Prelude_46_Show_46_showLitString);
            LOC(5) = RVAL;
            RESERVE(2);
            TOP(0) = LOC(4);
            TOP(1) = LOC(5);
            SLIDE(vm, 2);
            TOPBASE(2);
            TAILCALL(_idris__123_APPLY_95_0_125_);
        }
    }
    else
    {
        PROJECT(vm, LOC(0), 2, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Show_46_showParens(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 2, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(0), 2, 0);
        LOC(2) = MKSTR(vm, "(");
        LOC(3) = MKSTR(vm, ")");
        LOC(3) = idris_concat(vm, LOC(1), LOC(3));
        RVAL = idris_concat(vm, LOC(2), LOC(3));
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_List_46_tails(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(3);
    ADDTOP(3);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        LOC(4) = NULL;
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_List_46_tails);
        LOC(2) = RVAL;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = LOC(1);
    }
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(2)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Strings_46_unpack(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(3);
    ADDTOP(3);
    LOC(1) = MKSTR(vm, "");
    LOC(1) = idris_streq(vm, LOC(0), LOC(1));
    if (GETINT(LOC(1)) == 0) {
        LOC(1) = NULL_CON(1);
    } else
    {
        LOC(1) = NULL_CON(0);
    }
    LOC(2) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(1);
    TOP(1) = LOC(2);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(1) = RVAL;
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = idris_strHead(vm, LOC(0));
        LOC(3) = idris_strTail(vm, LOC(0));
        RESERVE(1);
        TOP(0) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(1);
        CALL(_idris_Prelude_46_Strings_46_unpack);
        LOC(3) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_unsafePerformPrimIO(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = NULL;
    TOPBASE(0);
    REBASE;
}

void* _idris_world(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RVAL = LOC(0);
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Bool_46__124__124_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(0)) == 0) {
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris__123_EVAL_95_0_125_);
    }
    else
    {
        PROJECT(vm, LOC(0), 2, 0);
        RVAL = LOC(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__123_APPLY_95_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(4);
    ADDTOP(4);
    switch(TAG(LOC(0))) {
    case 65654:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Main_46__123_isEmail_95_2_125_);
        break;
    case 65655:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_isEmail_95_3_125_);
        break;
    case 65656:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Main_46__123_main_95_6_125_);
        break;
    case 65657:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Chars_46_isDigit);
        break;
    case 65658:
        PROJECT(vm, LOC(0), 2, 4);
        RESERVE(5);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(4);
        TOP(3) = LOC(5);
        TOP(4) = LOC(1);
        SLIDE(vm, 5);
        TOPBASE(5);
        TAILCALL(_idris_Prelude_46_Interactive_46_printLn_39_);
        break;
    case 65659:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Prelude_46_Show_46_protectEsc);
        break;
    case 65660:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_10_125_);
        break;
    case 65661:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_11_125_);
        break;
    case 65662:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_12_125_);
        break;
    case 65663:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_13_125_);
        break;
    case 65664:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_14_125_);
        break;
    case 65665:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_15_125_);
        break;
    case 65666:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_16_125_);
        break;
    case 65667:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_17_125_);
        break;
    case 65668:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_18_125_);
        break;
    case 65669:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_19_125_);
        break;
    case 65670:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_8_125_);
        break;
    case 65671:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_Prelude_46_Show_46__123_showLitChar_95_9_125_);
        break;
    case 65672:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_prim_95__95_strCons);
        break;
    case 65673:
        PROJECT(vm, LOC(0), 2, 0);
        RESERVE(1);
        TOP(0) = LOC(1);
        SLIDE(vm, 1);
        TOPBASE(1);
        TAILCALL(_idris_prim_95__95_toStrInt);
        break;
    case 65674:
        PROJECT(vm, LOC(0), 2, 1);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(1);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_PE_95_isInfixOf_95_22f242c8_95_0_125_);
        break;
    case 65675:
        PROJECT(vm, LOC(0), 2, 2);
        RESERVE(3);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        TOP(2) = LOC(1);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris__123_PE_95_isInfixOf_95_22f242c8_95_1_125_);
        break;
    case 65676:
        PROJECT(vm, LOC(0), 2, 1);
        allocCon(REG1, vm, 65654, 2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65678:
        PROJECT(vm, LOC(0), 2, 0);
        allocCon(REG1, vm, 65674, 1, 0);
        SETARG(REG1, 0, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    case 65680:
        PROJECT(vm, LOC(0), 2, 1);
        allocCon(REG1, vm, 65675, 2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(1)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = NULL;
        TOPBASE(0);
        REBASE;
        break;
    }
}

void* _idris__123_APPLY2_95_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(TAG(LOC(0))) {
    case 65676:
        PROJECT(vm, LOC(0), 3, 1);
        RESERVE(3);
        TOP(0) = LOC(3);
        TOP(1) = LOC(1);
        TOP(2) = LOC(2);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris_Main_46__123_isEmail_95_2_125_);
        break;
    case 65678:
        PROJECT(vm, LOC(0), 3, 0);
        RESERVE(2);
        TOP(0) = LOC(1);
        TOP(1) = LOC(2);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_PE_95_isInfixOf_95_22f242c8_95_0_125_);
        break;
    case 65680:
        PROJECT(vm, LOC(0), 3, 1);
        RESERVE(3);
        TOP(0) = LOC(3);
        TOP(1) = LOC(1);
        TOP(2) = LOC(2);
        SLIDE(vm, 3);
        TOPBASE(3);
        TAILCALL(_idris__123_PE_95_isInfixOf_95_22f242c8_95_1_125_);
        break;
    default:
        RESERVE(2);
        TOP(0) = LOC(0);
        TOP(1) = LOC(1);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY_95_0_125_);
        LOC(3) = RVAL;
        RESERVE(2);
        TOP(0) = LOC(3);
        TOP(1) = LOC(2);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_APPLY_95_0_125_);
        break;
    }
}

void* _idris__123_EVAL_95_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(TAG(LOC(0))) {
    default:
        RVAL = LOC(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void* _idris__123_PE_95_isInfixOf_95_22f242c8_95_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(2) = INTOP(==,LOC(0), LOC(1));
    if (GETINT(LOC(2)) == 0) {
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__123_runMain_95_0_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(0) = NULL;
    RESERVE(1);
    TOP(0) = LOC(0);
    STOREOLD;
    BASETOP(0);
    ADDTOP(1);
    CALL(_idris_Main_46_main);
    LOC(0) = RVAL;
    RESERVE(1);
    TOP(0) = LOC(0);
    SLIDE(vm, 1);
    TOPBASE(1);
    TAILCALL(_idris__123_EVAL_95_0_125_);
}

void* _idris__123_PE_95_isInfixOf_95_22f242c8_95_1_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 3, 0);
        LOC(3) = NULL;
        allocCon(REG1, vm, 65678, 0, 0);
        
        LOC(4) = REG1;
        RESERVE(4);
        TOP(0) = LOC(3);
        TOP(1) = LOC(4);
        TOP(2) = LOC(0);
        TOP(3) = LOC(2);
        SLIDE(vm, 4);
        TOPBASE(4);
        TAILCALL(_idris_Prelude_46_List_46_isPrefixOfBy);
    }
    else
    {
        PROJECT(vm, LOC(1), 3, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Main_46__123_isEmail_95_2_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 3, 0);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(0);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_Strings_46_isInfixOf);
    }
    else
    {
        PROJECT(vm, LOC(1), 3, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Main_46__123_isEmail_95_3_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(64);
    LOC(1) = INTOP(==,LOC(1), LOC(0));
    if (GETINT(LOC(1)) == 0) {
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Main_46__123_main_95_6_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(7);
    ADDTOP(7);
    LOC(1) = MKINT(34);
    LOC(2) = MKSTR(vm, "");
    LOC(2) = idris_streq(vm, LOC(0), LOC(2));
    if (GETINT(LOC(2)) == 0) {
        LOC(2) = NULL_CON(1);
    } else
    {
        LOC(2) = NULL_CON(0);
    }
    LOC(3) = NULL_CON(1);
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
    LOC(2) = RVAL;
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(2) = NULL_CON(0);
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        LOC(3) = idris_strHead(vm, LOC(0));
        LOC(4) = NULL;
        LOC(5) = idris_strTail(vm, LOC(0));
        LOC(6) = MKSTR(vm, "");
        LOC(5) = idris_streq(vm, LOC(5), LOC(6));
        if (GETINT(LOC(5)) == 0) {
            LOC(5) = NULL_CON(1);
        } else
        {
            LOC(5) = NULL_CON(0);
        }
        LOC(6) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(5) = RVAL;
        if (CTAG(LOC(5)) == 1) {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(5) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = idris_strTail(vm, LOC(0));
            LOC(6) = idris_strHead(vm, LOC(6));
            LOC(7) = idris_strTail(vm, LOC(0));
            LOC(7) = idris_strTail(vm, LOC(7));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
            LOC(5) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(5);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(4) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(4)); 
        LOC(2) = REG1;
    }
    LOC(3) = MKSTR(vm, "\"");
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    STOREOLD;
    BASETOP(0);
    ADDTOP(2);
    CALL(_idris_Prelude_46_Show_46_showLitString);
    LOC(2) = RVAL;
    RVAL = idris_strCons(vm, LOC(1),LOC(2));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_8_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\a");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_9_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\b");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_10_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\t");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_11_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\n");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_12_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\v");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_13_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\f");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_14_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\r");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_15_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKINT(72);
    LOC(1) = INTOP(==,LOC(0), LOC(1));
    if (GETINT(LOC(1)) == 0) {
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_16_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\\\");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_17_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    LOC(1) = MKSTR(vm, "\\DEL");
    RVAL = idris_concat(vm, LOC(1), LOC(0));
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_18_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    LOC(2) = MKINT(92);
    LOC(3) = idris_concat(vm, LOC(0), LOC(1));
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris_prim_95__95_strCons);
}

void* _idris_Prelude_46_Show_46__123_showLitChar_95_19_125_(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(6);
    ADDTOP(6);
    LOC(2) = MKINT(92);
    allocCon(REG1, vm, 65657, 0, 0);
    
    LOC(3) = REG1;
    LOC(4) = NULL;
    allocCon(REG1, vm, 65673, 0, 0);
    
    LOC(5) = REG1;
    LOC(6) = NULL_CON(0);
    LOC(7) = LOC(0);
    RESERVE(4);
    TOP(0) = LOC(4);
    TOP(1) = LOC(5);
    TOP(2) = LOC(6);
    TOP(3) = LOC(7);
    STOREOLD;
    BASETOP(0);
    ADDTOP(4);
    CALL(_idris_Prelude_46_Show_46_primNumShow);
    LOC(4) = RVAL;
    RESERVE(3);
    TOP(0) = LOC(3);
    TOP(1) = LOC(4);
    TOP(2) = LOC(1);
    STOREOLD;
    BASETOP(0);
    ADDTOP(3);
    CALL(_idris_Prelude_46_Show_46_protectEsc);
    LOC(3) = RVAL;
    RESERVE(2);
    TOP(0) = LOC(2);
    TOP(1) = LOC(3);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris_prim_95__95_strCons);
}

void* _idris_Prelude_46_List_46_findIndices_58_findIndices_39__58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(5);
    ADDTOP(5);
    if (CTAG(LOC(3)) == 1) {
        PROJECT(vm, LOC(3), 4, 2);
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(4);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY_95_0_125_);
        LOC(6) = RVAL;
        if (CTAG(LOC(6)) == 0) {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(7) = NULL;
            LOC(8) = MKINT(1);
            idris_requireAlloc(vm, 65536); LOC(8) = idris_bigPlus(vm, LOC(1), LOC(8)); idris_doneAlloc(vm);
            RESERVE(4);
            TOP(0) = LOC(7);
            TOP(1) = LOC(8);
            TOP(2) = LOC(2);
            TOP(3) = LOC(5);
            SLIDE(vm, 4);
            TOPBASE(4);
            goto loop;
        }
        else
        {
            PROJECT(vm, LOC(6), 7, 0);
            LOC(7) = NULL;
            LOC(8) = MKINT(1);
            idris_requireAlloc(vm, 65536); LOC(8) = idris_bigPlus(vm, LOC(1), LOC(8)); idris_doneAlloc(vm);
            RESERVE(4);
            TOP(0) = LOC(7);
            TOP(1) = LOC(8);
            TOP(2) = LOC(2);
            TOP(3) = LOC(5);
            STOREOLD;
            BASETOP(0);
            ADDTOP(4);
            CALL(_idris_Prelude_46_List_46_findIndices_58_findIndices_39__58_0);
            LOC(7) = RVAL;
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(7)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        }
    }
    else
    {
        PROJECT(vm, LOC(3), 4, 0);
        RVAL = LOC(3);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 0) {
        PROJECT(vm, LOC(1), 2, 0);
        if (CTAG(LOC(0)) == 0) {
            PROJECT(vm, LOC(0), 2, 0);
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
        else
        {
            PROJECT(vm, LOC(0), 2, 0);
            RVAL = NULL_CON(1);
            TOPBASE(0);
            REBASE;
        }
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        if (CTAG(LOC(0)) == 0) {
            PROJECT(vm, LOC(0), 2, 0);
            RVAL = NULL_CON(1);
            TOPBASE(0);
            REBASE;
        }
        else
        {
            PROJECT(vm, LOC(0), 2, 0);
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
    }
}

void* _idris_Prelude_46_Interfaces_46_Prelude_46_Nat_46__64_Prelude_46_Interfaces_46_Eq_36_Nat_58__33__61__61__58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    if (bigEqConst(LOC(1), 0)) {
        if (bigEqConst(LOC(0), 0)) {
            RVAL = NULL_CON(1);
            TOPBASE(0);
            REBASE;
        } else
        {
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
    } else
    {
        LOC(2) = MKINT(1);
        idris_requireAlloc(vm, 65536); LOC(2) = idris_bigMinus(vm, LOC(1), LOC(2)); idris_doneAlloc(vm);
        if (bigEqConst(LOC(0), 0)) {
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(3) = MKINT(1);
            idris_requireAlloc(vm, 65536); LOC(3) = idris_bigMinus(vm, LOC(0), LOC(3)); idris_doneAlloc(vm);
            RESERVE(2);
            TOP(0) = LOC(3);
            TOP(1) = LOC(2);
            SLIDE(vm, 2);
            TOPBASE(2);
            goto loop;
        }
    }
}

void* _idris_Prelude_46_Foldable_46_Prelude_46_List_46__64_Prelude_46_Foldable_46_Foldable_36_List_58__33_foldl_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(5);
    ADDTOP(5);
    if (CTAG(LOC(4)) == 1) {
        PROJECT(vm, LOC(4), 5, 2);
        LOC(7) = NULL;
        LOC(8) = NULL;
        RESERVE(2);
        TOP(0) = LOC(2);
        TOP(1) = LOC(3);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY_95_0_125_);
        LOC(9) = RVAL;
        RESERVE(2);
        TOP(0) = LOC(9);
        TOP(1) = LOC(5);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__123_APPLY_95_0_125_);
        LOC(9) = RVAL;
        RESERVE(5);
        TOP(0) = LOC(7);
        TOP(1) = LOC(8);
        TOP(2) = LOC(2);
        TOP(3) = LOC(9);
        TOP(4) = LOC(6);
        SLIDE(vm, 5);
        TOPBASE(5);
        goto loop;
    }
    else
    {
        PROJECT(vm, LOC(4), 5, 0);
        RVAL = LOC(3);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    LOC(2) = INTOP(==,LOC(0), LOC(1));
    if (GETINT(LOC(2)) == 0) {
        LOC(3) = INTOP(<,LOC(0), LOC(1));
        if (GETINT(LOC(3)) == 0) {
            RVAL = NULL_CON(2);
            TOPBASE(0);
            REBASE;
        } else
        {
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Integer_58__33_compare_58_0(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    idris_requireAlloc(vm, 65536); LOC(2) = idris_bigEq(vm, LOC(0), LOC(1)); idris_doneAlloc(vm);
    if (GETINT(LOC(2)) == 0) {
        idris_requireAlloc(vm, 65536); LOC(3) = idris_bigLt(vm, LOC(0), LOC(1)); idris_doneAlloc(vm);
        if (GETINT(LOC(3)) == 0) {
            RVAL = NULL_CON(2);
            TOPBASE(0);
            REBASE;
        } else
        {
            RVAL = NULL_CON(0);
            TOPBASE(0);
            REBASE;
        }
    } else
    {
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Show_46_showLitChar_58_asciiTab_58_10(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(33);
    ADDTOP(33);
    LOC(1) = MKSTR(vm, "NUL");
    LOC(2) = MKSTR(vm, "SOH");
    LOC(3) = MKSTR(vm, "STX");
    LOC(4) = MKSTR(vm, "ETX");
    LOC(5) = MKSTR(vm, "EOT");
    LOC(6) = MKSTR(vm, "ENQ");
    LOC(7) = MKSTR(vm, "ACK");
    LOC(8) = MKSTR(vm, "BEL");
    LOC(9) = MKSTR(vm, "BS");
    LOC(10) = MKSTR(vm, "HT");
    LOC(11) = MKSTR(vm, "LF");
    LOC(12) = MKSTR(vm, "VT");
    LOC(13) = MKSTR(vm, "FF");
    LOC(14) = MKSTR(vm, "CR");
    LOC(15) = MKSTR(vm, "SO");
    LOC(16) = MKSTR(vm, "SI");
    LOC(17) = MKSTR(vm, "DLE");
    LOC(18) = MKSTR(vm, "DC1");
    LOC(19) = MKSTR(vm, "DC2");
    LOC(20) = MKSTR(vm, "DC3");
    LOC(21) = MKSTR(vm, "DC4");
    LOC(22) = MKSTR(vm, "NAK");
    LOC(23) = MKSTR(vm, "SYN");
    LOC(24) = MKSTR(vm, "ETB");
    LOC(25) = MKSTR(vm, "CAN");
    LOC(26) = MKSTR(vm, "EM");
    LOC(27) = MKSTR(vm, "SUB");
    LOC(28) = MKSTR(vm, "ESC");
    LOC(29) = MKSTR(vm, "FS");
    LOC(30) = MKSTR(vm, "GS");
    LOC(31) = MKSTR(vm, "RS");
    LOC(32) = MKSTR(vm, "US");
    LOC(33) = NULL_CON(0);
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(32)); SETARG(REG1, 1, LOC(33)); 
    LOC(32) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(31)); SETARG(REG1, 1, LOC(32)); 
    LOC(31) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(30)); SETARG(REG1, 1, LOC(31)); 
    LOC(30) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(29)); SETARG(REG1, 1, LOC(30)); 
    LOC(29) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(28)); SETARG(REG1, 1, LOC(29)); 
    LOC(28) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(27)); SETARG(REG1, 1, LOC(28)); 
    LOC(27) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(26)); SETARG(REG1, 1, LOC(27)); 
    LOC(26) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(25)); SETARG(REG1, 1, LOC(26)); 
    LOC(25) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(24)); SETARG(REG1, 1, LOC(25)); 
    LOC(24) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(23)); SETARG(REG1, 1, LOC(24)); 
    LOC(23) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(22)); SETARG(REG1, 1, LOC(23)); 
    LOC(22) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(21)); SETARG(REG1, 1, LOC(22)); 
    LOC(21) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(20)); SETARG(REG1, 1, LOC(21)); 
    LOC(20) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(19)); SETARG(REG1, 1, LOC(20)); 
    LOC(19) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(18)); SETARG(REG1, 1, LOC(19)); 
    LOC(18) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(17)); SETARG(REG1, 1, LOC(18)); 
    LOC(17) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(16)); SETARG(REG1, 1, LOC(17)); 
    LOC(16) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(15)); SETARG(REG1, 1, LOC(16)); 
    LOC(15) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(14)); SETARG(REG1, 1, LOC(15)); 
    LOC(14) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(13)); SETARG(REG1, 1, LOC(14)); 
    LOC(13) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(12)); SETARG(REG1, 1, LOC(13)); 
    LOC(12) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(11)); SETARG(REG1, 1, LOC(12)); 
    LOC(11) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(10)); SETARG(REG1, 1, LOC(11)); 
    LOC(10) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(9)); SETARG(REG1, 1, LOC(10)); 
    LOC(9) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(8)); SETARG(REG1, 1, LOC(9)); 
    LOC(8) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(7)); SETARG(REG1, 1, LOC(8)); 
    LOC(7) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
    LOC(6) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(5)); SETARG(REG1, 1, LOC(6)); 
    LOC(5) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); 
    LOC(4) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(3)); SETARG(REG1, 1, LOC(4)); 
    LOC(3) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); 
    LOC(2) = REG1;
    allocCon(REG1, vm, 1, 2, 0);
    SETARG(REG1, 0, LOC(1)); SETARG(REG1, 1, LOC(2)); 
    RVAL = REG1;
    TOPBASE(0);
    REBASE;
}

void* _idris_Prelude_46_Show_46_showLitChar_58_getAt_58_10(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(4);
    ADDTOP(4);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        if (bigEqConst(LOC(1), 0)) {
            allocCon(REG1, vm, 1, 1, 0);
            SETARG(REG1, 0, LOC(3)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
        } else
        {
            LOC(5) = MKINT(1);
            idris_requireAlloc(vm, 65536); LOC(5) = idris_bigMinus(vm, LOC(1), LOC(5)); idris_doneAlloc(vm);
            LOC(6) = NULL;
            RESERVE(3);
            TOP(0) = LOC(6);
            TOP(1) = LOC(5);
            TOP(2) = LOC(4);
            SLIDE(vm, 3);
            TOPBASE(3);
            goto loop;
        }
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__95_Prelude_46_Interactive_46_getLine_39__58_trimNL_58_0_95_with_95_18(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        if (GETINT(LOC(3)) == 10) {
            RVAL = LOC(4);
            TOPBASE(0);
            REBASE;
        } else
        {
            RVAL = idris_strCons(vm, LOC(3),LOC(4));
            TOPBASE(0);
            REBASE;
        }
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = MKSTR(vm, "");
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Show_46__64_Prelude_46_Interfaces_46_Ord_36_Prec_58__33__62__58_0_95_with_95_27(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(CTAG(LOC(0))) {
    case 2:
        PROJECT(vm, LOC(0), 3, 0);
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void* _idris__95_Prelude_46_Strings_46_strM_95_with_95_33(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(2);
    ADDTOP(2);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = idris_strHead(vm, LOC(0));
        LOC(3) = idris_strTail(vm, LOC(0));
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(3)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__95_Prelude_46_Strings_46_unpack_95_with_95_36(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(6);
    ADDTOP(6);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 2);
        LOC(4) = NULL;
        LOC(5) = MKSTR(vm, "");
        LOC(5) = idris_streq(vm, LOC(3), LOC(5));
        if (GETINT(LOC(5)) == 0) {
            LOC(5) = NULL_CON(1);
        } else
        {
            LOC(5) = NULL_CON(0);
        }
        LOC(6) = NULL_CON(1);
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(6);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Decidable_46_Equality_46_Decidable_46_Equality_46__64_Decidable_46_Equality_46_DecEq_36_Bool_58__33_decEq_58_0);
        LOC(5) = RVAL;
        if (CTAG(LOC(5)) == 1) {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(5) = NULL_CON(0);
        }
        else
        {
            PROJECT(vm, LOC(5), 6, 0);
            LOC(6) = idris_strHead(vm, LOC(3));
            LOC(7) = idris_strTail(vm, LOC(3));
            allocCon(REG1, vm, 1, 2, 0);
            SETARG(REG1, 0, LOC(6)); SETARG(REG1, 1, LOC(7)); 
            LOC(5) = REG1;
        }
        RESERVE(2);
        TOP(0) = LOC(4);
        TOP(1) = LOC(5);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris__95_Prelude_46_Strings_46_unpack_95_with_95_36);
        LOC(4) = RVAL;
        allocCon(REG1, vm, 1, 2, 0);
        SETARG(REG1, 0, LOC(2)); SETARG(REG1, 1, LOC(4)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__95_Prelude_46_Show_46_firstCharIs_95_with_95_45(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(2)) == 1) {
        PROJECT(vm, LOC(2), 3, 2);
        RESERVE(2);
        TOP(0) = LOC(0);
        TOP(1) = LOC(3);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris__123_APPLY_95_0_125_);
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 0);
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33__60__58_0_95_with_95_140(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(CTAG(LOC(0))) {
    case 0:
        PROJECT(vm, LOC(0), 3, 0);
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void* _idris__95_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33__62__58_0_95_with_95_143(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    switch(CTAG(LOC(0))) {
    case 2:
        PROJECT(vm, LOC(0), 3, 0);
        RVAL = NULL_CON(1);
        TOPBASE(0);
        REBASE;
        break;
    default:
        RVAL = NULL_CON(0);
        TOPBASE(0);
        REBASE;
        break;
    }
}

void* _idris_Prelude_46_List_46_tails_95__95__95__95__95_Prelude_95__95_List_95__95_idr_95_725_95_23_95_725_95_24_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(3);
    ADDTOP(3);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 3, 2);
        LOC(5) = NULL;
        RESERVE(2);
        TOP(0) = LOC(5);
        TOP(1) = LOC(4);
        SLIDE(vm, 2);
        TOPBASE(2);
        TAILCALL(_idris_Prelude_46_List_46_tails);
    }
    else
    {
        PROJECT(vm, LOC(1), 3, 0);
        RVAL = LOC(1);
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_Prelude_46_Show_46_showLitChar_95__95__95__95__95_Prelude_95__95_Show_95__95_idr_95_128_95_27_95_128_95_65_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    if (CTAG(LOC(1)) == 1) {
        PROJECT(vm, LOC(1), 2, 1);
        allocCon(REG1, vm, 65668, 1, 0);
        SETARG(REG1, 0, LOC(2)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(1), 2, 0);
        LOC(2) = MKINT(127);
        RESERVE(2);
        TOP(0) = LOC(0);
        TOP(1) = LOC(2);
        STOREOLD;
        BASETOP(0);
        ADDTOP(2);
        CALL(_idris_Prelude_46_Interfaces_46_Prelude_46_Interfaces_46__64_Prelude_46_Interfaces_46_Ord_36_Char_58__33_compare_58_0);
        LOC(2) = RVAL;
        switch(CTAG(LOC(2))) {
        case 2:
            PROJECT(vm, LOC(2), 3, 0);
            allocCon(REG1, vm, 65669, 1, 0);
            SETARG(REG1, 0, LOC(0)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
            break;
        default:
            allocCon(REG1, vm, 65672, 1, 0);
            SETARG(REG1, 0, LOC(0)); 
            RVAL = REG1;
            TOPBASE(0);
            REBASE;
            break;
        }
    }
}

void* _idris_Main_46_main_95_C_95__95__95__95_Users_95__95_zente_95__95_Documents_95__95_Idris_95__95_Idris_95__95_Presentation_95__95_sandbox_95__95_validEmail_95__95_idr_95_57_95_16_95_57_95_41_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(5);
    ADDTOP(5);
    if (CTAG(LOC(2)) == 0) {
        PROJECT(vm, LOC(2), 3, 1);
        LOC(4) = NULL;
        LOC(5) = NULL;
        allocCon(REG1, vm, 65656, 0, 0);
        
        LOC(6) = REG1;
        LOC(7) = MKSTR(vm, "Email address is: ");
        LOC(7) = idris_concat(vm, LOC(7), LOC(1));
        allocCon(REG1, vm, 65658, 4, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); SETARG(REG1, 2, LOC(6)); SETARG(REG1, 3, LOC(7)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
    else
    {
        PROJECT(vm, LOC(2), 3, 1);
        LOC(4) = NULL;
        LOC(5) = NULL;
        allocCon(REG1, vm, 65656, 0, 0);
        
        LOC(6) = REG1;
        LOC(7) = MKSTR(vm, " is not a valid email address.");
        LOC(7) = idris_concat(vm, LOC(1), LOC(7));
        allocCon(REG1, vm, 65658, 4, 0);
        SETARG(REG1, 0, LOC(4)); SETARG(REG1, 1, LOC(5)); SETARG(REG1, 2, LOC(6)); SETARG(REG1, 3, LOC(7)); 
        RVAL = REG1;
        TOPBASE(0);
        REBASE;
    }
}

void* _idris_io_95_bind_95_IO_95__95_idr_95_108_95_34_95_108_95_36_95_case(VM* vm, VAL* oldbase) {
    INITFRAME;
loop:
    RESERVE(1);
    ADDTOP(1);
    RESERVE(2);
    TOP(0) = LOC(7);
    TOP(1) = LOC(5);
    SLIDE(vm, 2);
    TOPBASE(2);
    TAILCALL(_idris__123_APPLY_95_0_125_);
}

