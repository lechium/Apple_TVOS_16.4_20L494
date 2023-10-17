//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKFairPlaySAPSession : NSObject
{
    _Bool _complete;	// 8 = 0x8
    NSString *_SAPVersion;	// 16 = 0x10
}

@property(retain) NSString *SAPVersion; // @synthesize SAPVersion=_SAPVersion;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (id)signatureStringForData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b2518
- (id)signatureForData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b2510
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b2508
- (id)exchangeData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b2500
- (void)dealloc;	// IMP=0x00100000001b24c5
- (id)init;	// IMP=0x00100000001b24b7

@end
