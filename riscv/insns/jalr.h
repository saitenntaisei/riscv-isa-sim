reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
if (insn.rs1() == X_RA && insn.rd() == 0 && insn.i_imm() == 0) {
  CHECK_RA(RS1);
}
if (insn.rd() == X_RA){
    RECORD_RA(tmp);
}
WRITE_RD(tmp);
