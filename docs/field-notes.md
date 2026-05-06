# Field Notes

The useful part of this repository is the small rule set around opcode pressure and runtime guard.

The domain cases cover `opcode pressure`, `stack movement`, `runtime guard`, and `trace depth`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`edge` is the strongest case at 220 on `runtime guard`. `stress` is the cautious anchor at 178 on `stack movement`.

The language-specific addition keeps the review model in a header and source pair with assertion tests.
