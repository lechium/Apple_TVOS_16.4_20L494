//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    long long _seqNum;	// 24 = 0x18
    NSString *_dataString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001720a5
@property(readonly, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property(readonly, nonatomic) long long seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000171f57
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000000171dc0

@end
