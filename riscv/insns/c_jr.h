require_extension('C');
require(insn.rvc_rs1() != 0);
if (insn.rvc_rs1() == X_RA) {
  CHECK_RA(RVC_RS1);
}
set_pc(RVC_RS1 & ~reg_t(1));
