//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject
{
    NSData *_modelData;	// 8 = 0x8
    NSString *_modelLocale;	// 16 = 0x10
    NSString *_modelHash;	// 24 = 0x18
    NSData *_digest;	// 32 = 0x20
    NSData *_signature;	// 40 = 0x28
    NSData *_certificate;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000038a8d
- (void).cxx_destruct;	// IMP=0x0020000000039418
@property(readonly, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(readonly, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(readonly, nonatomic) NSString *modelLocale; // @synthesize modelLocale=_modelLocale;
@property(readonly, nonatomic) NSData *modelData; // @synthesize modelData=_modelData;
- (id)description;	// IMP=0x001000000003926e
- (id)builtInRTModelDictionary;	// IMP=0x0010000000039134
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000039051
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000038f67
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000038d0d
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3;	// IMP=0x0010000000038c56
- (id)initWithHash:(id)arg1 locale:(id)arg2;	// IMP=0x0010000000038bbd
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6;	// IMP=0x0010000000038a95

@end

