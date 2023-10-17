//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface BMStoreEventAtomValue : NSObject
{
    unsigned int _dataVersion;	// 8 = 0x8
    NSData *_eventData;	// 16 = 0x10
    double _dataTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002a01d
- (void).cxx_destruct;	// IMP=0x002000000002a254
@property(readonly, nonatomic) double dataTimestamp; // @synthesize dataTimestamp=_dataTimestamp;
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002a100
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002a025
- (id)proto;	// IMP=0x0010000000029f91
- (id)initWithProto:(id)arg1;	// IMP=0x0010000000029e1a
- (id)initWithEventData:(id)arg1 dataVersion:(unsigned int)arg2 dataTimestamp:(double)arg3;	// IMP=0x0010000000029d95

@end

