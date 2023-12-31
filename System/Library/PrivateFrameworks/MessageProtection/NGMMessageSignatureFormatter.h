//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMMessageSignatureFormatter : NSObject
{
    NSData *_formattedSignedData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003717
@property(readonly, nonatomic) NSData *formattedSignedData; // @synthesize formattedSignedData=_formattedSignedData;
- (id)signedData;	// IMP=0x00000000000036ff
- (id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5;	// IMP=0x00000000000035e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

