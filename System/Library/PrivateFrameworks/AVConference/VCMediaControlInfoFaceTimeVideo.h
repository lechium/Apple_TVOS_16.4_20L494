//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeVideo
{
    unsigned char _controlInfoCameraStatus;	// 56 = 0x38
    unsigned char _controlInfoLTRBits;	// 57 = 0x39
    unsigned int _controlInfoLTRTimestamp;	// 60 = 0x3c
    struct {
        unsigned short totalPacketsPerFrame;
        unsigned short frameSequenceNumber;
    } _controlInfoFrameExtensionData;	// 64 = 0x40
    unsigned char _controlInfoFEC[36];	// 68 = 0x44
    unsigned long long _controlInfoFECLength;	// 104 = 0x68
    unsigned int _controlInfoProbe;	// 112 = 0x70
    unsigned int _controlInfoReceivedKbits;	// 116 = 0x74
    unsigned int _controlInfoReceivedPackets;	// 120 = 0x78
    unsigned int _controlInfoVideoPacketSize;	// 124 = 0x7c
    unsigned int _controlInfoVideoTimestamp;	// 128 = 0x80
    double _controlInfoVideoArrivalTime;	// 136 = 0x88
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;	// IMP=0x00000000003fd674
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;	// IMP=0x00000000003fd43c
- (_Bool)hasInfoType:(unsigned int)arg1;	// IMP=0x00000000003fd40c
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x00000000003fd2be
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3;	// IMP=0x00000000003fccc9
- (int)handleOptionalControlInfo:(CDStruct_d3f1d543 *)arg1;	// IMP=0x00000000003fcc22
- (id)description;	// IMP=0x00000000003fc9e8
- (unsigned long long)serializedSize;	// IMP=0x00000000003fc9de
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3 version:(unsigned char)arg4;	// IMP=0x00000000003fc971
- (id)init;	// IMP=0x00000000003fc551

@end
