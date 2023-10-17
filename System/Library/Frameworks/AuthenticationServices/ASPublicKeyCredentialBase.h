//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ASPublicKeyCredentialBase : NSObject
{
    NSData *_rawClientDataJSON;	// 8 = 0x8
    NSData *_credentialID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000002968
- (void).cxx_destruct;	// IMP=0x0000000000002aeb
@property(readonly, copy, nonatomic) NSData *credentialID; // @synthesize credentialID=_credentialID;
@property(readonly, copy, nonatomic) NSData *rawClientDataJSON; // @synthesize rawClientDataJSON=_rawClientDataJSON;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002a12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000029a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002970
- (id)initWithCredentialID:(id)arg1 rawClientDataJSON:(id)arg2;	// IMP=0x00000000000028a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
