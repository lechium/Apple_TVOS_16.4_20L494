//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecCDKeychain;

@interface SFKeychainServer : NSObject
{
    SecCDKeychain *_keychain;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001d7689
- (id)_keychain;	// IMP=0x00100000001d767b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001d72ff
- (id)initWithStorageURL:(id)arg1 modelURL:(id)arg2 encryptDatabase:(_Bool)arg3;	// IMP=0x00100000001d724d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
