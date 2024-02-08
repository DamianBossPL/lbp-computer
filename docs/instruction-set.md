# Instruction Set

| Operation | Parameters | Code | Description                                         |
| --------- | ---------- | ---- | --------------------------------------------------- |
| NOP       | (none)     | 0000 | Does nothing                                        |
| LDA       | (address)  | 0001 | Copies (address) into Register A                    |
| LDB       | (address)  | 0010 | Copies (address) into Register B                    |
| CPA       | (address)  | 0011 | Copies Register A into (address)                    |
| CPB       | (address)  | 0100 | Copies Register B into (address)                    |
| ADD       | (none)     | 0101 | Adds Register A and B and stored in Register A      |
| SUB       | (none)     | 0110 | Subtracts Register A and B and stored in Register A |
| AND       | (none)     | 0111 | ANDs Register A and B and stored in Register A      |
| OR        | (none)     | 1000 | ORs Register A and B and stored in Register A       |
| NOT       | (none)     | 1001 | Negates Register A and stored in Register A         |
| JMP       | (address)  | 1010 | Sets PC to (address)                                |
| JZ        | (address)  | 1011 | Sets PC to (address) if accumulator is 0            |
| SWB       | (bank)     | 1100 | Sets memory offset for the last 4 bits              |
| RFP       | (none)     | 1101 | Copies port into Register A                         |
| WTP       | (none)     | 1110 | Writes Register A into port                         |
| HLT       | (none)     | 1111 | Stops the clock                                     |
