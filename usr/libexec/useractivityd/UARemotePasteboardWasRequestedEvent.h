//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UARemotePasteboardWasRequestedEvent
{
    _Bool _usedStreams;	// 8 = 0x8
    _Bool _cancelled;	// 9 = 0x9
    _Bool _isFileCopy;	// 10 = 0xa
    _Bool _isAsyncTransfer;	// 11 = 0xb
    unsigned long long _payloadSize;	// 16 = 0x10
    unsigned long long _payloadXferTime;	// 24 = 0x18
    unsigned long long _payloadXferSpeed;	// 32 = 0x20
    unsigned long long _streamOpenTime;	// 40 = 0x28
    unsigned long long _streamDataSize;	// 48 = 0x30
    unsigned long long _streamDataXferTime;	// 56 = 0x38
    unsigned long long _streamDataXferSpeed;	// 64 = 0x40
    unsigned long long _totalTime;	// 72 = 0x48
    long long _errorCode;	// 80 = 0x50
    long long _underlyingErrorCode;	// 88 = 0x58
    long long _numberOfItems;	// 96 = 0x60
    NSString *_remoteDeviceType;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000001d043
@property(retain, nonatomic) NSString *remoteDeviceType; // @synthesize remoteDeviceType=_remoteDeviceType;
@property(nonatomic) _Bool isAsyncTransfer; // @synthesize isAsyncTransfer=_isAsyncTransfer;
@property(nonatomic) _Bool isFileCopy; // @synthesize isFileCopy=_isFileCopy;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) long long underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long streamDataXferSpeed; // @synthesize streamDataXferSpeed=_streamDataXferSpeed;
@property(nonatomic) unsigned long long streamDataXferTime; // @synthesize streamDataXferTime=_streamDataXferTime;
@property(nonatomic) unsigned long long streamDataSize; // @synthesize streamDataSize=_streamDataSize;
@property(nonatomic) unsigned long long streamOpenTime; // @synthesize streamOpenTime=_streamOpenTime;
@property(nonatomic) _Bool usedStreams; // @synthesize usedStreams=_usedStreams;
@property(nonatomic) unsigned long long payloadXferSpeed; // @synthesize payloadXferSpeed=_payloadXferSpeed;
@property(nonatomic) unsigned long long payloadXferTime; // @synthesize payloadXferTime=_payloadXferTime;
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
- (id)eventPayload;	// IMP=0x001000000001c8cd
- (id)eventName;	// IMP=0x001000000001c8c0

@end

