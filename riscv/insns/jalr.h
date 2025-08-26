reg_t tmp = npc;
set_pc((RS1 + insn.i_imm()) & ~reg_t(1));
if (insn.rd() == 0 && insn.i_imm() == 0) {
    // CHECK_RA(RS1);
    std::cerr << "[LOG] check_ra called at "<< " "<<insn.rd()<< std::endl;
}
WRITE_RD(tmp);
