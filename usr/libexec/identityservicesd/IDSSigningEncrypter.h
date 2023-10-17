//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDServiceController, IDSSigningKeyDiversifier, NSString;
@protocol IDSMPFullDeviceIdentitySigner;

@interface IDSSigningEncrypter : NSObject
{
    unsigned short _keyIndex;	// 8 = 0x8
    unsigned int _keyType;	// 12 = 0xc
    IDSSigningKeyDiversifier *_keyDiversifier;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    IDSDServiceController *_serviceController;	// 32 = 0x20
    id <IDSMPFullDeviceIdentitySigner> _fullDeviceIdentitySigner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000149130
// Error: Property attributes should begin with the type ('T') attribute, property name: fullDeviceIdentitySigner
// Property attributes: (null)

@property(readonly, nonatomic) unsigned short keyIndex; // @synthesize keyIndex=_keyIndex;
@property(readonly, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) IDSSigningKeyDiversifier *keyDiversifier; // @synthesize keyDiversifier=_keyDiversifier;
@property(readonly, nonatomic) unsigned int keyType; // @synthesize keyType=_keyType;
- (id)_signData:(id)arg1 withType:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000148e20
- (unsigned short)_retrieveKeyIndex;	// IMP=0x0010000000148d50
- (id)signData:(id)arg1 withType:(long long)arg2 onQueue:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000148980
- (id)batchSignDatas:(id)arg1 withType:(long long)arg2 onQueue:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001485c0
- (void)signData:(id)arg1 withType:(long long)arg2 onQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000148270
- (void)batchSignDatas:(id)arg1 withType:(long long)arg2 onQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000147ef0
- (id)initWithKeyType:(unsigned int)arg1 keyDiversifier:(id)arg2 service:(id)arg3 serviceController:(id)arg4 fullDeviceIdentitySigner:(id)arg5;	// IMP=0x0010000000147d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

