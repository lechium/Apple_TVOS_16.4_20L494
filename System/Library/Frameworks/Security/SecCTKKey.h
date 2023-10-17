//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, TKClientTokenObject;

__attribute__((visibility("hidden")))
@interface SecCTKKey : NSObject
{
    TKClientTokenObject *_tokenObject;	// 8 = 0x8
    NSDictionary *_keychainAttributes;	// 16 = 0x10
    NSDictionary *_sessionParameters;	// 24 = 0x18
}

+ (id)fromKeyRef:(struct __SecKey *)arg1;	// IMP=0x001000000009f740
- (void).cxx_destruct;	// IMP=0x000000000009f70d
@property(retain, nonatomic) NSDictionary *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(readonly, nonatomic) NSDictionary *keychainAttributes; // @synthesize keychainAttributes=_keychainAttributes;
@property(retain, nonatomic) TKClientTokenObject *tokenObject; // @synthesize tokenObject=_tokenObject;
@property(readonly, nonatomic) long long algorithmID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009f3d4
- (id)performOperation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id *)arg5;	// IMP=0x000000000009f220
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009f1f2
- (id)initFromKey:(id)arg1;	// IMP=0x000000000009f127
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009e8e7

@end
