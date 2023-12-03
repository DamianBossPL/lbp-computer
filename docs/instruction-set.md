# Instruction Set

| Operation | Parameters | Code | Description                                                             |
| --------- | ---------- | ---- | ----------------------------------------------------------------------- |
| NOP       | (none)     | 0000 | Does nothing                                                            |
| LDA       | (address)  | 0001 | Loads data from address (address) into Register A                       |
| LDB       | (address)  | 0010 | Loads data from address (address) into Register B                       |
| CPA       | (address)  | 0011 | Copies contents of Register A into (address)                            |
| CPB       | (address)  | 0100 | Copies contents of Register B into (address)                            |
| ADD       | (none)     | 0101 | Adds Register B and Register A. Result stored in Register A             |
| SUB       | (none)     | 0110 | Subtracts Register B from Register A. Result stored in Register A       |
| AND       | (none)     | 0111 | ANDs Register B and Register A. Result stored in Register A             |
| OR        | (none)     | 1000 | ORs Register B and Register A. Result stored in Register A              |
| NOT       | (none)     | 1001 | NOTs Register A. Result stored in Register A                            |
| JMP       | (address)  | 1010 | Sets Program Counter to (address)                                       |
| JZ        | (address)  | 1011 | Sets Program Counter to (address) if last ALU operation resulted in a 0 |
| SWB       | (bank)     | 1100 | Switches memory bank allowing for greater memory access                 |
| RFP       | (none)     | 1101 | Reads from port into Register A                                         |
| WTP       | (none)     | 1110 | Outputs Register A to port                                              |
| HLT       | (none)     | 1111 | Stops the clock                                                         |
