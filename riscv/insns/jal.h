reg_t tmp = npc;
set_pc(JUMP_TARGET);
if (insn.rd() == X_RA) {
    RECORD_RA(tmp);
}
WRITE_RD(tmp);
