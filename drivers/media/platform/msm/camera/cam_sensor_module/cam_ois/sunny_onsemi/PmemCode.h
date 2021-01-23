//***** Pmem Code Header ******
const uint32_t UlPmemCodeF40[] = {
#ifdef __DOWNLOAD_SPEED_UP__
	0x68381c04, 0x215c0063, 0x002e8487, 0xaa086184, 0x84868040,
	0x027aca0c, 0x21460a40, 0x406c8484, 0xa0000068, 0x381c0421,
	0x68040027, 0xac5c0060, 0x41805c01, 0x30406c84, 0x850a0860,
	0x84048460, 0xa4204208, 0x404a4000, 0x03800068, 0x381c0421,
	0x68040027, 0xac5c0060, 0x41805c01, 0x30406c84, 0x850a0860,
	0x84048460, 0xa4204208, 0x404a4000, 0x0380005c, 0x81020061,
	0x5c089008, 0x00848015, 0x53e620c6, 0x28120168, 0x381c0423,
	0x25888420, 0x3c058508, 0x58c87600, 0x000ac076, 0x00100521,
	0xbc05f840, 0x61a00a07, 0x600000a2, 0x18486068, 0x04001320,
	0xba148850, 0x60400003, 0x80006838, 0x1c07215c, 0x0042bfe0,
	0x5cbf0048, 0x505c0080, 0x8060a006, 0x09c80184, 0x850880e0,
	0x40000081, 0x76680000, 0x78206601, 0x00078088, 0x0a088021,
	0x84080553, 0xe2049805, 0x9410040c, 0x8550233f, 0xf3c849ca,
	0x39020880, 0xa06c7038, 0x0e7aa044, 0x08408084, 0x00254408,
	0x08136680, 0x1013ea14, 0x60a40025, 0x08406140, 0x00028020,
	0x5c0962bf, 0xf0a40018, 0x487a4000, 0x0208196c, 0x7038100a,
	0x25930bff, 0xc0760000, 0x0ac08402, 0x268381c0, 0x323a100c,
	0x84064000, 0x009502c6, 0x00000009, 0x45cbf085, 0x8485c804,
	0x1d882840, 0x2300000a, 0x180c8406, 0x40000095, 0x82c94a44,
	0x00000a08, 0x08460a40, 0x40088504, 0x8a80106c, 0x70381008,
	0x3813e259, 0xa0bc0d0a, 0x00208408, 0x88400a28, 0x93484048,
	0x6c70380e, 0x7a680101, 0x3eac460a, 0x42042084, 0x06c00000,
	0x400003a1, 0x40abff08, 0x80766800, 0x007d2066, 0x01000d00,
	0x6800007d, 0x205c0120, 0x8036460a, 0x42048084, 0x048a8010,
	0xabff0880, 0x76680000, 0xa5206601, 0x000d0068, 0x0000a520,
	0x5c022080, 0x36760010, 0x0580ba14, 0x88404840, 0x00028010,
	0x68000006, 0x215c0173, 0x00fc5b4c, 0x00480a2a, 0x7b636982,
	0x370852e1, 0x64620000, 0x00244000, 0x018eb550, 0x48920851,
	0x2f8122b9, 0x7032000b, 0xc02b9838, 0x83610462, 0x00000036,
	0x6c0000f8, 0x48390089, 0x480c9404, 0x40000040, 0x0003a140,
#else
	0x68381c04, 0x215c0063, 0x002e8487, 0xaa086184, 0x84868040,
	0x02baca0c, 0x21460a40, 0x406c8484, 0xa0000068, 0x381c0421,
	0x6804002b, 0xac5c0060, 0x41805c01, 0xb0406c84, 0x850a0860,
	0x84048460, 0xa4204208, 0x404a4000, 0x03800068, 0x381c0421,
	0x6804002b, 0xac5c0060, 0x41805c01, 0x30406c84, 0x850a0860,
	0x84048460, 0xa4204208, 0x404a4000, 0x03800068, 0x381c0421,
	0x6804002b, 0xac5c0060, 0x41805c01, 0x30406c84, 0x850a0860,
	0x84048460, 0xa4204208, 0x404a4000, 0x0380005c, 0x81020061,
	0x5c089008, 0x00848015, 0x53e620c6, 0x28120168, 0x381c0423,
	0x25888420, 0x3c058508, 0x58c87600, 0x000ac076, 0x00100521,
	0xbc05f840, 0x61a00a07, 0x600000a2, 0x18486068, 0x04001720,
	0xba148850, 0x60400003, 0x80006838, 0x1c07215c, 0x0042bfe0,
	0x5cbf0048, 0x505c0080, 0x8060a008, 0x09c80184, 0x850880e0,
	0x40000081, 0x76680000, 0x78206601, 0x00084088, 0x02000000,
	0x842002a7, 0xc432820b, 0xff6c8424, 0x86c70380, 0xe7a68010,
	0x13eac880, 0xa088136a, 0x04608400, 0x08408228, 0x88084050,
	0x460a4204, 0x208406ca, 0x80205c09, 0x62bff0a4, 0x0018487a,
	0x40000380, 0x006c7038, 0x100a2593, 0x0bffc076, 0x00000ac0,
	0x84022683, 0x81c0323a, 0x100c8406, 0x40000095, 0x02c94864,
	0xa0819880, 0x08600000, 0x00945cbf, 0x0858485c, 0x8041d882,
	0x84023000, 0x00a180c8, 0x40640000, 0x09582c94, 0xa4400000,
	0xa0808460, 0xa4040088, 0x50484000, 0x0280106c, 0x70381008,
	0x3813e259, 0xa0bc0d0a, 0x00208408, 0x88400a28, 0x93484048,
	0x6c70380e, 0x7a680101, 0x3eac460a, 0x42042084, 0x06c00000,
	0x400003a1, 0x40000000, 0x00000000, 0x00000000, 0x00000000,
#endif
};

const uint8_t UpData_CommandFromTable[] = {
//CmdH, CmdL, Data(H), Data(MH), Data(ML), Data(L)
#ifdef	__DOWNLOAD_SPEED_UP__
   0x01, 0xB4, 0x00, 0x10, 0x00, 0xB2,         // 0xF00E command
   0x01, 0xB8, 0x00, 0x10, 0x00, 0xC0,         // 0xF00F command
   0x01, 0xc4, 0x00, 0x10, 0x00, 0x2e,         // bit 2, FromWrite
   0x01, 0xc8, 0x00, 0x10, 0x00, 0x2e,         // bit 3, FromWrite
   0x01, 0xcc, 0x00, 0x10, 0x00, 0x0e,         // bit 4, FromSectorErase
   0x01, 0xd4, 0x00, 0x10, 0x00, 0x1e,         // bit 6, FromNvrErase
   0x01, 0xd8, 0x00, 0x10, 0x00, 0x00,         // bit 7, FromAllErase
#else
   0x01, 0xc4, 0x00, 0x10, 0x00, 0x3e,         // bit 2, FromWrite
   0x01, 0xc8, 0x00, 0x10, 0x00, 0x3e,         // bit 3, FromWrite
   0x01, 0xcc, 0x00, 0x10, 0x00, 0x1e,         // bit 4, FromSectorErase
   0x01, 0xd0, 0x00, 0x10, 0x00, 0x0e,         // bit 5, FromBlockEraset
   0x01, 0xd4, 0x00, 0x10, 0x00, 0x2e,         // bit 6, FromNvrErase
   0x01, 0xd8, 0x00, 0x10, 0x00, 0x00,         // bit 7, FromAllErase
#endif
};
