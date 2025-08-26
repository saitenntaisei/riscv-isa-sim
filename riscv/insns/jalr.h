reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
if (insn.rs1() == X_RA) { 
    CHECK_RA(RS1);
}
WRITE_RD(tmp);
