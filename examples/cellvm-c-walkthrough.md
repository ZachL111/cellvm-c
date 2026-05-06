# Cellvm C Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | opcode pressure | 188 | ship |
| stress | stack movement | 178 | ship |
| edge | runtime guard | 220 | ship |
| recovery | trace depth | 183 | ship |
| stale | opcode pressure | 212 | ship |

Start with `edge` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around stack movement and trace depth.
