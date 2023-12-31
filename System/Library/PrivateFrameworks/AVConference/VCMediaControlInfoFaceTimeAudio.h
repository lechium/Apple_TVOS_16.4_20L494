//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio
{
    unsigned int _controlInfoReceivedKbits;	// 56 = 0x38
    unsigned int _controlInfoReceivedPackets;	// 60 = 0x3c
    unsigned int _controlInfoAudioPacketSize;	// 64 = 0x40
    unsigned int _controlInfoAudioTimestamp;	// 68 = 0x44
    double _controlInfoArrivalTime;	// 72 = 0x48
    CDStruct_b4442fdd _controlFeedbackParameter;	// 80 = 0x50
    _Bool _videoEnabled;	// 116 = 0x74
    unsigned short _controlInfoSequenceNumber;	// 118 = 0x76
    _Bool _controlInfoIsDuplicatePacket;	// 120 = 0x78
    _Bool _controlInfoIsReceivedOnPrimary;	// 121 = 0x79
}

@property _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;	// IMP=0x00000000003fc51c
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;	// IMP=0x00000000003fc285
- (int)setInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;	// IMP=0x00000000003fc175
- (_Bool)hasInfoType:(unsigned int)arg1;	// IMP=0x00000000003fc148
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x00000000003fbfda
- (int)getInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;	// IMP=0x00000000003fbedc
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3;	// IMP=0x00000000003fbd27
- (int)handleOptionalControlInfo:(CDStruct_d3f1d543 *)arg1;	// IMP=0x00000000003fbc38
- (id)description;	// IMP=0x00000000003fb8aa
- (unsigned long long)serializedSize;	// IMP=0x00000000003fb8a0
@property(readonly) unsigned long long feedbackSize;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3 version:(unsigned char)arg4;	// IMP=0x00000000003fb815
- (id)init;	// IMP=0x00000000003fb5f5

@end

